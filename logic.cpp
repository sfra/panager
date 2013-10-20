#include <QtSql>
#include<QGraphicsScene>
#include<QGraphicsView>
#include <poppler/qt4/poppler-qt4.h>

#include <QDebug>
#include <QString>
#include<string>
#include<logic.h>
#include<pass.h>
#include <dialoginfo.h>
#include<config.h>

Connection::Connection(QByteArray &ba, int &nr,const Config & knf){
    db=QSqlDatabase::addDatabase(knf.sqlDriver);
    db.setHostName(knf.host);
    db.setUserName(knf.login);
    db.setPassword(knf.password);
    db.setDatabaseName(knf.base);

    if( !db.open() ) qDebug()<<"Brak połączenia";

    QSqlQuery query(db);
    query.prepare("SELECT * FROM "+knf.table+" WHERE "+ knf.fields[0]+" =:id");
    query.bindValue(":id",nr);
    query.exec();

    if( db.lastError().databaseText().contains("Access denied for") ){
        dialoginfo=new DialogInfo(QString::fromUtf8("You are not logged in"),0);
        if(dialoginfo->exec()){}
        qDebug()<<db.lastError().databaseText();
    }

    int bitmap=0;

    for( int k=0;k<knf.fields.size();k++ ){
        if( knf.fields.at(k).at(0)==';' ){
            bitmap=k; break;
        }
    }

    while ( query.next() ){
        file=query.value(bitmap).toByteArray();
        ba=file;
        for( int k=0;k<knf.fields.size();k++ ){
            if( k!=bitmap ) {responses.append(query.value(k).toString());}
        }
    }

    db.close();
} //end Connection


Connection::Connection(){
}



QSqlDatabase Connection::getDb(){
    return db;
}

QString response;
QStringList responses;

QStringList Connection::writeL(){

    return responses;
}

QByteArray Connection::getFile(){
    return file;
}
