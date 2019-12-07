#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QWidget>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QFile>
#include <QString>
#include <QTextCodec>
#include<QFileDialog>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //固定主界面大小
    this->setMaximumSize(263,353);
    this->setMinimumSize(263,353);
    this->setWindowTitle("一班一receiver");

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    recv_socket = new QTcpServer(this);

        if(!recv_socket->listen(QHostAddress::Any,19999))
        {  //监听任何主机的19999端口，如果出错就输出错误信息，并关闭
            qDebug() << recv_socket->errorString();
            close();
        }
        else
        {
            QString listen="监听已开启....";
            ui->print->append(listen);
        }
      QObject::connect(recv_socket,SIGNAL(newConnection()),this,SLOT(newConnect())); //新连接信号触发，调用newConnect()槽函数，这个跟信号函数一样，其实你可以随便取。
      QObject::connect(ui->put,SIGNAL(returnPressed()),this,SLOT(on_send_w_clicked()));//回车键连接文本发送
      QObject::connect(ui->recv,SIGNAL(clicked()),this,SLOT(savefile()));//连接


}

MainWindow::~MainWindow()
{
    delete ui;
}
  void MainWindow::newConnect()
    {
        recv_s = recv_socket->nextPendingConnection(); //得到每个连进来的socket
         QObject::connect(recv_s,SIGNAL(readyRead()),this,SLOT(readMessage())); //有可读的信息，触发读函数槽
    }
 void MainWindow::readMessage() //读取信息
 {
         QByteArray qba= recv_s->readAll(); //读取
         qDebug()<<qba;
         QString ss=QVariant(qba).toString();
         ui->print->setText(ss);

  }

void MainWindow::on_send_w_clicked()//发送信息
{

    QString strMesg= ui->put->text();
    qDebug()<<strMesg;
    recv_s->write(strMesg.toStdString().c_str(),strlen(strMesg.toStdString().c_str())); //发送
    ui->put->clear();
}
void MainWindow::acceptConnection()
{
      recv_s = recv_socket->nextPendingConnection();
      this->connect(recv_s, SIGNAL(readyRead()), this, SLOT(readClient()));
}
//接收文件
void MainWindow::savefile() //读取信息
{
//    QByteArray qba= recv_s->readAll(); //读取
//    qDebug()<<qba;
//    QString ss=QVariant(qba).toString();
//    QString fileName=QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
//     if(fileName.isEmpty())
//     {
//          QMessageBox::information(this,"Error Message","请选择一个文件！");
//          return ;
//     }
//     QFile *file=new QFile;
//     file->setFileName(fileName);
//     bool ok= file->open(QIODevice::WriteOnly);
//     if(ok)
//     {
//         write(file,ss.data(), ss.length());  //写入
//         file->close();
//         delete file;
//      }

    QProcess::startDetached("D:\\recv_\\recverniu\\Application1\\Debug\\Application1.exe",QStringList());

 }
