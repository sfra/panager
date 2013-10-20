#include<QtCore>
#include <QDebug>
#include "live.h"
#include "config.h"
Live::Live(const Config & _knf, QString _field, QObject *parent) :
    QThread(parent)
{
    Config knf(_knf);
    field=_field;
    db=QSqlDatabase::addDatabase(knf.sqlDriver);
    db.setHostName(knf.host);
    db.setUserName(knf.login);
    db.setPassword(knf.password);
    db.setDatabaseName(knf.base);
}
void Live::run(){

    if( db.open() ){// begin if
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
            QStringList record;

            for( int k=0;k<width;k++ ){
                record.append(query.value(k).toString());
            }

            output.append(record);
            current+=1;
        }

    } // end if
    db.close();
    emit finished(output);
}
