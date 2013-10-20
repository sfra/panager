#include "pass.h"
#include "ui_pass.h"

Pass::Pass(QString *l, QString *p, QWidget *parent=0) :
    QDialog(parent),
    ui(new Ui::Pass)
{
    login=l;
    password=p;
    ui->setupUi(this);
    ui->lineEdit->setFocus();

}

Pass::~Pass()
{
    delete ui;
}

void Pass::inputLoginHandler(QString inp){
    //    login=ui->lineEdit->text();
    //login=inp;
    //  *login=ui->lineEdit->text();
}

void Pass::buttonOKHandler(){
    *login=ui->lineEdit->text();
    *password=ui->lineEdit_2->text();
    // *password=ui->lie
}
