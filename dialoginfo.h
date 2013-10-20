#ifndef DIALOGINFO_H
#define DIALOGINFO_H

#include <QDialog>

namespace Ui {
class DialogInfo;
}

class DialogInfo : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogInfo(QString info, QWidget *parent);
    ~DialogInfo();
    
private:
    Ui::DialogInfo *ui;
};

#endif // DIALOGINFO_H
