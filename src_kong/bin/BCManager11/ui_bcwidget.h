/********************************************************************************
** Form generated from reading UI file 'bcwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCWIDGET_H
#define UI_BCWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BCWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *DrivingBtn;
    QPushButton *CameraBtn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PointBtn;
    QPushButton *RqtBagBtn;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *CenterBtn;
    QPushButton *ExitBtn;

    void setupUi(QWidget *BCWidget)
    {
        if (BCWidget->objectName().isEmpty())
            BCWidget->setObjectName(QStringLiteral("BCWidget"));
        BCWidget->resize(922, 610);
        gridLayout = new QGridLayout(BCWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(BCWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setMinimumSize(QSize(150, 30));
        label_title->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(20);
        label_title->setFont(font);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        DrivingBtn = new QPushButton(BCWidget);
        DrivingBtn->setObjectName(QStringLiteral("DrivingBtn"));
        DrivingBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_2->addWidget(DrivingBtn);

        CameraBtn = new QPushButton(BCWidget);
        CameraBtn->setObjectName(QStringLiteral("CameraBtn"));
        CameraBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_2->addWidget(CameraBtn);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PointBtn = new QPushButton(BCWidget);
        PointBtn->setObjectName(QStringLiteral("PointBtn"));
        PointBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_3->addWidget(PointBtn);

        RqtBagBtn = new QPushButton(BCWidget);
        RqtBagBtn->setObjectName(QStringLiteral("RqtBagBtn"));
        RqtBagBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_3->addWidget(RqtBagBtn);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        CenterBtn = new QPushButton(BCWidget);
        CenterBtn->setObjectName(QStringLiteral("CenterBtn"));
        CenterBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_4->addWidget(CenterBtn);

        ExitBtn = new QPushButton(BCWidget);
        ExitBtn->setObjectName(QStringLiteral("ExitBtn"));
        ExitBtn->setMinimumSize(QSize(200, 80));

        horizontalLayout_4->addWidget(ExitBtn);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        retranslateUi(BCWidget);

        QMetaObject::connectSlotsByName(BCWidget);
    } // setupUi

    void retranslateUi(QWidget *BCWidget)
    {
        BCWidget->setWindowTitle(QApplication::translate("BCWidget", "BCWidget", Q_NULLPTR));
        label_title->setText(QApplication::translate("BCWidget", "\347\256\241\347\220\206\350\275\257\344\273\266", Q_NULLPTR));
        DrivingBtn->setText(QApplication::translate("BCWidget", "\351\201\245\346\216\247\350\207\252\344\270\273", Q_NULLPTR));
        CameraBtn->setText(QApplication::translate("BCWidget", "\346\230\276\347\244\272\345\233\276\345\203\217", Q_NULLPTR));
        PointBtn->setText(QApplication::translate("BCWidget", "\347\274\226\350\276\221\350\267\257\347\202\271", Q_NULLPTR));
        RqtBagBtn->setText(QApplication::translate("BCWidget", "\350\256\260\345\275\225\345\233\236\346\224\276", Q_NULLPTR));
        CenterBtn->setText(QApplication::translate("BCWidget", "\344\270\255\345\277\203\344\272\244\344\272\222", Q_NULLPTR));
        ExitBtn->setText(QApplication::translate("BCWidget", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BCWidget: public Ui_BCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCWIDGET_H
