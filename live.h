#ifndef LIVE_H
#define LIVE_H
#include<QtCore>
#include <QThread>
#include<QtSql>
#include "config.h"
class Live : public QThread
{
    Q_OBJECT
public:
    explicit Live(const Config &_knf, QString _field, QObject *parent);
    
signals:
    void finished(QList<QStringList>);
public slots:

protected:
    void run();
private:
        QSqlDatabase db;
        Config knf;
        QString field;
        QList<QStringList> output;
};

#endif // LIVE_H
