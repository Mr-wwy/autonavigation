/********************************************************************************
** Form generated from reading UI file 'ftpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTPWIDGET_H
#define UI_FTPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FTPWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ip;
    QLabel *label_username;
    QLabel *label_path;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_ip;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_path;
    QPushButton *ViewBtn;
    QGridLayout *gridLayout;
    QPushButton *ConBtn;
    QPushButton *EixtBtn;
    QPushButton *GetBtn;
    QPushButton *PutBtn;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_server;
    QSpacerItem *horizontalSpacer;
    QLabel *label_serverNum;
    QTreeView *treeView_server;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_client;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_clientNum;
    QTreeView *treeView_client;
    QLabel *label_status;

    void setupUi(QWidget *FTPWidget)
    {
        if (FTPWidget->objectName().isEmpty())
            FTPWidget->setObjectName(QStringLiteral("FTPWidget"));
        FTPWidget->resize(830, 530);
        layoutWidget = new QWidget(FTPWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 811, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_ip = new QLabel(layoutWidget);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        label_ip->setMinimumSize(QSize(70, 25));

        verticalLayout_2->addWidget(label_ip);

        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setMinimumSize(QSize(70, 25));

        verticalLayout_2->addWidget(label_username);

        label_path = new QLabel(layoutWidget);
        label_path->setObjectName(QStringLiteral("label_path"));
        label_path->setMinimumSize(QSize(70, 25));

        verticalLayout_2->addWidget(label_path);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_ip = new QLineEdit(layoutWidget);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setMinimumSize(QSize(150, 25));

        horizontalLayout_2->addWidget(lineEdit_ip);

        label_port = new QLabel(layoutWidget);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setMinimumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(label_port);

        lineEdit_port = new QLineEdit(layoutWidget);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(lineEdit_port);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(150, 25));

        horizontalLayout_3->addWidget(lineEdit_username);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setMinimumSize(QSize(70, 25));

        horizontalLayout_3->addWidget(label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(100, 25));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_password);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_path = new QLineEdit(layoutWidget);
        lineEdit_path->setObjectName(QStringLiteral("lineEdit_path"));

        horizontalLayout->addWidget(lineEdit_path);

        ViewBtn = new QPushButton(layoutWidget);
        ViewBtn->setObjectName(QStringLiteral("ViewBtn"));
        ViewBtn->setMinimumSize(QSize(30, 25));
        ViewBtn->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(ViewBtn);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ConBtn = new QPushButton(layoutWidget);
        ConBtn->setObjectName(QStringLiteral("ConBtn"));
        ConBtn->setMinimumSize(QSize(30, 30));
        ConBtn->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(ConBtn, 0, 0, 1, 1);

        EixtBtn = new QPushButton(layoutWidget);
        EixtBtn->setObjectName(QStringLiteral("EixtBtn"));
        EixtBtn->setMinimumSize(QSize(30, 30));
        EixtBtn->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(EixtBtn, 0, 1, 1, 1);

        GetBtn = new QPushButton(layoutWidget);
        GetBtn->setObjectName(QStringLiteral("GetBtn"));
        GetBtn->setMinimumSize(QSize(30, 30));
        GetBtn->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(GetBtn, 1, 0, 1, 1);

        PutBtn = new QPushButton(layoutWidget);
        PutBtn->setObjectName(QStringLiteral("PutBtn"));
        PutBtn->setMinimumSize(QSize(30, 30));
        PutBtn->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(PutBtn, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_server = new QLabel(layoutWidget);
        label_server->setObjectName(QStringLiteral("label_server"));

        horizontalLayout_5->addWidget(label_server);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_serverNum = new QLabel(layoutWidget);
        label_serverNum->setObjectName(QStringLiteral("label_serverNum"));
        label_serverNum->setMinimumSize(QSize(30, 0));
        label_serverNum->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(label_serverNum);


        verticalLayout_4->addLayout(horizontalLayout_5);

        treeView_server = new QTreeView(layoutWidget);
        treeView_server->setObjectName(QStringLiteral("treeView_server"));
        treeView_server->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout_4->addWidget(treeView_server);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_client = new QLabel(layoutWidget);
        label_client->setObjectName(QStringLiteral("label_client"));

        horizontalLayout_6->addWidget(label_client);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_clientNum = new QLabel(layoutWidget);
        label_clientNum->setObjectName(QStringLiteral("label_clientNum"));
        label_clientNum->setMinimumSize(QSize(30, 0));
        label_clientNum->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_clientNum);


        verticalLayout_5->addLayout(horizontalLayout_6);

        treeView_client = new QTreeView(layoutWidget);
        treeView_client->setObjectName(QStringLiteral("treeView_client"));

        verticalLayout_5->addWidget(treeView_client);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_7);

        label_status = new QLabel(layoutWidget);
        label_status->setObjectName(QStringLiteral("label_status"));

        verticalLayout->addWidget(label_status);


        retranslateUi(FTPWidget);

        QMetaObject::connectSlotsByName(FTPWidget);
    } // setupUi

    void retranslateUi(QWidget *FTPWidget)
    {
        FTPWidget->setWindowTitle(QApplication::translate("FTPWidget", "FTPWidget", Q_NULLPTR));
        label_ip->setText(QApplication::translate("FTPWidget", "IP:", Q_NULLPTR));
        label_username->setText(QApplication::translate("FTPWidget", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        label_path->setText(QApplication::translate("FTPWidget", "\350\267\257\345\276\204:", Q_NULLPTR));
        lineEdit_ip->setText(QApplication::translate("FTPWidget", "127.0.0.1", Q_NULLPTR));
        label_port->setText(QApplication::translate("FTPWidget", "\347\253\257\345\217\243:", Q_NULLPTR));
        lineEdit_port->setText(QApplication::translate("FTPWidget", "21", Q_NULLPTR));
        lineEdit_username->setText(QApplication::translate("FTPWidget", "ftpname", Q_NULLPTR));
        label_password->setText(QApplication::translate("FTPWidget", "\345\257\206\347\240\201:", Q_NULLPTR));
        lineEdit_password->setText(QApplication::translate("FTPWidget", "123456", Q_NULLPTR));
        lineEdit_path->setText(QApplication::translate("FTPWidget", "/home", Q_NULLPTR));
        ViewBtn->setText(QApplication::translate("FTPWidget", "\346\211\223\345\274\200", Q_NULLPTR));
        ConBtn->setText(QApplication::translate("FTPWidget", "\350\277\236\346\216\245", Q_NULLPTR));
        EixtBtn->setText(QApplication::translate("FTPWidget", "\351\200\200\345\207\272", Q_NULLPTR));
        GetBtn->setText(QApplication::translate("FTPWidget", "\344\270\213\350\275\275", Q_NULLPTR));
        PutBtn->setText(QApplication::translate("FTPWidget", "\344\270\212\344\274\240", Q_NULLPTR));
        label_server->setText(QApplication::translate("FTPWidget", "\346\234\215\345\212\241\347\253\257:", Q_NULLPTR));
        label_serverNum->setText(QString());
        label_client->setText(QApplication::translate("FTPWidget", "\345\256\242\346\210\267\347\253\257:", Q_NULLPTR));
        label_clientNum->setText(QString());
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FTPWidget: public Ui_FTPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPWIDGET_H
