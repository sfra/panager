#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <pass.h>
#include <QString>
#include <QScrollArea>
#include<QLabel>
#include<QtSql>
#include "config.h"
#include "logic.h"
#include "dialogaddrecord.h"
#include <worker.h>
namespace Ui {
class Connection;

class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString host;
    QString login;
    QString password;
    QByteArray loginBA;
    char *loginChar;
    QByteArray passwordBA;
    char *passwordChar;
    QSqlQueryModel *sqlQueryModel;
    QTableModel *tableModel;
public slots:
    void buttonOKHandler();
    void showLogin();
private slots:
    void on_actionRecord_triggered();

    void on_actionPhoto_triggered();

    void on_actionSave_login_and_password_triggered();

    void on_pushButton_2_clicked();



    void on_textEdit_textChanged();

    void on_pushButton_3_clicked();



    void on_tableWidget_cellDoubleClicked(int row, int column);


    void on_pushButton_next_clicked();



    void on_pushButton_prev_clicked();
    void onWorkerFinished(QStringList sl);

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_equal_clicked();

private:
    Ui::MainWindow *ui;
    Pass* di;
    DialogAddRecord* dialogAddRecord;
    QScrollArea *scrollarea;
    QLabel *imageLabel;
    Config config;
    Connection polanczenie;
    QByteArray fileByA;
    int strona;
    Poppler::Document * pp;
    void live();
    void renderPage(int magn);
    int imgMagn;
    QPixmap ByteArrayToQLabel(QByteArray co, int str,int dimension);
    QThread * th;
    Worker * wr;
    bool workerFinished;
    bool tableClickable;
    QStringList textLabels;
    QLabel * pagesStatusBar;

};

#endif // MAINWINDOW_H
