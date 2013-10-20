#include<QLineEdit>
#include "dialogaddrecord.h"
#include "ui_dialogaddrecord.h"
#include "dialogopenfile.h"
#include "update.h"
#include "config.h"
DialogAddRecord::DialogAddRecord(const Config & knf, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddRecord)
{

    dialogOpenFile=new DialogOpenFile(fileBA,fileString,this);
    Config cnf(knf);
    host=cnf.host;
    login=cnf.login;
    password=cnf.password;
    QVBoxLayout* verticalLayoutDyn=new QVBoxLayout(this);
    verticalLayoutDyn->insertSpacing(0,40);

    for( int k=1,j=0;k<cnf.fields.size();k++ ){
        if( cnf.fields.at(k).at(0)==';' ) continue;
        pola.append(new QLineEdit);
        verticalLayoutDyn->addWidget(new QLabel(cnf.fields.at(k)));
        verticalLayoutDyn->addWidget(pola.at(j));
        j+=1;
    }

    ui->setupUi(this);
    this->resize(this->width(),cnf.fields.size()*30);
}

DialogAddRecord::~DialogAddRecord()
{
    delete ui;
}

void DialogAddRecord::on_toolButton_clicked()
{
    if( dialogOpenFile->exec() ){
    }
    if( fileString.isNull() || fileString=="" ) return;
    QFileInfo fi(fileString);
    ui->lineEdit_2->setText(fi.fileName());
}

void DialogAddRecord::on_buttonBox_accepted()
{

    QList<QString> temp;
    pairs.clear();

    for( int k=1,j=0; k<cnf.fields.size();k++ ){
        if( cnf.fields.at(k).at(0)==';' ) continue;
        temp.append(cnf.fields.at(k));
        temp.append(pola.at(j)->text());
        pairs.append(temp);
        temp.clear();
        j+=1;
    }

    Update upd(fileBA, cnf,pairs,-1);
}
