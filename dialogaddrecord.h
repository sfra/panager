#ifndef DIALOGADDRECORD_H
#define DIALOGADDRECORD_H

#include <QDialog>
#include "dialogopenfile.h"
#include "config.h"

namespace Ui {
class DialogAddRecord;
}

class DialogAddRecord : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAddRecord(const Config & knf,QWidget *parent = 0);
    ~DialogAddRecord();
    
private slots:
    void on_toolButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::DialogAddRecord *ui;
    DialogOpenFile * dialogOpenFile;
    QString fileString;
    QByteArray fileBA;
    QString host;
    QString login;
    QString password;
    QList<QLineEdit *> pola;
    QList<QList<QString> > pairs;
    Config cnf;
};

#endif // DIALOGADDRECORD_H
