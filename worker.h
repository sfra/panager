#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include<QtSql>
#include<config.h>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(const Config & _knf, QString _field);
    
signals:
    void finished(QStringList);
public slots:
    void process();
private:
    QSqlDatabase db;
    Config knf;
    QString field;
    QStringList output;
    
};

#endif // WORKER_H
