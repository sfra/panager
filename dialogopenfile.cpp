#include "dialogopenfile.h"
#include "ui_dialogopenfile.h"
#include <QDebug>
#include <QIODevice>
DialogOpenFile::DialogOpenFile(QByteArray & fileByteArray, QString &fileName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogOpenFile)
{
    fileBA=&fileByteArray;
    filePath=&fileName;
    ui->setupUi(this);
    model = new QDirModel(this);
    model->setReadOnly(true);
    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir:: Name);


    ui->treeView->setModel(model);
    QModelIndex index=model->index(QDir::homePath());


    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setColumnWidth(0,600);

}

DialogOpenFile::~DialogOpenFile()
{
    delete ui;
}

void DialogOpenFile::on_pushButton_clicked()
{

    index=ui->treeView->currentIndex();
    *filePath=model->fileInfo(index).absoluteFilePath();
    file=new QFile(*filePath);
    if ( !(*file).open(QIODevice::ReadOnly) )
        return;
    *fileBA=file->readAll();

    file->close();
    this->close();
}



void DialogOpenFile::on_treeView_doubleClicked(const QModelIndex &index)
{
    *filePath=model->fileInfo(index).absoluteFilePath();
    file=new QFile(*filePath);
    if ( !(*file).open(QIODevice::ReadOnly) )
        return;
    *fileBA=file->readAll();

    file->close();
    this->close();
}

void DialogOpenFile::on_pushButton_Cancel_clicked()
{
    this->close();
}
