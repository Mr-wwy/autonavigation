#include "ftpwidget.h"
#include "ui_ftpwidget.h"

#include <QString>
#include <QDebug>
#include <QStandardItem>
#include <QTreeWidgetItem>
#include <QList>
#include <QDir>
#include <QFileDialog>
#include <QPixmap>
#include <QValidator>
#include <QRegExp>
#include <QCursor>
#include <QSettings>
#include <QMessageBox>


FTPWidget::FTPWidget(QWidget *parent) :
    QWidget(parent),
    m_ftp(0),
    ui(new Ui::FTPWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("FTP");
    this->setFixedSize(this->size());

    this->setAttribute(Qt::WA_DeleteOnClose);    //关闭后自动删除
    this->setAttribute(Qt::WA_QuitOnClose,false);

    //初始化
    setWidgetsEnabled(true);
    ui->label_status->setText("FTP");
    server_number=0;
    client_number=0;
    savefile=0;

    transfertype=0;
    transfername="";

    //只能输入IP地址
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    QValidator *validator_IP=new QRegExpValidator(rx,this);
    ui->lineEdit_ip->setValidator(validator_IP);
    //ui->lineEdit_ip->setInputMask("000.000.000.000;0");

    //只能输入0-65535的端口号
    QValidator *validator_Port=new QIntValidator(0,65535,this);
    ui->lineEdit_port->setValidator(validator_Port);

    readSettings();    //读取配置文件


    /*****************************设置treeView_server的model和view*************************************/
    m_treemodel_server=new QStandardItemModel(0,3,this);

    //设置水平标签
    m_treemodel_server->setHorizontalHeaderItem(0,new QStandardItem(tr("文件名")));;
    m_treemodel_server->setHorizontalHeaderItem(1,new QStandardItem(tr("大小")));
    m_treemodel_server->setHorizontalHeaderItem(2,new QStandardItem(tr("修改时间")));

    ui->treeView_server->setModel(m_treemodel_server);

    //设置列表宽度
    ui->treeView_server->setColumnWidth(0,180);
    ui->treeView_server->setColumnWidth(1,80);
    ui->treeView_server->setColumnWidth(2,60);

    ui->treeView_server->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置成不可编辑模式
    ui->treeView_server->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeView_server->setContextMenuPolicy(Qt::CustomContextMenu);     //右键快捷菜单
    ui->treeView_server->setAllColumnsShowFocus(true);        //设置为选择整行，而非选择单个项
    ui->treeView_server->setAlternatingRowColors(true);

    /*****************************设置treeView_client的model和view*************************************/
    m_treemodel_client=new QStandardItemModel(0,3,this);

    //设置水平标签
    m_treemodel_client->setHorizontalHeaderItem(0,new QStandardItem(tr("文件名")));;
    m_treemodel_client->setHorizontalHeaderItem(1,new QStandardItem(tr("大小")));
    m_treemodel_client->setHorizontalHeaderItem(2,new QStandardItem(tr("修改时间")));

    ui->treeView_client->setModel(m_treemodel_client);

    ui->treeView_client->setColumnWidth(0,180);
    ui->treeView_client->setColumnWidth(1,80);
    ui->treeView_client->setColumnWidth(2,60);

    ui->treeView_client->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置成不可编辑模式
    ui->treeView_client->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeView_client->setContextMenuPolicy(Qt::CustomContextMenu);     //右键快捷菜单
    ui->treeView_client->setAllColumnsShowFocus(true);        //设置为选择整行，而非选择单个项
    ui->treeView_client->setAlternatingRowColors(true);

    connect(ui->treeView_server,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(customContextMenuRequested_treeviewserver(QPoint)));
    connect(ui->treeView_client,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(customContextMenuRequested_treeviewclient(QPoint)));

    connect(qApp,SIGNAL(focusChanged(QWidget*,QWidget*)),this,SLOT(focusChanged_slot(QWidget*,QWidget*)));

    /***********************************添加进度条********************************************/
    m_dialog=new QProgressDialog(this);                                 //必须添加this，否则会出现下载或上传完后不消失的情况
    m_dialog->setWindowModality(Qt::WindowModal);
    m_dialog->close();


    /************************************添加右键菜单栏-服务端******************************************/
    servermenu =new QMenu(this);//定义一个右键弹出菜单
    get_action=new QAction(tr("下载"),this);
    get_action->setIcon(QIcon(":/image/get.png"));
    servermenu->addAction(get_action);//往菜单内添加QAction
    connect(get_action,SIGNAL(triggered()),this,SLOT(get_action_slot()));

    /***********************************添加右键菜单栏-客户端*********************************************/
    clientmenu =new QMenu(this);//定义一个右键弹出菜单
    put_action=new QAction(tr("上传"),this);
    put_action->setIcon(QIcon(":/image/put.png"));
    clientmenu->addAction(put_action);//往菜单内添加QAction
    connect(put_action,SIGNAL(triggered()),this,SLOT(put_action_slot()));

}

