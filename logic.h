#include <QtSql>

#include <string>
#include <poppler/qt4/poppler-qt4.h>

#include<config.h>
#include<dialoginfo.h>
#ifndef LOGIC_H
#define LOGIC_H



class Connection : public QSqlDatabase{
private:

    QString login;
    QString password;

    DialogInfo *dialoginfo;
public:
    QByteArray file;
    QSqlDatabase db;
    Connection(QByteArray & ba, int &nr, const Config &knf);
    Connection();
    QSqlDatabase getDb();

    QSqlQuery query;
    QString response;
    QStringList responses;
    int id;
    QStringList writeL();
    int strona;
    QByteArray getFile();

};




#endif // LOGIC_H
