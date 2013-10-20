#include <QtSql>
#include<QSqlQuery>
#include<QSqlDatabase>
#include "update.h"
#include "config.h"
#include "dialoginfo.h"
#include <QDebug>
#include<QString>
#include<QVariant>
Update::Update(QByteArray & file,const Config & knf,QList<QList<QString> > & pairs,int nr)
{
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(knf.host);
    db.setUserName(knf.login);
    db.setPassword(knf.password);
    db.setDatabaseName(knf.base);

    if( !db.open() ){ qDebug()<<"No connection"; };

    QSqlQuery query(db);

    if( nr==-1 ){ //jesli nr=-1 znajdz najmniejszy wolny id
        qDebug()<<"SELECT max("+knf.fields.at(0)+") FROM "+knf.table;
        query.prepare("SELECT max("+knf.fields.at(0)+") FROM "+knf.table);
        query.exec();
        query.next();
        nr=query.value(0).toInt()+1;
    }

    QSqlQuery query2(db);
    QString squery="INSERT INTO "+knf.table+"(";
    for( int k=0;k<pairs.size();k++ ){
        squery+=pairs.at(k).at(0)+",";
    }

    squery+=knf.file+","+knf.fields.at(0)+") VALUES (";


    for( int k=0;k<pairs.size();k++ ){
        squery+=":"+pairs.at(k).at(0)+",";
    }

    squery+=":"+knf.file+",:"+knf.fields.at(0)+")";

    qDebug()<<squery;
    query2.prepare(squery);

    for( int k=0;k<pairs.size();k++ ){
        query2.bindValue(":"+pairs.at(k).at(0),pairs.at(k).at(1));
        qDebug()<<":"+pairs.at(k).at(0)<<","<<pairs.at(k).at(1);
    }

    query2.bindValue(":"+knf.file,file); //file
    query2.bindValue(":"+knf.fields.at(0),nr); //id

    if( query2.exec() ){
        DialogInfo * dialoginfo =new DialogInfo(QString::fromUtf8("Record has been added"),0);
        if(dialoginfo->exec()){};
    };

    qDebug()<<"Exec:"<<query2.executedQuery();
    qDebug()<< db.lastError().databaseText();
    db.close();


}
