#ifndef DIALOGOPENFILE_H
#define DIALOGOPENFILE_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include<QIODevice>
namespace Ui {
class DialogOpenFile;
}

class DialogOpenFile : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogOpenFile(QByteArray &fileByteArray, QString &fileName, QWidget *parent);
    ~DialogOpenFile();
    
private slots:
    void on_pushButton_clicked();

    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_pushButton_Cancel_clicked();

private:
    Ui::DialogOpenFile *ui;
    QDirModel * model;
    QString* filePath;
    QByteArray* fileBA;
    QModelIndex index;
    QFile *file;

};

#endif // DIALOGOPENFILE_H
