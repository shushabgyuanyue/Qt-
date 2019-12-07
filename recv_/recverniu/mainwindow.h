#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetWork>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpServer *recv_socket;
    QTcpSocket *recv_s;

//    qint64 totalBytes;//总大小
//    qint64 bytesReceived;//已收到的数据大小
//    qint64 fileNameSize;//文件名大小信息
//    QString fileName;//存放文件名
//    QFile *localFile;//本地文件
//    QByteArray inBlock;//数据缓冲区
private slots:
    void newConnect() ;
    void readMessage(); //读取信息
    void on_send_w_clicked();
    void acceptConnection();
    void savefile() ;
};

#endif // MAINWINDOW_H
