#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include<QMovie>
#include <QWidget>
#include <QTcpSocket>
#include <QFile>
#include <string>
#include <QHostAddress>
#include <QTextCodec>
#include <QFileDialog>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = 0);
    ~about();

private:
    Ui::about *ui;
    QMovie*movie;
    QTcpSocket *tcpClient;
    QString fileNme;
//    QFile *localFile;//要发送的文件
//      qint64 totalBytes;//数据总大小
//      qint64 bytesWritten;//已经发送数据大小
//      qint64 bytesToWrite;//剩余数据大小
//      qint64 loadSize;//每次发送数据大小
//      QString fileName;//保存文件路径
//      QByteArray outBlock;//数据缓冲区，即存放每次要发送的数据
private slots:
//    void sendslots();
//    void scanfslots();
//    void on_send_clicked();
//    void on_scan_clicked();
};

#endif // ABOUT_H
