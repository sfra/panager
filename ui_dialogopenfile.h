/********************************************************************************
** Form generated from reading UI file 'dialogopenfile.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPENFILE_H
#define UI_DIALOGOPENFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogOpenFile
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *DialogOpenFile)
    {
        if (DialogOpenFile->objectName().isEmpty())
            DialogOpenFile->setObjectName(QString::fromUtf8("DialogOpenFile"));
        DialogOpenFile->resize(904, 527);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogOpenFile->sizePolicy().hasHeightForWidth());
        DialogOpenFile->setSizePolicy(sizePolicy);
        DialogOpenFile->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	color: #f56f18;\n"
"	/*background-color:#ba4a00;*/\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #220d00, stop: 1 #220d00);\n"
"	background-image:url(:/new/prefix1/background.png);\n"
"	 background-repeat: repeat-x;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"/*	color:#494b7a;*/\n"
"	color:#2f304f;\n"
"    border-width: 4px;\n"
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
"QTreeView{\n"
"/*background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: .01 #aaaaaa,stop: .1 #eeeeee, stop: 0.7 #ffffff, stop: 1 #eeeeee);*/\n"
"background-color:#333333;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"}\n"
"\n"
"\n"
"\n"
"QTreeView:focus{\n"
"background: QLinearGra"
                        "dient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: .01 #aaaaaa,stop: .1 #eeeeee, stop: 0.7 #ffffff, stop: 1 #eeeeee);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"\n"
"}\n"
""));
        layoutWidget = new QWidget(DialogOpenFile);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 861, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(layoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMaximumSize(QSize(859, 467));

        verticalLayout->addWidget(treeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_Cancel = new QPushButton(layoutWidget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        horizontalLayout->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogOpenFile);

        QMetaObject::connectSlotsByName(DialogOpenFile);
    } // setupUi

    void retranslateUi(QDialog *DialogOpenFile)
    {
        DialogOpenFile->setWindowTitle(QApplication::translate("DialogOpenFile", "Open file", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogOpenFile", "&OK", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("DialogOpenFile", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogOpenFile: public Ui_DialogOpenFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOPENFILE_H
