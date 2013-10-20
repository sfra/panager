#include<QCoreApplication>
#include<QDebug>
#include<QDir>
#include<QFile>
#include<QString>
#include<QList>
#include<QByteArray>
#include<QTextStream>
#include "config.h"

Config::Config()
{
    CONFIG_FILE=QDir::homePath()+"/.panager/conf.cnf";
    QFile fileConfig(CONFIG_FILE);
    QString line;
    if ( !fileConfig.open(QIODevice::ReadOnly | QIODevice::Text) )
             return;

         while ( !fileConfig.atEnd() ) {
             line=QString::fromAscii(fileConfig.readLine());
             QStringList pairs=line.split('=');
             if( pairs.at(0)=="host" ) host=pairs.at(1).trimmed();
             if( pairs.at(0)=="login" ) login=pairs.at(1).trimmed();
             if( pairs.at(0)=="password" ) password=pairs.at(1).trimmed();
             if( pairs.at(0)=="base" ) base=pairs.at(1).trimmed();
             if( pairs.at(0)=="table" ) table=pairs.at(1).trimmed();
             if( pairs.at(0)=="sqlDriver" ) sqlDriver=pairs.at(1).trimmed().toUpper();
             if( pairs.at(0)=="keySearch" ) keySearch=pairs.at(1).trimmed().toUpper();



             if( pairs.at(0)=="fields" ){
                 fields=pairs.at(1).split(',');
                 for( int u=0;u<fields.size();u++ ){
                     if( fields.at(u).at(0)==';' ){
                         file=fields.at(u).trimmed();
                         file.remove(0,1);
                         bitmap=u;
                         break;
                     }
                 }
             }

         }

         fileConfig.close();

}

Config::Config(const Config &c){
    host=c.host;
    login=c.login;
    sqlDriver=c.sqlDriver;
    password=c.password;
    fields=c.fields;
    bitmap=c.bitmap;
    file=c.file;
    base=c.base;
    table=c.table;
    CONFIG_FILE=c.CONFIG_FILE;

}

void Config::replace(QString par){
    QFile fileConfig(CONFIG_FILE);
    QStringList fileList;
    QStringList pairs;
    if ( !fileConfig.open(QIODevice::ReadOnly | QIODevice::Text) ) return;

    while (!fileConfig.atEnd()) {
        fileList.append( QString::fromAscii(fileConfig.readLine()) );
    }
    fileConfig.close();

    for(int k=0;k<fileList.size();k++){
        pairs=fileList.at(k).split('=');
        if(pairs.at(0)==par){
            if(par=="login") pairs[1]=login;
            if(par=="password") pairs[1]=password;
            fileList[k]=pairs.at(0)+"="+pairs.at(1)+"\n";
            break;
        }
    }


    fileConfig.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&fileConfig);
    for( int k=0;k<fileList.size();k++ ){
        out<< fileList.at(k);
    }
    fileConfig.close();

}




