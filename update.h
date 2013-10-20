#ifndef UPDATE_H
#define UPDATE_H

#include<QString>
#include<QtSql>
#include "config.h"
class Update
{
QSqlDatabase db;

QString responses[2];
public:
   Update (QByteArray &file, const Config &knf, QList<QList<QString> > &pairs,
                   int nr);
};

#endif // UPDATE_H
