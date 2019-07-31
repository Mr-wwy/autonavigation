/********************************************************************************
** Form generated from reading UI file 'cframeplaywnd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAMEPLAYWND_H
#define UI_CFRAMEPLAYWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CFramePlayWnd
{
public:
    QFrame *frameplaywnd;

    void setupUi(QFrame *CFramePlayWnd)
    {
        if (CFramePlayWnd->objectName().isEmpty())
            CFramePlayWnd->setObjectName(QStringLiteral("CFramePlayWnd"));
        CFramePlayWnd->resize(460, 364);
        CFramePlayWnd->setFrameShape(QFrame::StyledPanel);
        CFramePlayWnd->setFrameShadow(QFrame::Plain);
        frameplaywnd = new QFrame(CFramePlayWnd);
        frameplaywnd->setObjectName(QStringLiteral("frameplaywnd"));
        frameplaywnd->setGeometry(QRect(10, 10, 431, 341));
        frameplaywnd->setFrameShape(QFrame::StyledPanel);
        frameplaywnd->setFrameShadow(QFrame::Raised);

        retranslateUi(CFramePlayWnd);

        QMetaObject::connectSlotsByName(CFramePlayWnd);
    } // setupUi

    void retranslateUi(QFrame *CFramePlayWnd)
    {
        CFramePlayWnd->setWindowTitle(QApplication::translate("CFramePlayWnd", "Frame", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CFramePlayWnd: public Ui_CFramePlayWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAMEPLAYWND_H