FTPWidget::~FTPWidget()
{
    writeSettings();

    if(m_ftp)
    {
        m_ftp->abort();
        m_ftp->deleteLater();
        m_ftp=0;   //需要把ftp赋0，不然下次连接时程序会异常终止
    }
    if(savefile)
    {
        savefile->close();
        delete savefile;
    }


    delete ui;
}

void FTPWidget::setWidgetsEnabled(bool enable)
{
    ui->lineEdit_ip->setEnabled(enable);
    ui->lineEdit_port->setEnabled(enable);
    ui->lineEdit_username->setEnabled(enable);
    ui->lineEdit_password->setEnabled(enable);
    ui->lineEdit_path->setEnabled(enable);

    ui->GetBtn->setEnabled(!enable);
    ui->PutBtn->setEnabled(!enable);
}

/*************************检测字符串是否为IP地址***************************/
bool FTPWidget::isValidIP(QString _strip)
{
    //IP地址正则表达式
    QRegExp rx("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
    //QRegExp rx2("^([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])/.([1]?/d/d?|2[0-4]/d|25[0-5])$");
    if(rx.exactMatch(_strip))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void FTPWidget::on_ConBtn_clicked()
{
    this->setFocus();

    if(m_ftp)
    {
        ui->ConBtn->setText(tr("连接"));

        setWidgetsEnabled(true);
        servermenu->setEnabled(false);
        put_action->setEnabled(false);

        m_ftp->abort();
        m_ftp->deleteLater();
        m_ftp=0;   //需要把ftp赋0，不然下次连接时程序会异常终止

    }
    else
    {

        m_ip=ui->lineEdit_ip->text();
        m_port=ui->lineEdit_port->text().toInt();
        m_username=ui->lineEdit_username->text();
        m_password=ui->lineEdit_password->text();

        //检查IP
        QRegExp rx1("((1?\\d{1,2}|2[0-5]{2})\\.){3}(1?\\d{1,2}|2[0-5]{2})");
        if(rx1.indexIn(m_ip)<0)
        {
            QMessageBox::information(this,tr("Warning!"),tr("The IP is invalid!"));
            return;
        }

        //检查port
        QRegExp rx2("[0-9]|[0-9]{2}|[0-9]{3}|[0-9]{4}|[0-6][0-5][0-5][0-3][0-5]");
        if(rx2.indexIn(ui->lineEdit_port->text())<0)
        {
            QMessageBox::information(this,tr("Warning!"),tr("The port is invalid!"));
            return;
        }

        //检查用户名
        if(m_username.isEmpty())
        {
            QMessageBox::information(this,tr("Warning!"),tr("The username is empty!"));
            return;
        }

        //检查密码
        if(m_password.isEmpty())
        {
            QMessageBox::information(this,tr("Warning!"),tr("The password is empty!"));
            return;
        }

        //检查保存路径
        QString path=ui->lineEdit_path->text();
        QDir dir(path);
        if(!dir.exists())
        {
            if(QMessageBox::information(this,tr("Warning!"),tr("The save path doesn't exist,Please select a new folder!"),QMessageBox::Yes,QMessageBox::No)==QMessageBox::Yes)
            {
               QString savepath=QFileDialog::getExistingDirectory(this,tr("选择文件夹"),QDir::homePath(),QFileDialog::ShowDirsOnly);
               if(!savepath.isEmpty())
               {
                   ui->lineEdit_path->setText(savepath);
               }
               else
               {

                   return;
               }
            }
            else
            {
                return;
            }

        }
        if(!ui->lineEdit_path->text().isEmpty())
        {
            update_clientview();
//            if(!client_timer->isActive())
//                client_timer->start();

        }

        m_ftp = new QFtp(this);
        //m_ftp->setTransferMode(QFtp::Passive);
        /*
         *Enables use of the FTP proxy on host host and port port. Calling this function with host empty disables proxying.
         *QFtp does not support FTP-over-HTTP proxy servers. Use QNetworkAccessManager for this.
         */
        //m_ftp->setProxy("",0);
        m_ftp->connectToHost(m_ip,m_port);  // 主机IP     端口号：21     连接成功后再进行登录
        //m_ftp->login(m_username, m_password);  // 用户名  密码

       //FTP的信号与槽函数
       connect(m_ftp,SIGNAL(stateChanged(int)),this,SLOT(stateChanged_slot(int)));
       connect(m_ftp,SIGNAL(dataTransferProgress(qint64,qint64)),this,SLOT(dataTransferProgress_slot(qint64,qint64)));
       connect(m_ftp,SIGNAL(commandStarted(int)),this,SLOT(commandStarted_slot(int)));
       connect(m_ftp,SIGNAL(commandFinished(int,bool)),this,SLOT(commondFinished_slot(int,bool)));
       connect(m_ftp,SIGNAL(listInfo(QUrlInfo)),this,SLOT(listInfo_slot(QUrlInfo)));    //每个文件项都发射一次listInfo信号，每隔40ms(还有待确定)发射一次listInfo信号
    }

}

/***************连接状态*****************
 *常量                                          	值	           描述
QFtp::Unconnected	                    0	没有连接到主机
QFtp::HostLookup	                        1	正在进行主机名查找
QFtp::Connecting	                        2	正在尝试连接到主机
QFtp::Connected	                        3	已实现与主机的连接
QFtp::LoggedIn	                            4	已实现连接和用户登录
QFtp::Closing	                                5	连接正在关闭，但尚未关闭（当连接关闭时，状态将为 Unconnected）
*/
void FTPWidget::stateChanged_slot(int state)
{
    //注意id和m_ftp->currentCommand()的值不一样,断开连接后重新连接id的会持续增加
    //但是state的值和m_ftp->currentCommand()保持一致，不会持续增加
    //qDebug()<<"status:"<<state;
    switch (state) {
    case QFtp::Unconnected: {
        //FTP自动断开后（如果FTP不进行任何操作，会在两分钟内自动断开）
        ui->label_status->setText(tr("断开连接"));

        setWidgetsEnabled(true);
        servermenu->setEnabled(false);
        put_action->setEnabled(false);
        ui->ConBtn->setText(tr("连接"));
        ui->treeView_server->setEnabled(false);

        //需要对ftp进行判断
        if(m_ftp)
          {
            m_ftp->abort();
            m_ftp->deleteLater();
            m_ftp=0;   //需要把ftp赋0，不然下次连接时程序会异常终止
          }

        break;
    }
    case QFtp::HostLookup: {
        ui->label_status->setText(tr("正在进行查找"));
        break;
    }
    case QFtp::Connecting: {
        ui->label_status->setText(tr("正在尝试连接到服务器"));
        break;
    }
    case QFtp::Connected: {
        ui->label_status->setText(tr("已实现与服务器的连接"));
        break;
    }
    case QFtp::LoggedIn: {
        ui->label_status->setText(tr("已实现连接和用户登录"));
        break;
    }
    case QFtp::Closing: {
        ui->label_status->setText(tr("连接正在关闭"));
        break;
    }
    default:
        break;
    }
}


/***************获取当前命令*****************
 * 常量                                          	 值	           描述
QFtp::None	                                      0	未执行任何命令
QFtp::SetTransferMode	                  1	设置传输模式
QFtp::SetProxy	                              2	切换代理打开或关闭
QFtp::ConnectToHost	                  3	正在执行 connectToHost()
QFtp::Login                                  	  4	正在执行 login()
QFtp::Close                                      5 	正在执行 close()
QFtp::List	                                      6 	正在执行 list()
QFtp::Cd	                                          7	正在执行 cd()
QFtp::Get	                                      8	正在执行 get()
QFtp::Put	                                      9	正在执行 put()
QFtp::Remove	                             10	正在执行 remove()
QFtp::Mkdir	                                 11	正在执行 mkdir()
QFtp::Rmdir	                                 12	正在执行 rmdir()
QFtp::Rename	                             13	正在执行 rename()
QFtp::RawCommand	                     14	正在执行 rawCommand()
**********************************************/
void FTPWidget::commandStarted_slot(int id)
{
    if(m_ftp)
    {
        //注意id和m_ftp->currentCommand()的值不一样,断开连接后重新连接id的会持续增加
        //qDebug()<<"commandstarted:"<<id;
        //qDebug()<<"started-currentcommand:"<<m_ftp->currentCommand();
        if(m_ftp->currentCommand()==QFtp::ConnectToHost)
          {
              ui->label_status->setText(tr("正在连接服务器..."));
          }
        else if(m_ftp->currentCommand()==QFtp::Login)
          {
              ui->label_status->setText(tr("正在登录..."));
          }
        else if(m_ftp->currentCommand()==QFtp::List)
          {
              //ui->label_status->setText(tr("正在查询服务器目录信息..."));
              server_number=0;
              m_treemodel_server->removeRows(0,m_treemodel_server->rowCount());

          }
         else if(m_ftp->currentCommand()==QFtp::Get)
          {
              ui->label_status->setText(tr("正在下载..."));
          }
         else if(m_ftp->currentCommand()==QFtp::Put)
          {
              ui->label_status->setText(tr("正在上传"));
          }
         else if(m_ftp->currentCommand()==QFtp::Close)
          {
              ui->label_status->setText(tr("正在关闭..."));
          }
    }

}


/*****************错误处理*************************
 * 常量                            值	           描述
QFtp::NoError	                   0      	   没有发生错误
QFtp::HostNotFound	               2	      主机名查找失败
QFtp::ConnectionRefused            3     	  服务器拒绝连接
QFtp::NotConnected	               4    	  尝试发送命令，但没有到服务器的连接
QFtp::UnknownError	               1	      除了以上指定的错误发生
************************************************/
void FTPWidget::commondFinished_slot(int id, bool error)
{
    //需要对ftp进行判断，在连接超时过程中ftp的状态有时会变成Unconnected，在stateChanged_slot函数中已经将0赋给ftp，因此需要对ftp进行判断，否则程序出错
    if(m_ftp)
    {
        //注意id和m_ftp->currentCommand()的值不一样,断开连接后重新连接id的会持续增加
        //qDebug()<<"commandFinished:"<<id;
        //qDebug()<<"finished-currentcommand:"<<m_ftp->currentCommand();
        if(m_ftp->currentCommand()==QFtp::ConnectToHost)
        {
            if(error)
            {
               ui->label_status->setText(tr("连接出现错误:%1").arg(m_ftp->errorString()));
               QMessageBox::warning(this,tr("Error!"),tr("连接出现错误:%1").arg(m_ftp->errorString()));
               if(m_ftp)
               {
                   m_ftp->abort();
                   m_ftp->deleteLater();
                   m_ftp=0;   //需要把ftp赋0，不然下次连接时程序会异常终止

                   return;     //这里需要加return或者改为if{} else if{}的格式，否则关闭ftp后，还会执行后面的语句(调用ftp)，导致报错
               }
            }
            else
            {
                //连接成功，进行登录
                ui->label_status->setText("成功连接到服务器");
                m_ftp->login(m_username, m_password);
            }

        }
        else if(m_ftp->currentCommand()== QFtp::Login)
        {
            if(error)
            {
                ui->label_status->setText(tr("登录出现错误:%1").arg(m_ftp->errorString()));
                QMessageBox::warning(this,tr("Error!"),tr("登录出现错误:%1").arg(m_ftp->errorString()));
                if(m_ftp)
                {
                    m_ftp->abort();
                    m_ftp->close();
                    m_ftp->deleteLater();
                    m_ftp=0;   //需要把ftp赋0，不然下次连接时程序会异常终止

                    return;

                }
            }
            else
            {
                //登录成功,进行list();
                setWidgetsEnabled(false);
                servermenu->setEnabled(true);
                put_action->setEnabled(true);
                ui->treeView_server->setEnabled(true);
                ui->ConBtn->setText(tr("断开"));
                ui->label_status->setText("登录成功");
                m_ftp->list();       //发射listInfo()，用来显示文件列表

            }

        }
        else if(m_ftp->currentCommand()==QFtp::List)
        {
           //处理list命令完成时的情况
            ui->label_serverNum->setText(QString::number(server_number));
        }
        else if(m_ftp->currentCommand()== QFtp::Get)
        {
            if(error)
            {
                ui->label_status->setText(tr("下载出现错误:%1").arg(m_ftp->errorString()));

                //完成下载指令后不管是否出错都要关闭文件
                if(savefile)
                {
                    savefile->close();//需要关闭后文件才会创建成功
                }
            }
            else
            {
                ui->label_status->setText("已经完成下载");

                //完成下载指令后不管是否出错都要关闭文件
                if(savefile)
                {
                    savefile->close();//需要关闭后文件才会创建成功
                }
                update_clientview();
            }


        }
        else if(m_ftp->currentCommand()== QFtp::Put)
        {
            if(error)
            {
                ui->label_status->setText(tr("上传出现错误:%1").arg(m_ftp->errorString()));
            }
            else
            {
                //
                ui->label_status->setText("已经完成上传");
                m_ftp->list();
            }
        }
        else if(m_ftp->currentCommand()== QFtp::Close)
        {
            if(error)
            {
                QMessageBox::warning(this,tr("Error!"),tr("关闭连接错误:%1").arg(m_ftp->errorString()));
                ui->label_status->setText(tr("关闭连接出错:%1").arg(m_ftp->errorString()));
            }
            else
            {
                ui->label_status->setText("已经关闭连接");
            }

         }

    }

}

//当ftp->list()函数执行时会发射listInfo()信号，此时就会执行listInfo_slot()函数，添加文件信息
void FTPWidget::listInfo_slot(QUrlInfo urlInfo)
{
    if(urlInfo.isDir()) return;

    QList<QStandardItem*> list_item;

    //将QFtp中的中文乱码转化成正常的中文
    QString filename=FromSpecialEncoding((urlInfo.name()));

    //定义文件夹和文件的图标
    QPixmap pixmap(urlInfo.isDir() ? ":/image/floder.png" :":/image/file.png");
    isDirectory[filename]=urlInfo.isDir();
    QStandardItem *filename_item=new QStandardItem(pixmap,filename);

    //显示文件大小
    QString file_size;
    if(urlInfo.isDir())
    {
        file_size="";
    }
    else
    {
        long long filesize=urlInfo.size();

        if((filesize/=1024)<0.9)//filesize=filesize/1024
            file_size=QString::number(urlInfo.size())+tr("B");
        else if(filesize/1024<0.9)
            file_size=QString::number(filesize,'f',2)+tr("K");
        else
            file_size=QString::number(filesize/1024,'f',2)+tr("M");
    }

    QStandardItem *filesize_item=new QStandardItem(file_size);

    QString modify_time=urlInfo.lastModified().toString("yyyy/MM/dd hh:mm");
    QStandardItem *time_item=new QStandardItem(modify_time);

    list_item.append(filename_item);
    list_item.append(filesize_item);
    list_item.append(time_item);

    m_treemodel_server->appendRow(list_item);
    server_number++;

}

//将FTP识别的特殊编码转化为正常编码
QString FTPWidget::FromSpecialEncoding(const QString &str)
{
//    #ifdef Q_OS_WIN
        return  QString::fromLocal8Bit(str.toLatin1());
//    #else
//        QTextCodec *codec = QTextCodec::codecForName("gbk");
//        if (codec)
//        {
//            return codec->toUnicode(str.toLatin1());
//        }
//        else
//        {
//            return QString("");
//        }
//    #endif
}

//将正常编码转化为FTP识别的特殊编码
QString FTPWidget::ToSpecialEncoding(const QString &str)
{
//    #ifdef Q_OS_WIN
        return QString::fromLatin1(str.toLocal8Bit());
//    #else
//        QTextCodec *codec= QTextCodec::codecForName("gbk");
//        if (codec)
//        {
//            return QString::fromLatin1(codec->fromUnicode(str));
//        }
//        else
//        {
//            return QString("");
//        }
//    #endif

}

void FTPWidget::on_EixtBtn_clicked()
{
    this->close();

}

void FTPWidget::on_GetBtn_clicked()
{
    get_file();

}

void FTPWidget::on_PutBtn_clicked()
{
    put_file();

}

void FTPWidget::on_ViewBtn_clicked()
{

    /*********************************
     * QDir	        QString            	Reture Value
     current()	   currentPath()	   应用程序的工作目录
     home()	       homePath()	       用户的家目录
     root()	           rootPath()	      系统的根目录
     temp()	       tempPath()	      系统的临时目录
     *****************************/
    QString homepath=QDir::homePath();
    //选择文件夹路径（当前设置是从homePath()开始选择）
    QString savepath=QFileDialog::getExistingDirectory(this,tr("选择文件夹"),homepath,QFileDialog::ShowDirsOnly);
    if(!savepath.isEmpty())
    {
        ui->lineEdit_path->setText(savepath);
    }
    else
    {
        return;
    }

    ui->lineEdit_path->setFocus();
    update_clientview();


}

void FTPWidget::get_file()
{
    int row=ui->treeView_server->currentIndex().row();

    if(row<0)
        return;

    QModelIndex index = m_treemodel_server->index(row,0);
    QString name = m_treemodel_server->data(index).toString();

    QString FTP_filename=ToSpecialEncoding(name);                            //将文件名转化成FTP识别码
    QString save_path=ui->lineEdit_path->text()+"/"+name;
    savefile=new QFile(save_path);
    if(!savefile->open(QIODevice::WriteOnly))//打开了文件，记得要关闭
    {
        qDebug()<<"savefile open error";
        savefile->close();
        savefile=0;
        return;
    }
    transfername=name;
    transfertype=1;
    m_ftp->get(FTP_filename,savefile);               //注意QIODevice*相当于QFile*

}

void FTPWidget::put_file()
{
    int row=ui->treeView_client->currentIndex().row();
    if(row<0)
        return;
    QModelIndex index = m_treemodel_client->index(row,0);
    QString client_name = m_treemodel_client->data(index).toString();
    QString client_filepath=ui->lineEdit_path->text()+"/"+client_name;

    QString ftp_name=ToSpecialEncoding(client_name);

    QFile file(client_filepath);
    if(!file.open(QIODevice::ReadWrite))
    {
        qDebug()<<"file open error";
        file.close();
        return;
    }

    transfername=client_name;
    transfertype=2;

    QByteArray    data = file.readAll();
    m_ftp->put (data,ftp_name);                   //需要修改FTP服务器的默认目录的权限即将权限rwxrwxr--修改为rwxrwxrwx，否则无法上传文件，错误类型为could not create file

    file.close();

}

void FTPWidget::update_clientview()
{
    //m_treemodel_client->clear();//这样也会清除掉列标头
    m_treemodel_client->removeRows(0,m_treemodel_client->rowCount());

    //判断路径是否存在
    QString path=ui->lineEdit_path->text();
    QDir dir(path);
    if(!dir.exists())
    {
        dir.mkdir(path);
    }
    dir.setFilter(QDir::Files | QDir::NoSymLinks | QDir::NoDotAndDotDot);
    QFileInfoList infolist=dir.entryInfoList();
    client_number=infolist.count();
    if(client_number<=0)
    {
        return;
    }
    ui->label_clientNum->setText(QString::number(client_number));

    for(int i=0;i<infolist.count();i++)
    {
        QList<QStandardItem*> list_item;

        //定义文件夹和文件的图标
        QPixmap pixmap(infolist.at(i).isDir() ? ":/image/floder.png" :":/image/file.png");
        QString filename=infolist.at(i).fileName();
        QStandardItem *filename_item=new QStandardItem(pixmap,filename);

        //显示文件大小
        QString file_size;
        if(infolist.at(i).isDir())
        {
            file_size="";
        }
        else
        {
            long long filesize=infolist.at(i).size();

            if((filesize/=1024)<0.9)//filesize=filesize/1024
                file_size=QString::number(infolist.at(i).size())+tr("B");
            else if(filesize/1024<0.9)
                file_size=QString::number(filesize,'f',2)+tr("K");
            else
                file_size=QString::number(filesize/1024,'f',2)+tr("M");
        }

        QStandardItem *filesize_item=new QStandardItem(file_size);

        QString modify_time=infolist.at(i).lastModified().toString("yyyy/MM/dd hh:mm");
        QStandardItem *time_item=new QStandardItem(modify_time);

        list_item.append(filename_item);
        list_item.append(filesize_item);
        list_item.append(time_item);

        m_treemodel_client->appendRow(list_item);

    }
}


void FTPWidget::dataTransferProgress_slot(qint64 readBytes, qint64 totalBytes)
{

    if(readBytes==0)
    {
        m_dialog->setRange(0,totalBytes);

        QString title;
        if(transfertype==1)
        {
            title="Get";
        }
        else if(transfertype==2)
         {
            title="Put";
        }
        m_dialog->setWindowTitle(title);
        m_dialog->setLabelText(transfername);
        m_dialog->show();
//        m_dialog->setGeometry(this->geometry().x()+(width()-m_dialog->width())/2,
//                              this->geometry().y()+(height()-m_dialog->height())/2,
//                              m_dialog->width(),m_dialog->height());    //设置在中心位置
        m_dialog->move(geometry().x()+(width()-m_dialog->width())/2,
                       geometry().y()+(height()-m_dialog->height())/2);
        m_dialog->raise();
    }

    m_dialog->setValue(readBytes);

    if(readBytes>=totalBytes)
    {
        //qDebug()<<"totalBytes:"<<totalBytes;
        m_dialog->close();

    }

}


void FTPWidget::customContextMenuRequested_treeviewserver(QPoint pos)
{
    int select_row=ui->treeView_server->indexAt(pos).row();
    //qDebug()<<"server:"<<select_row;
    if(select_row<0)
        return;

    servermenu->exec(QCursor::pos());        //弹出右键菜单，菜单位置为光标位置

}

void FTPWidget::customContextMenuRequested_treeviewclient(QPoint pos)
{
    int select_row=ui->treeView_client->indexAt(pos).row();
    //qDebug()<<"client:"<<select_row;
    if(select_row<0)
        return;

    clientmenu->exec(QCursor::pos());

}

void FTPWidget::get_action_slot()
{
    get_file();
}



void FTPWidget::put_action_slot()
{
    put_file();

}


void FTPWidget::focusChanged_slot(QWidget *old_widget, QWidget *new_widget)
{
    if(ui->treeView_client->hasFocus())
    {
        ui->treeView_server->clearSelection();
    }
    if(ui->treeView_server->hasFocus())
    {
        ui->treeView_client->clearSelection();
    }
}

/****************************读取配置文件********************************/
void FTPWidget::readSettings()
{
    QSettings settings("Config",QSettings::IniFormat);

    ui->lineEdit_ip->setText(settings.value("FTP/server_IP").toString());
    ui->lineEdit_port->setText(settings.value("FTP/server_port","21").toString());
    ui->lineEdit_username->setText(settings.value("FTP/username").toString());
    ui->lineEdit_password->setText(settings.value("FTP/password").toString());
    ui->lineEdit_path->setText(settings.value("FTP/path").toString());

}

/****************************写入配置文件********************************/
void FTPWidget::writeSettings()
{
    QSettings settings("Config",QSettings::IniFormat);

    settings.beginGroup("FTP");
    settings.setValue("server_IP",ui->lineEdit_ip->text());
    settings.setValue("server_port",ui->lineEdit_port->text());

    settings.setValue("username",ui->lineEdit_username->text());
    settings.setValue("password",ui->lineEdit_password->text());
    settings.setValue("path",ui->lineEdit_path->text());
    settings.endGroup();

}
































































































