#include<QtSql>
#include "worker.h"
#include "config.h"
Worker::Worker(const Config & _knf, QString _field) :
    QObject(0)
{
    Config knf(_knf);
    field=_field;
    db=QSqlDatabase::addDatabase(knf.sqlDriver);
    db.setHostName(knf.host);
    db.setUserName(knf.login);
    db.setPassword(knf.password);
    db.setDatabaseName(knf.base);
}

void Worker::process(){

    if( db.open() ){ //begin if
        QSqlQuery query;
        QString qquery="SELECT ";

        for( int k=0;k<knf.fields.size();k++ ){
            if( k==knf.bitmap ) continue;
            qquery+=knf.fields.at(k)+", ";
        }

        qquery.remove(qquery.size()-2,2);
        qquery+=" FROM "+knf.table+" WHERE "+knf.keySearch+" LIKE '"+field+"%'";
        qDebug()<<qquery;
        query.prepare(qquery);
        query.exec();
        int width=query.record().count();
        int current=0;

        while( query.next() ){
            QString record="";

            for( int k=0;k<width;k++ ){
                //record.append(query.value(k).toString());
                record+=query.value(k).toString()+"_@_";
            }

            output.append(record);
            current+=1;
        }

    } //end if

    db.close();
    emit finished(output);
}
