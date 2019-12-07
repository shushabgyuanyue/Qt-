#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QApplication>
#include<QDialog>
#include <QtGlobal>
int main(int argc, char *argv[])
{

   //启动界面
    QApplication a(argc, argv);
    QPixmap pixmap("1.png");
    QSplashScreen splash(pixmap);
    splash.show();
    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}
