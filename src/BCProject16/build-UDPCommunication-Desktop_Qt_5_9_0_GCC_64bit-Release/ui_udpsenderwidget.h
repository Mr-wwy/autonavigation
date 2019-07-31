/********************************************************************************
** Form generated from reading UI file 'udpsenderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSENDERWIDGET_H
#define UI_UDPSENDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPSenderWidget
{
public:
    QTextEdit *txtDataUdpServer;
    QLabel *label_from;
    QLabel *label_to;
    QLineEdit *lineEdit_from;
    QLineEdit *lineEdit_to;
    QGroupBox *groupBox_recv;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_T0;
    QLabel *label_T0_message;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_lianjian;
    QLabel *label_lianjian_message;
    QLabel *label_ip;
    QLineEdit *lineEdit_ip3;
    QLabel *label_port;
    QLineEdit *lineEdit_sendport;
    QPushButton *ConnetBtn;
    QLabel *label_zuboIP1;
    QLineEdit *lineEdit_zuboIP1;
    QLabel *label_2;
    QLineEdit *lineEdit_localport;
    QLabel *label_3;
    QLineEdit *lineEdit_renwuid;
    QCheckBox *ckHexReceiveUdpServer;
    QGroupBox *groupBox_send;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_lianjian;
    QCheckBox *checkBox_realtime;
    QCheckBox *checkBox_vehicle;
    QCheckBox *checkBox_T0;
    QLabel *label_interval;
    QSpinBox *spinBox_interval;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *labUdpListenPort;
    QLineEdit *txtUdpListenPort;
    QLabel *label_zuboIP2;
    QLineEdit *lineEdit_zuboIP2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnUdpListen;
    QPushButton *btnClearUdpServer;

    void setupUi(QWidget *UDPSenderWidget)
    {
        if (UDPSenderWidget->objectName().isEmpty())
            UDPSenderWidget->setObjectName(QStringLiteral("UDPSenderWidget"));
        UDPSenderWidget->resize(939, 628);
        txtDataUdpServer = new QTextEdit(UDPSenderWidget);
        txtDataUdpServer->setObjectName(QStringLiteral("txtDataUdpServer"));
        txtDataUdpServer->setGeometry(QRect(10, 10, 601, 471));
        label_from = new QLabel(UDPSenderWidget);
        label_from->setObjectName(QStringLiteral("label_from"));
        label_from->setGeometry(QRect(620, 240, 67, 17));
        label_to = new QLabel(UDPSenderWidget);
        label_to->setObjectName(QStringLiteral("label_to"));
        label_to->setGeometry(QRect(780, 240, 67, 17));
        lineEdit_from = new QLineEdit(UDPSenderWidget);
        lineEdit_from->setObjectName(QStringLiteral("lineEdit_from"));
        lineEdit_from->setGeometry(QRect(620, 260, 151, 25));
        lineEdit_from->setMinimumSize(QSize(150, 0));
        lineEdit_to = new QLineEdit(UDPSenderWidget);
        lineEdit_to->setObjectName(QStringLiteral("lineEdit_to"));
        lineEdit_to->setGeometry(QRect(780, 260, 151, 25));
        lineEdit_to->setMinimumSize(QSize(150, 0));
        groupBox_recv = new QGroupBox(UDPSenderWidget);
        groupBox_recv->setObjectName(QStringLiteral("groupBox_recv"));
        groupBox_recv->setGeometry(QRect(10, 490, 601, 131));
        verticalLayout = new QVBoxLayout(groupBox_recv);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_T0 = new QLabel(groupBox_recv);
        label_T0->setObjectName(QStringLiteral("label_T0"));
        label_T0->setMinimumSize(QSize(80, 0));
        label_T0->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(label_T0);

        label_T0_message = new QLabel(groupBox_recv);
        label_T0_message->setObjectName(QStringLiteral("label_T0_message"));
        label_T0_message->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(label_T0_message);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_lianjian = new QLabel(groupBox_recv);
        label_lianjian->setObjectName(QStringLiteral("label_lianjian"));
        label_lianjian->setMinimumSize(QSize(80, 0));
        label_lianjian->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(label_lianjian);

        label_lianjian_message = new QLabel(groupBox_recv);
        label_lianjian_message->setObjectName(QStringLiteral("label_lianjian_message"));
        label_lianjian_message->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(label_lianjian_message);


        verticalLayout->addLayout(horizontalLayout_2);

        label_ip = new QLabel(UDPSenderWidget);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        label_ip->setGeometry(QRect(620, 430, 151, 20));
        lineEdit_ip3 = new QLineEdit(UDPSenderWidget);
        lineEdit_ip3->setObjectName(QStringLiteral("lineEdit_ip3"));
        lineEdit_ip3->setGeometry(QRect(620, 450, 150, 25));
        lineEdit_ip3->setMinimumSize(QSize(150, 0));
        label_port = new QLabel(UDPSenderWidget);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setGeometry(QRect(780, 299, 81, 20));
        lineEdit_sendport = new QLineEdit(UDPSenderWidget);
        lineEdit_sendport->setObjectName(QStringLiteral("lineEdit_sendport"));
        lineEdit_sendport->setGeometry(QRect(780, 320, 150, 25));
        lineEdit_sendport->setMinimumSize(QSize(150, 0));
        ConnetBtn = new QPushButton(UDPSenderWidget);
        ConnetBtn->setObjectName(QStringLiteral("ConnetBtn"));
        ConnetBtn->setGeometry(QRect(780, 440, 151, 35));
        ConnetBtn->setMinimumSize(QSize(100, 35));
        label_zuboIP1 = new QLabel(UDPSenderWidget);
        label_zuboIP1->setObjectName(QStringLiteral("label_zuboIP1"));
        label_zuboIP1->setGeometry(QRect(620, 360, 151, 17));
        lineEdit_zuboIP1 = new QLineEdit(UDPSenderWidget);
        lineEdit_zuboIP1->setObjectName(QStringLiteral("lineEdit_zuboIP1"));
        lineEdit_zuboIP1->setGeometry(QRect(620, 380, 150, 25));
        lineEdit_zuboIP1->setMinimumSize(QSize(150, 0));
        label_2 = new QLabel(UDPSenderWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 300, 91, 17));
        lineEdit_localport = new QLineEdit(UDPSenderWidget);
        lineEdit_localport->setObjectName(QStringLiteral("lineEdit_localport"));
        lineEdit_localport->setGeometry(QRect(620, 320, 151, 25));
        label_3 = new QLabel(UDPSenderWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(622, 182, 142, 18));
        label_3->setMaximumSize(QSize(16777215, 18));
        lineEdit_renwuid = new QLineEdit(UDPSenderWidget);
        lineEdit_renwuid->setObjectName(QStringLiteral("lineEdit_renwuid"));
        lineEdit_renwuid->setGeometry(QRect(622, 206, 151, 25));
        ckHexReceiveUdpServer = new QCheckBox(UDPSenderWidget);
        ckHexReceiveUdpServer->setObjectName(QStringLiteral("ckHexReceiveUdpServer"));
        ckHexReceiveUdpServer->setGeometry(QRect(780, 40, 102, 26));
        ckHexReceiveUdpServer->setMinimumSize(QSize(0, 0));
        groupBox_send = new QGroupBox(UDPSenderWidget);
        groupBox_send->setObjectName(QStringLiteral("groupBox_send"));
        groupBox_send->setGeometry(QRect(620, 490, 311, 131));
        horizontalLayout_4 = new QHBoxLayout(groupBox_send);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_lianjian = new QCheckBox(groupBox_send);
        checkBox_lianjian->setObjectName(QStringLiteral("checkBox_lianjian"));
        checkBox_lianjian->setMinimumSize(QSize(0, 28));

        horizontalLayout_4->addWidget(checkBox_lianjian);

        checkBox_realtime = new QCheckBox(groupBox_send);
        checkBox_realtime->setObjectName(QStringLiteral("checkBox_realtime"));
        checkBox_realtime->setMinimumSize(QSize(0, 28));

        horizontalLayout_4->addWidget(checkBox_realtime);

        checkBox_vehicle = new QCheckBox(groupBox_send);
        checkBox_vehicle->setObjectName(QStringLiteral("checkBox_vehicle"));
        checkBox_vehicle->setMinimumSize(QSize(120, 28));

        horizontalLayout_4->addWidget(checkBox_vehicle);

        checkBox_T0 = new QCheckBox(groupBox_send);
        checkBox_T0->setObjectName(QStringLiteral("checkBox_T0"));
        checkBox_T0->setMinimumSize(QSize(0, 28));

        horizontalLayout_4->addWidget(checkBox_T0);

        label_interval = new QLabel(UDPSenderWidget);
        label_interval->setObjectName(QStringLiteral("label_interval"));
        label_interval->setGeometry(QRect(783, 182, 105, 18));
        label_interval->setMaximumSize(QSize(16777215, 18));
        spinBox_interval = new QSpinBox(UDPSenderWidget);
        spinBox_interval->setObjectName(QStringLiteral("spinBox_interval"));
        spinBox_interval->setGeometry(QRect(783, 206, 151, 26));
        spinBox_interval->setMinimumSize(QSize(0, 26));
        spinBox_interval->setMinimum(1);
        spinBox_interval->setMaximum(1000000);
        spinBox_interval->setValue(1000);
        layoutWidget = new QWidget(UDPSenderWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(622, 12, 151, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labUdpListenPort = new QLabel(layoutWidget);
        labUdpListenPort->setObjectName(QStringLiteral("labUdpListenPort"));

        verticalLayout_2->addWidget(labUdpListenPort);

        txtUdpListenPort = new QLineEdit(layoutWidget);
        txtUdpListenPort->setObjectName(QStringLiteral("txtUdpListenPort"));

        verticalLayout_2->addWidget(txtUdpListenPort);

        label_zuboIP2 = new QLabel(UDPSenderWidget);
        label_zuboIP2->setObjectName(QStringLiteral("label_zuboIP2"));
        label_zuboIP2->setGeometry(QRect(780, 360, 151, 17));
        lineEdit_zuboIP2 = new QLineEdit(UDPSenderWidget);
        lineEdit_zuboIP2->setObjectName(QStringLiteral("lineEdit_zuboIP2"));
        lineEdit_zuboIP2->setGeometry(QRect(780, 380, 150, 25));
        lineEdit_zuboIP2->setMinimumSize(QSize(150, 0));
        layoutWidget1 = new QWidget(UDPSenderWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(621, 81, 301, 37));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnUdpListen = new QPushButton(layoutWidget1);
        btnUdpListen->setObjectName(QStringLiteral("btnUdpListen"));
        btnUdpListen->setMinimumSize(QSize(0, 35));

        horizontalLayout_3->addWidget(btnUdpListen);

        btnClearUdpServer = new QPushButton(layoutWidget1);
        btnClearUdpServer->setObjectName(QStringLiteral("btnClearUdpServer"));
        btnClearUdpServer->setMinimumSize(QSize(0, 35));

        horizontalLayout_3->addWidget(btnClearUdpServer);

        layoutWidget->raise();
        layoutWidget->raise();
        label_ip->raise();
        lineEdit_ip3->raise();
        label_port->raise();
        lineEdit_sendport->raise();
        ConnetBtn->raise();
        txtDataUdpServer->raise();
        label_from->raise();
        label_to->raise();
        lineEdit_from->raise();
        lineEdit_to->raise();
        groupBox_recv->raise();
        label_zuboIP1->raise();
        lineEdit_zuboIP1->raise();
        label_2->raise();
        lineEdit_localport->raise();
        label_3->raise();
        lineEdit_renwuid->raise();
        ckHexReceiveUdpServer->raise();
        groupBox_send->raise();
        label_interval->raise();
        spinBox_interval->raise();
        label_zuboIP2->raise();
        lineEdit_zuboIP2->raise();

        retranslateUi(UDPSenderWidget);

        QMetaObject::connectSlotsByName(UDPSenderWidget);
    } // setupUi

    void retranslateUi(QWidget *UDPSenderWidget)
    {
        UDPSenderWidget->setWindowTitle(QApplication::translate("UDPSenderWidget", "UDPClientWidget", Q_NULLPTR));
        label_from->setText(QApplication::translate("UDPSenderWidget", "\344\277\241\346\272\220\357\274\232", Q_NULLPTR));
        label_to->setText(QApplication::translate("UDPSenderWidget", "\344\277\241\345\256\277\357\274\232", Q_NULLPTR));
        groupBox_recv->setTitle(QApplication::translate("UDPSenderWidget", "\346\216\245\345\217\227\344\277\241\346\201\257", Q_NULLPTR));
        label_T0->setText(QApplication::translate("UDPSenderWidget", "T0\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_T0_message->setText(QString());
        label_lianjian->setText(QApplication::translate("UDPSenderWidget", "\351\223\276\347\233\221\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_lianjian_message->setText(QString());
        label_ip->setText(QApplication::translate("UDPSenderWidget", "\345\215\225\346\222\255/\347\273\204\346\222\255IP\345\234\260\345\235\2003\357\274\232", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_port->setToolTip(QApplication::translate("UDPSenderWidget", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_port->setText(QApplication::translate("UDPSenderWidget", "\345\217\221\345\276\200\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        ConnetBtn->setText(QApplication::translate("UDPSenderWidget", "\350\277\236\346\216\245", Q_NULLPTR));
        label_zuboIP1->setText(QApplication::translate("UDPSenderWidget", "\345\215\225\346\222\255/\347\273\204\346\222\255IP\345\234\260\345\235\2001\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("UDPSenderWidget", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("UDPSenderWidget", "\344\273\273\345\212\241ID\357\274\232", Q_NULLPTR));
        ckHexReceiveUdpServer->setText(QApplication::translate("UDPSenderWidget", "16\350\277\233\345\210\266\346\216\245\346\224\266", Q_NULLPTR));
        groupBox_send->setTitle(QApplication::translate("UDPSenderWidget", "\345\217\221\351\200\201\344\277\241\346\201\257", Q_NULLPTR));
        checkBox_lianjian->setText(QApplication::translate("UDPSenderWidget", "\351\223\276\347\233\221\344\277\241\346\201\257", Q_NULLPTR));
        checkBox_realtime->setText(QApplication::translate("UDPSenderWidget", "\345\256\236\346\227\266\344\277\241\346\201\257", Q_NULLPTR));
        checkBox_vehicle->setText(QApplication::translate("UDPSenderWidget", "\347\212\266\346\200\201\344\277\241\346\201\257", Q_NULLPTR));
        checkBox_T0->setText(QApplication::translate("UDPSenderWidget", "T0\344\277\241\346\201\257", Q_NULLPTR));
        label_interval->setText(QApplication::translate("UDPSenderWidget", "\345\217\221\351\200\201\351\227\264\351\232\224(ms)\357\274\232", Q_NULLPTR));
        labUdpListenPort->setText(QApplication::translate("UDPSenderWidget", "\347\233\221\345\220\254\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_zuboIP2->setText(QApplication::translate("UDPSenderWidget", "\345\215\225\346\222\255/\347\273\204\346\222\255IP\345\234\260\345\235\2002\357\274\232", Q_NULLPTR));
        btnUdpListen->setText(QApplication::translate("UDPSenderWidget", "\347\233\221\345\220\254", Q_NULLPTR));
        btnClearUdpServer->setText(QApplication::translate("UDPSenderWidget", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UDPSenderWidget: public Ui_UDPSenderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSENDERWIDGET_H
