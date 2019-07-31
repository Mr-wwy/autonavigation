#ifndef FTPWIDGET_H
#define FTPWIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QFile>
#include <QProgressDialog>
#include <QMenu>
#include <QAction>

#include "qftp.h"
#include "qurlinfo.h"

namespace Ui {
class FTPWidget;
}

class FTPWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FTPWidget(QWidget *parent = 0);
    ~FTPWidget();

    void setWidgetsEnabled(bool enable);
    void update_clientview();

    bool isValidIP(QString _strip);

    void get_file();
    void put_file();

    QString FromSpecialEncoding(const QString &str);
    QString ToSpecialEncoding(const QString &str);

    void readSettings();
    void writeSettings();

public slots:
    void stateChanged_slot(int state);
    void commandStarted_slot(int id);
    void commondFinished_slot(int id, bool error);
    void dataTransferProgress_slot(qint64 readBytes, qint64 totalBytes);
    void listInfo_slot(QUrlInfo urlInfo);

    void customContextMenuRequested_treeviewserver(QPoint pos);
    void customContextMenuRequested_treeviewclient(QPoint pos);
    void get_action_slot();
    void put_action_slot();

    void focusChanged_slot(QWidget* old_widget,QWidget* new_widget);

private slots:
    void on_ConBtn_clicked();

    void on_EixtBtn_clicked();

    void on_GetBtn_clicked();

    void on_PutBtn_clicked();

    void on_ViewBtn_clicked();

private:
    Ui::FTPWidget *ui;
    QFtp *m_ftp;

    QString m_ip;
    int m_port;
    QString m_username;
    QString m_password;
    QHash<QString,bool> isDirectory;//用来存储一个路径是否为目录信息

    QStandardItemModel *m_treemodel_server;
    QStandardItemModel *m_treemodel_client;
    QFile *savefile;

    QProgressDialog *m_dialog;
    int transfertype;                //0-无传输     1-下载      2-上传
    QString transfername;            //传输文件名

    QMenu* servermenu;
    QMenu* clientmenu;
    QAction* get_action;
    QAction* put_action;

    int server_number;
    int client_number;


};


#endif // FTPWIDGET_H



































