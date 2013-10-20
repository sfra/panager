#ifndef PASS_H
#define PASS_H

#include <QDialog>
#include <QString>
namespace Ui {
class Pass;
}

class Pass : public QDialog
{
    Q_OBJECT
    
public:
    //    explicit Pass(QWidget *parent = 0);
    explicit Pass(QString *l,QString *p, QWidget *parent);    ~Pass();
    QString* login;
    QString* password;
public slots:
    void inputLoginHandler(QString);
    void buttonOKHandler();

private:
    Ui::Pass *ui;
};

#endif // PASS_H
