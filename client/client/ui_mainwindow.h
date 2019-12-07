/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *DOWN_FILE;
    QAction *UP_FILE;
    QAction *QUIT;
    QAction *actionSEND_MILE_s;
    QAction *ABOUT;
    QAction *DATE_TIME;
    QAction *SET_FONT;
    QAction *SET_COLOR;
    QAction *actionMORE_M;
    QAction *actionMORE_M_2;
    QAction *MUSIC_F;
    QAction *MUSIC_O;
    QWidget *centralWidget;
    QPushButton *Connet;
    QTextEdit *Edit_Ptxt;
    QLabel *label_3;
    QPushButton *Send_Button;
    QLineEdit *Edit_Stxt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Port_Label;
    QLineEdit *Port_txt;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *IP_Label;
    QLineEdit *IP_txt;
    QMenuBar *menuBar;
    QMenu *menuJsdj;
    QMenu *menuMUSIC_M;
    QMenu *menu;
    QMenu *menu_H;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(254, 357);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/release/1499779922595.jpg);"));
        DOWN_FILE = new QAction(MainWindow);
        DOWN_FILE->setObjectName(QStringLiteral("DOWN_FILE"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/release/Push_Button_Download_512px_1185841_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        DOWN_FILE->setIcon(icon);
        UP_FILE = new QAction(MainWindow);
        UP_FILE->setObjectName(QStringLiteral("UP_FILE"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/release/upload_folded_256px_1184243_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        UP_FILE->setIcon(icon1);
        QUIT = new QAction(MainWindow);
        QUIT->setObjectName(QStringLiteral("QUIT"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/release/sign_out_32px_516194_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        QUIT->setIcon(icon2);
        actionSEND_MILE_s = new QAction(MainWindow);
        actionSEND_MILE_s->setObjectName(QStringLiteral("actionSEND_MILE_s"));
        ABOUT = new QAction(MainWindow);
        ABOUT->setObjectName(QStringLiteral("ABOUT"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/release/help_128px_43820_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        ABOUT->setIcon(icon3);
        DATE_TIME = new QAction(MainWindow);
        DATE_TIME->setObjectName(QStringLiteral("DATE_TIME"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/release/alarm_clock_606px_1207989_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        DATE_TIME->setIcon(icon4);
        SET_FONT = new QAction(MainWindow);
        SET_FONT->setObjectName(QStringLiteral("SET_FONT"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/release/pen_533px_1200874_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        SET_FONT->setIcon(icon5);
        SET_COLOR = new QAction(MainWindow);
        SET_COLOR->setObjectName(QStringLiteral("SET_COLOR"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/release/color_lens_128px_1181767_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        SET_COLOR->setIcon(icon6);
        actionMORE_M = new QAction(MainWindow);
        actionMORE_M->setObjectName(QStringLiteral("actionMORE_M"));
        actionMORE_M_2 = new QAction(MainWindow);
        actionMORE_M_2->setObjectName(QStringLiteral("actionMORE_M_2"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/release/more_579px_1201158_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMORE_M_2->setIcon(icon7);
        MUSIC_F = new QAction(MainWindow);
        MUSIC_F->setObjectName(QStringLiteral("MUSIC_F"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/release/switch_off_216px_1185706_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        MUSIC_F->setIcon(icon8);
        MUSIC_O = new QAction(MainWindow);
        MUSIC_O->setObjectName(QStringLiteral("MUSIC_O"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/release/switch_on_216px_1185707_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        MUSIC_O->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Connet = new QPushButton(centralWidget);
        Connet->setObjectName(QStringLiteral("Connet"));
        Connet->setGeometry(QRect(160, 40, 51, 23));
        Edit_Ptxt = new QTextEdit(centralWidget);
        Edit_Ptxt->setObjectName(QStringLiteral("Edit_Ptxt"));
        Edit_Ptxt->setGeometry(QRect(70, 70, 171, 141));
        Edit_Ptxt->setStyleSheet(QStringLiteral("background-color: rgb(231, 231, 231);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 72, 48, 16));
        Send_Button = new QPushButton(centralWidget);
        Send_Button->setObjectName(QStringLiteral("Send_Button"));
        Send_Button->setGeometry(QRect(180, 250, 61, 23));
        Edit_Stxt = new QLineEdit(centralWidget);
        Edit_Stxt->setObjectName(QStringLiteral("Edit_Stxt"));
        Edit_Stxt->setGeometry(QRect(70, 210, 171, 31));
        Edit_Stxt->setStyleSheet(QLatin1String("font: 75 9pt \"Agency FB\";\n"
"color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 121, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Port_Label = new QLabel(layoutWidget);
        Port_Label->setObjectName(QStringLiteral("Port_Label"));
        Port_Label->setStyleSheet(QStringLiteral("font: 75 9pt \"Agency FB\";"));

        horizontalLayout_2->addWidget(Port_Label);

        Port_txt = new QLineEdit(layoutWidget);
        Port_txt->setObjectName(QStringLiteral("Port_txt"));
        Port_txt->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));

        horizontalLayout_2->addWidget(Port_txt);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 195, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        IP_Label = new QLabel(layoutWidget1);
        IP_Label->setObjectName(QStringLiteral("IP_Label"));
        IP_Label->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Agency FB\";\n"
"font: 9pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(IP_Label);

        IP_txt = new QLineEdit(layoutWidget1);
        IP_txt->setObjectName(QStringLiteral("IP_txt"));
        IP_txt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(IP_txt);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 254, 24));
        menuJsdj = new QMenu(menuBar);
        menuJsdj->setObjectName(QStringLiteral("menuJsdj"));
        menuMUSIC_M = new QMenu(menuJsdj);
        menuMUSIC_M->setObjectName(QStringLiteral("menuMUSIC_M"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuJsdj->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menuBar->addAction(menu->menuAction());
        menuJsdj->addAction(DOWN_FILE);
        menuJsdj->addSeparator();
        menuJsdj->addAction(UP_FILE);
        menuJsdj->addSeparator();
        menuJsdj->addAction(DATE_TIME);
        menuJsdj->addSeparator();
        menuJsdj->addAction(SET_FONT);
        menuJsdj->addSeparator();
        menuJsdj->addAction(SET_COLOR);
        menuJsdj->addSeparator();
        menuJsdj->addAction(menuMUSIC_M->menuAction());
        menuJsdj->addSeparator();
        menuMUSIC_M->addAction(MUSIC_F);
        menuMUSIC_M->addSeparator();
        menuMUSIC_M->addAction(MUSIC_O);
        menu->addAction(QUIT);
        menu_H->addAction(ABOUT);
        menu_H->addAction(actionMORE_M_2);
        toolBar->addAction(DOWN_FILE);
        toolBar->addSeparator();
        toolBar->addAction(UP_FILE);
        toolBar->addSeparator();
        toolBar->addAction(QUIT);
        toolBar->addSeparator();
        toolBar->addAction(ABOUT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        DOWN_FILE->setText(QApplication::translate("MainWindow", "DOWN_FILE(&D)", 0));
        UP_FILE->setText(QApplication::translate("MainWindow", "UP_FILE(&P)", 0));
        QUIT->setText(QApplication::translate("MainWindow", "QUIT(&Q)", 0));
        actionSEND_MILE_s->setText(QApplication::translate("MainWindow", "SEND_MILE(&s)", 0));
        ABOUT->setText(QApplication::translate("MainWindow", "ABOUT(&B)", 0));
        DATE_TIME->setText(QApplication::translate("MainWindow", "DATE_TIME(&T)", 0));
        SET_FONT->setText(QApplication::translate("MainWindow", "SET_FONT(&F)", 0));
        SET_COLOR->setText(QApplication::translate("MainWindow", "SET_COLOR(&C)", 0));
        actionMORE_M->setText(QApplication::translate("MainWindow", "MORE(&M)", 0));
        actionMORE_M_2->setText(QApplication::translate("MainWindow", "MORE(&M)", 0));
        MUSIC_F->setText(QApplication::translate("MainWindow", "MUSIC_F(&F)", 0));
        MUSIC_O->setText(QApplication::translate("MainWindow", "MUSIC_O(&P)", 0));
        Connet->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245(&c)", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257\345\223\237\357\274\232", 0));
        Send_Button->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\210&s)", 0));
        Port_Label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        IP_Label->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", 0));
        menuJsdj->setTitle(QApplication::translate("MainWindow", "\345\217\221\347\216\260\346\226\260\346\212\200\350\203\275(&G)", 0));
        menuMUSIC_M->setTitle(QApplication::translate("MainWindow", "MUSIC(&M)", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\255\345\274\200\357\274\210&E)", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210&H)", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
