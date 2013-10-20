#include "dialoginfo.h"
#include "ui_dialoginfo.h"
#include <QString>
DialogInfo::DialogInfo(QString info,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfo)
{


    ui->setupUi(this);

    ui->label->setText(info);
}

DialogInfo::~DialogInfo()
{
    delete ui;
}
