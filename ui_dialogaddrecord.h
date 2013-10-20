/********************************************************************************
** Form generated from reading UI file 'dialogaddrecord.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDRECORD_H
#define UI_DIALOGADDRECORD_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddRecord
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *DialogAddRecord)
    {
        if (DialogAddRecord->objectName().isEmpty())
            DialogAddRecord->setObjectName(QString::fromUtf8("DialogAddRecord"));
        DialogAddRecord->resize(671, 684);
        DialogAddRecord->setStyleSheet(QString::fromUtf8("#DialogAddRecord{\n"
"	color: #f56f18;\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #220d00, stop: 1 #220d00);\n"
"	background-image:url(:/new/prefix1/background.png);\n"
"	 background-repeat: repeat-x;\n"
"\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"/*	color:#61e49c;*/\n"
"border-radius: 4;\n"
"color:#61e49c;\n"
"background-color: #923f07; \n"
"padding: 3px;\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"/*	color:#494b7a;*/\n"
"	color:#2f304f;\n"
"    border-width: 7x;\n"
" /*   border-image: url(:/new/prefix1/button.png) 4 4 4 4 stretch stretch;*/\n"
"/*border-image:url(:/new/prefix1/button.png) stretch stretch;*/\n"
"border-image:url(:/new/images/button2.png);\n"
"\n"
"	}\n"
"\n"
"QPushButton:hover{\n"
"	color:#5d609c;\n"
"	border-image: url(:/new/images/button2Nac.png)  stretch stretch;;\n"
"\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"}\n"
"QPlainTextEdit{\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: .01 #aaaaaa,stop: .1 #eeeeee, s"
                        "top: 0.7 #ffffff, stop: 1 #eeeeee);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"}\n"
"\n"
"\n"
"\n"
"QPlainTextEdit:focus{\n"
"	background-color:#ffffff;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        buttonBox = new QDialogButtonBox(DialogAddRecord);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(530, 10, 131, 31));
        buttonBox->setStyleSheet(QString::fromUtf8("* {\n"
"padding:5px;\n"
"}"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        line = new QFrame(DialogAddRecord);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(120, 20, 41, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(DialogAddRecord);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 10, 331, 26));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        toolButton = new QToolButton(horizontalLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_2->addWidget(toolButton);

        horizontalLayoutWidget_2 = new QWidget(DialogAddRecord);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 10, 91, 24));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        retranslateUi(DialogAddRecord);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAddRecord, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAddRecord, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAddRecord);
    } // setupUi

    void retranslateUi(QDialog *DialogAddRecord)
    {
        DialogAddRecord->setWindowTitle(QApplication::translate("DialogAddRecord", "Add/Modify record", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogAddRecord", "file", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("DialogAddRecord", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAddRecord", "id", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAddRecord: public Ui_DialogAddRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDRECORD_H
