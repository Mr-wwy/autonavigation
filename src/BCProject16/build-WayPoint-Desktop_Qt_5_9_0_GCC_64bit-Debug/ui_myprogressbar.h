/********************************************************************************
** Form generated from reading UI file 'myprogressbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROGRESSBAR_H
#define UI_MYPROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyProgressbar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *progressBar;

    void setupUi(QWidget *MyProgressbar)
    {
        if (MyProgressbar->objectName().isEmpty())
            MyProgressbar->setObjectName(QStringLiteral("MyProgressbar"));
        MyProgressbar->resize(342, 140);
        MyProgressbar->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        widget = new QWidget(MyProgressbar);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 301, 98));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_name = new QLabel(widget);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setMinimumSize(QSize(200, 25));
        label_name->setMaximumSize(QSize(16777215, 35));

        horizontalLayout->addWidget(label_name);

        horizontalSpacer_2 = new QSpacerItem(17, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 30));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        retranslateUi(MyProgressbar);

        QMetaObject::connectSlotsByName(MyProgressbar);
    } // setupUi

    void retranslateUi(QWidget *MyProgressbar)
    {
        MyProgressbar->setWindowTitle(QApplication::translate("MyProgressbar", "Form", Q_NULLPTR));
        label_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyProgressbar: public Ui_MyProgressbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROGRESSBAR_H
