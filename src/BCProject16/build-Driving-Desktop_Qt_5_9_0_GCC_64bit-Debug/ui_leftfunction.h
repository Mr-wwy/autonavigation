/********************************************************************************
** Form generated from reading UI file 'leftfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTFUNCTION_H
#define UI_LEFTFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeftFunction
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_distance_guihua;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_distance_xingshi;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_time;

    void setupUi(QWidget *LeftFunction)
    {
        if (LeftFunction->objectName().isEmpty())
            LeftFunction->setObjectName(QStringLiteral("LeftFunction"));
        LeftFunction->resize(394, 129);
        verticalLayout = new QVBoxLayout(LeftFunction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(LeftFunction);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(140, 30));
        label_3->setMaximumSize(QSize(140, 16777215));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        label_distance_guihua = new QLabel(LeftFunction);
        label_distance_guihua->setObjectName(QStringLiteral("label_distance_guihua"));
        label_distance_guihua->setFont(font);

        horizontalLayout_3->addWidget(label_distance_guihua);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LeftFunction);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(140, 30));
        label->setMaximumSize(QSize(140, 16777215));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_distance_xingshi = new QLabel(LeftFunction);
        label_distance_xingshi->setObjectName(QStringLiteral("label_distance_xingshi"));
        label_distance_xingshi->setFont(font);

        horizontalLayout->addWidget(label_distance_xingshi);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(LeftFunction);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(140, 30));
        label_2->setMaximumSize(QSize(140, 16777215));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        label_time = new QLabel(LeftFunction);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setFont(font);

        horizontalLayout_2->addWidget(label_time);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(LeftFunction);

        QMetaObject::connectSlotsByName(LeftFunction);
    } // setupUi

    void retranslateUi(QWidget *LeftFunction)
    {
        LeftFunction->setWindowTitle(QApplication::translate("LeftFunction", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("LeftFunction", "\350\247\204\345\210\222\350\267\257\347\250\213\357\274\232", Q_NULLPTR));
        label_distance_guihua->setText(QString());
        label->setText(QApplication::translate("LeftFunction", "\350\241\214\351\251\266\350\267\257\347\250\213\357\274\232", Q_NULLPTR));
        label_distance_xingshi->setText(QString());
        label_2->setText(QApplication::translate("LeftFunction", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LeftFunction: public Ui_LeftFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTFUNCTION_H
