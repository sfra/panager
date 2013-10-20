//#include "Pass.h"
#include "mainwindow.h"
#include "logic.h"
#include <QDialog>
#include <QtSql>

//#include <QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include <QDebug>
#include<QCoreApplication>
#include <QApplication>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QApplication::setStyle("oxygen");

    MainWindow w;
   // a.setStyle(QStyleFactory::create("fusion"));
    a.setStyleSheet("QMenuBar { width: 100px; padding:5px 0px 5px 20px;}\n"
                    "QMenuBar::item {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #8184ee, stop:0.5 #6c6ec7, stop: 1 darkgray);margin:5px 10px 0px 1px; text-align: center; padding:2px 10px 2px 10px; border-radius:4px; border:2px solid white;}"
                    "QMenu{position:relative;left:100px;border-radius:4px; border:1px solid black; min-width: 100px; color:#000000;background-color:#eeeeee;}"
                    "QMenu::item{}"
                    " QMenuBar::item:selected{background-color:#6ad8cd; color:#96410a; border-radius:4px; border:1px solid black}\n"
                    " QMenu:selected  {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 lightgray, stop:0.5 black, stop: 1 darkgray); color:#ffffff;"
                    "border-radius:4px; border:1px solid white;}"
                    "QTableWidget {background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,stop: 0 #6ad8cd, stop: 1 white);}"
                    "#scrollAreaWidgetContents_2{border-radius:4px;background-color:qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,stop: 0 #000000, stop: 1 white);}"
                    "QCheckBox {spacing: 5px;}"
                    "QCheckBox::indicator {width: 13px;height: 13px;}");

    w.show();
    
    return a.exec();
}
