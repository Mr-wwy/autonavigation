/********************************************************************************
** Form generated from reading UI file 'widgetbegin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETBEGIN_H
#define UI_WIDGETBEGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetbegin
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *widgetbegin)
    {
        if (widgetbegin->objectName().isEmpty())
            widgetbegin->setObjectName(QStringLiteral("widgetbegin"));
        widgetbegin->resize(841, 563);
        gridLayout_5 = new QGridLayout(widgetbegin);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        frame = new QFrame(widgetbegin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));
        label->setLineWidth(1);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(110, 0));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(110, 0));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62)"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(50, 0));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(50, 0));
        label_11->setFont(font1);
        label_11->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_2->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);
        label_12->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(50, 0));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_2->addWidget(label_13, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(50, 0));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_3->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(50, 0));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_3->addWidget(label_9, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setFont(font2);
        label_14->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(50, 0));
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_4->addWidget(label_15, 0, 1, 1, 1);

        label_16 = new QLabel(frame);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setFont(font2);
        label_16->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(frame);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(50, 0));
        label_17->setFont(font1);
        label_17->setStyleSheet(QStringLiteral("color: rgb(252, 175, 62);"));

        gridLayout_4->addWidget(label_17, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_4);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(292, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 100));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(200, 100));
        pushButton_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        gridLayout_5->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(widgetbegin);

        QMetaObject::connectSlotsByName(widgetbegin);
    } // setupUi

    void retranslateUi(QWidget *widgetbegin)
    {
        widgetbegin->setWindowTitle(QApplication::translate("widgetbegin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("widgetbegin", "\350\256\260\345\275\225\346\225\260\346\215\256\347\202\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("widgetbegin", "Gps\346\257\253\347\247\222:", Q_NULLPTR));
        label_4->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("widgetbegin", "\351\227\264\350\267\235:", Q_NULLPTR));
        label_5->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("widgetbegin", "\351\253\230\346\226\257x:", Q_NULLPTR));
        label_11->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_12->setText(QApplication::translate("widgetbegin", "\351\253\230\346\226\257y:", Q_NULLPTR));
        label_13->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("widgetbegin", "\347\273\217\345\272\246:", Q_NULLPTR));
        label_7->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("widgetbegin", "\347\273\264\345\272\246:", Q_NULLPTR));
        label_9->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_14->setText(QApplication::translate("widgetbegin", "\346\234\237\346\234\233\351\200\237\345\272\246:", Q_NULLPTR));
        label_15->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        label_16->setText(QApplication::translate("widgetbegin", "\347\202\271\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("widgetbegin", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("widgetbegin", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("widgetbegin", "\345\201\234\346\255\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetbegin: public Ui_widgetbegin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBEGIN_H
