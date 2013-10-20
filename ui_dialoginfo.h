/********************************************************************************
** Form generated from reading UI file 'dialoginfo.ui'
**
** Created: Tue Apr 2 09:00:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINFO_H
#define UI_DIALOGINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogInfo
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *DialogInfo)
    {
        if (DialogInfo->objectName().isEmpty())
            DialogInfo->setObjectName(QString::fromUtf8("DialogInfo"));
        DialogInfo->resize(405, 168);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogInfo->sizePolicy().hasHeightForWidth());
        DialogInfo->setSizePolicy(sizePolicy);
        DialogInfo->setMinimumSize(QSize(405, 168));
        DialogInfo->setMaximumSize(QSize(405, 168));
        DialogInfo->setStyleSheet(QString::fromUtf8("#DialogInfo{\n"
"background-color:#ca9874;\n"
"}"));
        pushButton = new QPushButton(DialogInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 120, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"#pushButton{\n"
"border: 0px;\n"
"/*background-color: #b67042;*/\n"
"background-color:#ca9874;\n"
"background:url(:/new/images/button2m.png) no-repeat center center fixed;\n"
"/*background-repeat:no-repeat;*/\n"
"\n"
"}\n"
"\n"
"\n"
"#pushButton:hover{\n"
"/*	background-color: #f56f18;*/\n"
"\n"
"background-image:url(:/new/images/button2Nacm.png)\n"
"\n"
"}"));
        label = new QLabel(DialogInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 371, 81));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"	color: 8285ef;\n"
"	background-color:#ca9874;\n"
"	text-align: center;\n"
"	font-size:25px;\n"
"}"));

        retranslateUi(DialogInfo);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogInfo, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogInfo)
    {
        DialogInfo->setWindowTitle(QApplication::translate("DialogInfo", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogInfo", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogInfo", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogInfo: public Ui_DialogInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINFO_H
