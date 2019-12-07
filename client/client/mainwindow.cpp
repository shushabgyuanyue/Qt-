#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include"about.h" 
#include <QtMultimedia/QSound>
#include<QObject>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("一班一组client");
    //固定主界面大小
    this->setMaximumSize(263,353);
    this->setMinimumSize(263,353);
    c_socket = new QTcpSocket(this);

    //各种信号与槽
    QObject::connect(ui->Connet,SIGNAL(clicked()),this,SLOT(newConnect()));//连接
    QObject::connect(ui->Edit_Stxt,SIGNAL(returnPressed()),this,SLOT(on_Send_Button_clicked()));//回车键连接文本发送
    QObject::connect(ui->SET_FONT,SIGNAL(triggered()),this,SLOT(set_Font_Slot()));//字体
    QObject::connect(ui->SET_COLOR,SIGNAL(triggered()),this,SLOT(set_Color_Slot()));//颜色
    QObject::connect(ui->DATE_TIME,SIGNAL(triggered()),this,SLOT(set_Date_Slot()));//日期
    QObject::connect(ui->actionMORE_M_2,SIGNAL(triggered()),this,SLOT(WEBSITE_Slot()));//网页
    QObject::connect(ui->DOWN_FILE,SIGNAL(triggered()),this,SLOT(about_Dsoftward_Slot()));//下载文件
    QObject::connect(ui->UP_FILE,SIGNAL(triggered()),this,SLOT(about_Usoftward_Slot()));//上传文件
    QObject::connect(ui->ABOUT,SIGNAL(triggered()),this,SLOT(about_Asoftward_Slot()));//关于
    QObject::connect(ui->QUIT,SIGNAL(triggered()),this,SLOT(close_socket()));
    QObject::connect(ui->MUSIC_O,SIGNAL(triggered()),this,SLOT(MusicOn()));
    QObject::connect(ui->MUSIC_F,SIGNAL(triggered()),this,SLOT(Music0ff()));
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::set_Font_Slot()//设置字体的槽
{

    bool ok;
    QFont font=QFontDialog::getFont(&ok,this);//获得选择的字体
    if(ok)
    {
        ui->Edit_Stxt->setFont(font);//输出到发送框里
        ui->Edit_Ptxt->setFont(font);
    }else
    {
        QMessageBox::information(this,"Error Message","Error Set Font");
        return ;
    }
}
void MainWindow::set_Color_Slot()//设置颜色的槽
{
    QColor color=QColorDialog::getColor(Qt::black,this);
    if(color.isValid())
    {
        ui->Edit_Ptxt->setTextColor(color);
    }
    else
    {
        QMessageBox::information(this,"Error Message","clor is unvalid");
        return ;
    }
}
void MainWindow::  set_Date_Slot()//日期
{
 QDateTime current=QDateTime::currentDateTime();
 QString time=current.toString("yyyy-M-dd hh:mm:ss");
 ui->Edit_Ptxt->append(time);
}
void MainWindow::WEBSITE_Slot()//网页
{
    QDesktopServices::openUrl( QUrl("http://www.sicnu.edu.cn/"));

}
void MainWindow:: about_Dsoftward_Slot()//显示子框
{
      about *dialog=new about;
      dialog->show();
}
void MainWindow:: about_Usoftward_Slot()//调用外部程序
{
     QProcess::startDetached("D:\\client\\client\\Application2\\Debug\\Application2.exe",QStringList());

}
void MainWindow:: about_Asoftward_Slot()//关于
{
    about *dialog=new about;
    dialog->show();
}
void MainWindow::newConnect()//连接
{
    c_socket = new QTcpSocket(this);
    c_socket->abort();
    c_socket->connectToHost("127.0.0.1",19999);
    QString ss= "连接成功";
    c_socket->write(ss.toStdString().c_str(),strlen(ss.toStdString().c_str()));
    QMessageBox::information(this,"Error Message","GOOD!");
    QObject:: connect(c_socket,SIGNAL(readyRead()),this,SLOT(readMessage()));
}
void MainWindow::readMessage() //读取信息
{
   QByteArray qba =c_socket->readAll();
   ui->Edit_Ptxt->clear();
   qDebug()<<qba;
   QString ss=QVariant(qba).toString();
   ui->Edit_Ptxt->setText(ss);
}
void MainWindow::on_Send_Button_clicked()//发送信息
 {
    QString ss= ui->Edit_Stxt->text();
    c_socket->write(ss.toStdString().c_str(),strlen(ss.toStdString().c_str()));
    ui->Edit_Stxt->clear();
}
void MainWindow::close_socket()
{
    QMessageBox::information(this,"Error Message","断开了哟！");
    delete c_socket;
}

void MainWindow::MusicOn()//音乐开
{
     QSound::play("D:\\client\\client\\辞旧新.wav");
}
void MainWindow::MusicOff()//音乐关
{
      //QSound~QObject();
}

