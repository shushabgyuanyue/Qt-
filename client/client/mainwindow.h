#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QProcess>
#include<Qstring>
#include<QObject>
#include<QMessageBox>
#include <QtDebug>
#include<QFontDialog>
#include<QFont>
#include<QColor>
#include<QColorDialog>
#include<QDateTime>
#include<QDialog>
#include<QSplashScreen>
#include<QPixmap>
#include<QUrl>
#include<QDesktopServices>//访问桌面服务的类
#include <QWidget>
#include <QTcpSocket>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTextBrowser>
#include <QtNetwork>
#include <QtMultimedia/QSound>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void set_Font_Slot();//设置字体的槽
    void set_Color_Slot();//设置颜色的槽
    void set_Date_Slot();//显示时间的槽
    void WEBSITE_Slot();//打开一个网站
    void about_Dsoftward_Slot();//子框的槽
    void about_Usoftward_Slot();//子框的槽
    void about_Asoftward_Slot();//子框的槽
    void MusicOn();//音乐开
    void MusicOff();//音乐关
    void newConnect(); //连接服务器
    void close_socket();//断开连接
    void on_Send_Button_clicked();//发送的槽
    void readMessage();  //接收数据
private:
    Ui::MainWindow *ui;
    QTcpServer *tcp;
    QTcpSocket *c_socket;
    QString fileName;
    QFile *localFile;
};

#endif // MAINWINDOW_H
