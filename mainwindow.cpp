#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logic.h"
#include<QtCore>
#include<QtGui>
#include <QDialog>
#include<QString>
#include<QThread>
#include "pass.h"
#include "config.h"
#include "logic.h"
#include "worker.h"
#include "dialogaddrecord.h"
#include <QGraphicsView>
#include<QGraphicsScene>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<QApplication::ColorSpec();
    Config config;
    host=config.host;
    login=config.login;
    password=config.password;

    for( int k=0,max=config.fields.length();k<max;k++ ){
        if( config.fields.at(k).at(0)!=';' ){
        textLabels.append(config.fields.at(k).trimmed());
        }
    }

    dialogAddRecord=new DialogAddRecord(config, this);
    imageLabel=new QLabel;
    workerFinished=true;
    tableClickable=true;
    imgMagn=100;

    ui->setupUi(this);
    pagesStatusBar=new QLabel(this);
    pagesStatusBar->setStyleSheet("QLabel { color: white;}");
    this->statusBar()->addPermanentWidget(pagesStatusBar,1);
    ui->menuBar->setStyleSheet("QMenu #menuNew{color:#ff0000;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonOKHandler(){
    int nr=ui->spinBox->value();
    strona=0;
    Connection connection(fileByA, nr,config);
    imageLabel->setPixmap(ByteArrayToQLabel(fileByA,strona,100));
    ui->scrollArea->setStyleSheet("background-color: transparent; border: 0px");
    ui->scrollArea->setWidget(imageLabel);
    imageLabel->setAlignment(Qt::AlignCenter);
    QString output="";
    QStringList outputList=connection.writeL();

    for( int k=0;k<outputList.size();k++ ){
        output+=outputList.at(k)+"\n---------\n";
    }

    ui->textEdit_2->setText(output);

} // end buttonOKHandler



void MainWindow::showLogin(){
    di=new Pass(&login,&password,0);
    if( di->exec() ){}

    config.login=login;
    config.password=password;
}


void MainWindow::on_actionRecord_triggered()
{

    if( dialogAddRecord->exec() ){}

    qDebug()<<"Record action";
}

void MainWindow::on_actionPhoto_triggered()
{
    qDebug()<<"Photoaction";
}

void MainWindow::live(){

    if( !workerFinished ) return;
    workerFinished=false;
    tableClickable=false;
    QString field(ui->textEdit->toPlainText());
    sqlQueryModel=new QSqlQueryModel;
    th=new QThread;
    wr=new Worker(config,field);
    wr->moveToThread(th);

    connect(th, SIGNAL(started()), wr, SLOT(process()));
    connect(wr, SIGNAL(finished(QStringList)), th, SLOT(quit()));
    connect(wr, SIGNAL(finished(QStringList)), wr, SLOT(deleteLater()));
    connect(th, SIGNAL(finished()), th, SLOT(deleteLater()));
    connect(wr,SIGNAL(finished(QStringList)),this,SLOT(onWorkerFinished(QStringList)));
    th->start();
}



void MainWindow::on_actionSave_login_and_password_triggered()
{
    config.replace("login"); config.replace("password");
    qDebug()<<"Save password";
}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}




void MainWindow::on_textEdit_textChanged()
{
    if( ui->checkBox->isChecked() && ui->textEdit->hasFocus() &&
            ui->textEdit->toPlainText().length()<10 && ui->textEdit->toPlainText().length()>1 ){
        live();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    live();
}




void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{

    if( !tableClickable ) return;
    qDebug()<<"::::"<<ui->tableWidget->item(row,column)->text();
    ui->spinBox->setValue(ui->tableWidget->item(row,0)->text().toInt());
    this->buttonOKHandler();
}


void MainWindow::renderPage(int magn){
    imageLabel->setPixmap(ByteArrayToQLabel(fileByA,strona,magn));
    ui->scrollArea->setStyleSheet("background-color: transparent; border: 0px");
    ui->scrollArea->setWidget(imageLabel);
    imageLabel->setAlignment(Qt::AlignCenter);
}



void MainWindow::on_pushButton_next_clicked()
{
    strona+=1;
    renderPage(imgMagn);
}



void MainWindow::on_pushButton_prev_clicked()
{
    if( strona==0 ) return;
    strona-=1;
    renderPage(imgMagn);
}



void MainWindow::on_pushButton_plus_clicked()
{
    imgMagn+=10;
    renderPage(imgMagn);
}


void MainWindow::on_pushButton_minus_clicked()
{
    imgMagn-=10;
    renderPage(imgMagn);
}

void MainWindow::on_pushButton_equal_clicked()
{
    //if( strona ==0 ) return;
    imgMagn=100;
    renderPage(imgMagn);
}


QPixmap MainWindow::ByteArrayToQLabel(QByteArray co,int str, int dimension){
    Poppler::Document * popDoc=Poppler::Document::loadFromData(co);
    if( !popDoc ){
        QPixmap pixmap;

        pixmap.loadFromData(co);
        pagesStatusBar->setText((QString("image file")));

        double scale=(double)(((double)dimension)/(double)100);
        return pixmap.scaled(pixmap.width()*(scale),pixmap.height()*(scale));

    }


    popDoc->setRenderHint(Poppler::Document::TextAntialiasing);
    pagesStatusBar->setText("page: "+QString::number(str+1)+"/"+QString::number(popDoc->numPages()));
    if(popDoc->numPages()-1<=str) str=popDoc->numPages()-1;
    QImage image = popDoc->page(str)->renderToImage(dimension,dimension);
    QPixmap pixmap=QPixmap::fromImage(image);


    return pixmap;
} // end ByteArrayToQLabel




void MainWindow::onWorkerFinished(QStringList sl){

    for( int k=0;k<sl.size();k++ ){
        qDebug()<<sl.at(k);
    }

    int height=sl.size();
    int current=0;

    if( height==0 ) {
        ui->tableWidget->setColumnCount(1);
        ui->tableWidget->setRowCount(1);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem( "No results" ));

        workerFinished=true;
        tableClickable=true;

        return ;
    }

    QStringList line=sl.at(current).split("_@_");
    line.removeLast();
    int width=line.size();



    ui->tableWidget->setColumnCount(width);
    ui->tableWidget->setRowCount(height);
        ui->tableWidget->setHorizontalHeaderLabels(textLabels);

    while( current<height ){
        line=sl.at(current).split("_@_");
        for( int k=0;k<width;k++ ){
            ui->tableWidget->setItem(current,k,new QTableWidgetItem(line.at(k) ));
            ui->tableWidget->item(current,k)->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        }
        current+=1;

        workerFinished=true;
        tableClickable=true;
    }


} // end onWorkerFinished




