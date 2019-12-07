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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *send_f;
    QWidget *centralWidget;
    QLabel *label_2;
    QPushButton *send_w;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QTextEdit *print;
    QLineEdit *put;
    QPushButton *recv;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(315, 371);
        MainWindow->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/release/1499779922595.jpg);\n"
"color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));"));
        send_f = new QAction(MainWindow);
        send_f->setObjectName(QStringLiteral("send_f"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/C:/Users/\346\236\227\347\247\213\345\277\227/Desktop/aimp_logo_512px_1183694_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        send_f->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 240, 36, 16));
        send_w = new QPushButton(centralWidget);
        send_w->setObjectName(QStringLiteral("send_w"));
        send_w->setGeometry(QRect(170, 260, 71, 23));
        send_w->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(212, 212, 212);\n"
"font: 75 9pt \"Arial Unicode MS\";\n"
"color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 241, 221));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(38, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        print = new QTextEdit(layoutWidget);
        print->setObjectName(QStringLiteral("print"));
        print->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/release/1499779922595.jpg);"));

        horizontalLayout_2->addWidget(print);

        put = new QLineEdit(centralWidget);
        put->setObjectName(QStringLiteral("put"));
        put->setGeometry(QRect(60, 240, 181, 20));
        recv = new QPushButton(centralWidget);
        recv->setObjectName(QStringLiteral("recv"));
        recv->setGeometry(QRect(0, 240, 51, 20));
        recv->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 315, 24));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        send_f->setText(QApplication::translate("MainWindow", "SHUT(&S)", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\357\274\232", 0));
        send_w->setText(QApplication::translate("MainWindow", "\345\217\221\345\260\204\357\274\210&s)", 0));
        label->setText(QApplication::translate("MainWindow", "\346\266\210\346\201\257\345\223\237\357\274\232", 0));
        recv->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\357\274\210&C)", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
