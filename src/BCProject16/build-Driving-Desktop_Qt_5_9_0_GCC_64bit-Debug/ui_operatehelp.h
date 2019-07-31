/********************************************************************************
** Form generated from reading UI file 'operatehelp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATEHELP_H
#define UI_OPERATEHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperateHelp
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit_message;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_close;

    void setupUi(QWidget *OperateHelp)
    {
        if (OperateHelp->objectName().isEmpty())
            OperateHelp->setObjectName(QStringLiteral("OperateHelp"));
        OperateHelp->resize(570, 477);
        verticalLayout = new QVBoxLayout(OperateHelp);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(OperateHelp);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setMinimumSize(QSize(80, 50));
        QFont font;
        font.setPointSize(20);
        label_title->setFont(font);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        textEdit_message = new QTextEdit(OperateHelp);
        textEdit_message->setObjectName(QStringLiteral("textEdit_message"));
        QFont font1;
        font1.setPointSize(15);
        textEdit_message->setFont(font1);

        verticalLayout->addWidget(textEdit_message);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_close = new QPushButton(OperateHelp);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(100, 30));
        pushButton_close->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_close);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(OperateHelp);

        QMetaObject::connectSlotsByName(OperateHelp);
    } // setupUi

    void retranslateUi(QWidget *OperateHelp)
    {
        OperateHelp->setWindowTitle(QApplication::translate("OperateHelp", "Form", Q_NULLPTR));
        label_title->setText(QApplication::translate("OperateHelp", "\346\217\220  \347\244\272", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("OperateHelp", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OperateHelp: public Ui_OperateHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATEHELP_H
