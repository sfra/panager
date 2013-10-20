#ifndef CONFIG_H
#define CONFIG_H

#include<QCoreApplication>
#include<QDebug>
#include<QDir>
#include<QFile>
#include<QString>
#include<QList>



class Config
{
public:
    Config();
    Config(const Config & c);
    void replace(QString par);
    QString host;
    QString login;
    QString password;
    QStringList fields;
    QString keySearch;
    QString file;
    QString base;
    QString table;
    QString sqlDriver;
    QString CONFIG_FILE;
    int bitmap;
};

#endif // CONFIG_H
