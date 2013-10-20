/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRecord;
    QAction *actionAbout;
    QAction *actionProgram;
    QAction *actionC2h50h;
    QAction *actionSave_login_and_password;
    QAction *actionPhoto;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_minus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_prev;
    QPushButton *pushButton_next;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_loguj;
    QMenuBar *menuBar;
    QMenu *menuNew;
    QMenu *menuZak_adki;
    QMenu *menuHelp;
    QMenu *menuUsage;
    QMenu *menuDane_logowania;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1336, 743);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"/*	color: #f56f18;*/\n"
"color: #yelllow;\n"
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
"QTextEdit:focus{\n"
"	background-color:#ffffff;\n"
"}\n"
"#statusBar{\n"
"	color:white;\n"
"}\n"
"\n"
"QStatusBar{\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icol.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon1);
        actionRecord->setIconVisibleInMenu(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionProgram = new QAction(MainWindow);
        actionProgram->setObjectName(QString::fromUtf8("actionProgram"));
        actionC2h50h = new QAction(MainWindow);
        actionC2h50h->setObjectName(QString::fromUtf8("actionC2h50h"));
        actionSave_login_and_password = new QAction(MainWindow);
        actionSave_login_and_password->setObjectName(QString::fromUtf8("actionSave_login_and_password"));
        actionPhoto = new QAction(MainWindow);
        actionPhoto->setObjectName(QString::fromUtf8("actionPhoto"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("\n"
"QTextEdit{\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: .01 #aaaaaa,stop: .1 #eeeeee, stop: 0.7 #ffffff, stop: 1 #eeeeee);\n"
"color:#333333;\n"
"}\n"
"\n"
"QTextEdit:focus{\n"
"	background: #ffffff;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(850, 0));
        scrollArea->setMaximumSize(QSize(850, 16777215));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea{\n"
"	background-color: #ffffff;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 844, 688));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents{\n"
"	background-color:#ffffff;\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(70, 0));
        pushButton->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 0));
        pushButton_2->setMaximumSize(QSize(70, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(15, 15));

        horizontalLayout->addWidget(pushButton_2);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(spinBox);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        sizePolicy1.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy1);
        scrollArea_2->setMaximumSize(QSize(16777215, 500));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 464, 200));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(scrollAreaWidgetContents_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setMaximumSize(QSize(16777215, 50));
        textEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(textEdit);

        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(textEdit_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        horizontalLayout_4->addWidget(pushButton_plus);

        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));

        horizontalLayout_4->addWidget(pushButton_equal);

        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));

        horizontalLayout_4->addWidget(pushButton_minus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_prev = new QPushButton(centralWidget);
        pushButton_prev->setObjectName(QString::fromUtf8("pushButton_prev"));

        horizontalLayout_4->addWidget(pushButton_prev);

        pushButton_next = new QPushButton(centralWidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));

        horizontalLayout_4->addWidget(pushButton_next);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_loguj = new QPushButton(centralWidget);
        pushButton_loguj->setObjectName(QString::fromUtf8("pushButton_loguj"));
        pushButton_loguj->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_loguj->sizePolicy().hasHeightForWidth());
        pushButton_loguj->setSizePolicy(sizePolicy4);
        pushButton_loguj->setMaximumSize(QSize(100, 16777215));
        pushButton_loguj->setAutoFillBackground(false);
        pushButton_loguj->setStyleSheet(QString::fromUtf8("/*\n"
"QPushButton {\n"
"    border-width: 4px;\n"
"    border-image: url(:/new/prefix1/button.png) 4 4 4 4 stretch stretch;\n"
" 	\n"
"	font:bold;\n"
"}*/\n"
"/*\n"
"QPushButton:hover{\n"
"color: #ffffff;\n"
"}*/"));

        horizontalLayout_4->addWidget(pushButton_loguj);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1336, 15));
        menuBar->setStyleSheet(QString::fromUtf8("#scrollArea{\n"
"	color: #ffffff;\n"
"}\n"
"QMenuBar {\n"
"     background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                       stop:0 lightgray, stop:1 darkgray);\n"
" }\n"
"\n"
" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"     background: #a8a8a8;\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     background: #888888;\n"
" }\n"
"#statusBar{\n"
"	color:#ffffff;\n"
"}"));
        menuNew = new QMenu(menuBar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuNew->setAutoFillBackground(false);
        menuNew->setStyleSheet(QString::fromUtf8(""));
        menuZak_adki = new QMenu(menuBar);
        menuZak_adki->setObjectName(QString::fromUtf8("menuZak_adki"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuUsage = new QMenu(menuHelp);
        menuUsage->setObjectName(QString::fromUtf8("menuUsage"));
        menuDane_logowania = new QMenu(menuBar);
        menuDane_logowania->setObjectName(QString::fromUtf8("menuDane_logowania"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("QStatusBar {\n"
"	color: white;\n"
"	\n"
"}\n"
"#statusBar{\n"
"	color:#ffffff;\n"
"}"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNew->menuAction());
        menuBar->addAction(menuZak_adki->menuAction());
        menuBar->addAction(menuDane_logowania->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuNew->addAction(actionRecord);
        menuNew->addAction(actionPhoto);
        menuHelp->addAction(menuUsage->menuAction());
        menuHelp->addAction(actionAbout);
        menuUsage->addAction(actionProgram);
        menuUsage->addAction(actionC2h50h);
        menuDane_logowania->addAction(actionSave_login_and_password);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(buttonOKHandler()));
        QObject::connect(pushButton_loguj, SIGNAL(clicked()), MainWindow, SLOT(showLogin()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Panager", 0, QApplication::UnicodeUTF8));
        actionRecord->setText(QApplication::translate("MainWindow", "Record", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRecord->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Zmodyfikuj lub <span style=\" font-weight:600; color:#c81b52;\">add</span><span style=\" font-weight:400; color:#000000;\">record</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecord->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionProgram->setText(QApplication::translate("MainWindow", "Program", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionProgram->setToolTip(QApplication::translate("MainWindow", "Program", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionC2h50h->setText(QApplication::translate("MainWindow", "c2h50h", 0, QApplication::UnicodeUTF8));
        actionSave_login_and_password->setText(QApplication::translate("MainWindow", "Save login and password", 0, QApplication::UnicodeUTF8));
        actionSave_login_and_password->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionPhoto->setText(QApplication::translate("MainWindow", "Photo", 0, QApplication::UnicodeUTF8));
        actionPhoto->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "&OK", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("MainWindow", "Alt+O", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "live", 0, QApplication::UnicodeUTF8));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_plus->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        pushButton_equal->setShortcut(QApplication::translate("MainWindow", "Ctrl+=", 0, QApplication::UnicodeUTF8));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_minus->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        pushButton_prev->setText(QApplication::translate("MainWindow", "prev", 0, QApplication::UnicodeUTF8));
        pushButton_prev->setShortcut(QApplication::translate("MainWindow", "Ctrl+,", 0, QApplication::UnicodeUTF8));
        pushButton_next->setText(QApplication::translate("MainWindow", "next", 0, QApplication::UnicodeUTF8));
        pushButton_next->setShortcut(QApplication::translate("MainWindow", "Ctrl+.", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "&Search", 0, QApplication::UnicodeUTF8));
        pushButton_loguj->setText(QApplication::translate("MainWindow", "&Login", 0, QApplication::UnicodeUTF8));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        menuZak_adki->setTitle(QApplication::translate("MainWindow", "Bookmarks", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuUsage->setTitle(QApplication::translate("MainWindow", "Usage", 0, QApplication::UnicodeUTF8));
        menuDane_logowania->setTitle(QApplication::translate("MainWindow", "Login data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
