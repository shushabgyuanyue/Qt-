#include "about.h"
#include "ui_about.h"
#include<QMessageBox>
#include <QtDebug>
#include<QDir>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include <qfile.h>
#include <qtextstream.h>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    //this->movie=new QMovie("2.gif");
    //ui->print->setMovie(this->movie);
    //this->movie->start();
    //this->movie->stop();
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    //this->connect(ui->send,SIGNAL(clicked()),this,SLOT(sendslots()));
    //QObject::connect(ui->send,SIGNAL(clicked()),this,SLOT(on_send_clicked()));
    //QObject::connect(ui->scan,SIGNAL(clicked()),this,SLOT(on_scan_clicked()));
    //QObject::connect(ui->scan,SIGNAL(clicked()),this,SLOT(scanfslots()));
}

about::~about()
{
    delete ui;
}
//void about:: sendslots()//动图
//{
//   //this->movie->stop();
//   //this->movie->start();
//}
////建立连接并打开文件
//void about::on_scan_clicked()
//{
//    tcpClient= new QTcpSocket(this);
//    tcpClient->abort();
//    tcpClient->connectToHost("127.0.0.1",19999);
//    QString ss= "连接成功";
//    tcpClient->write(ss.toStdString().c_str(),strlen(ss.toStdString().c_str()));
//}

////void about::scanfslots()//浏览的槽
////{
////    QString fileName = QFileDialog::getOpenFileName(this);
////    if(!fileName.isEmpty())
////    {
////        ui->send->setEnabled(true);
////        QMessageBox::information(this,"Error Message","请选择一个文件！");//获得文件
////        return;
////    }
////}
//////点击发送文件
////void about::on_send_clicked()
////{
//////    QString fileName=ui->scan_f->text();
//////    QFile f (fileName);
//////    bool ok=f.open(QIODevice::ReadOnly);
//////    if(ok)
//////    {
//////        QString buffer= f.readAll();
//////        tcpClient->write(buffer.toStdString().c_str(),strlen(buffer.toStdString().c_str()));
//////        QMessageBox::information(this,"Error Message","发送成功！");
//////    }
//////    f.close();


////}


