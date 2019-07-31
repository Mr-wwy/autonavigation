#include "cframeplaywnd.h"
#include "ui_cframeplaywnd.h"

#include <QDebug>

/*******************************************************************
*      Function:   QFrame
*   Description:   structure function
*     Parameter:   (IN)   parent   parent object.
**********************************************************************/
CFramePlayWnd::CFramePlayWnd(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::CFramePlayWnd)
{
    ui->setupUi(this);

    m_iBorderWidth = 2;
    m_iBorderHeiht = 2;
    m_bSelected = false;

    setStyleSheet("border: 2px solid gray;");

    m_pframePlay = ui->frameplaywnd;
    m_pframePlay->move(m_iBorderWidth, m_iBorderHeiht);//和上面的border保持一致
    m_pframePlay->setStyleSheet("border: none; background-color: rgb(0, 0, 0);");
}

/*******************************************************************
*      Function:   CFramePlayWnd::~CFramePlayWnd
*   Description:   析构函数
*     Parameter:   (IN)   无参数
**********************************************************************/
CFramePlayWnd::~CFramePlayWnd()
{
    delete ui;
}


/*******************************************************************
      Function:   CFramePlayWnd::resizeEvent
   Description:   new size
     Parameter:   (IN)   QResizeEvent *event  Size event.
        Return:   none
**********************************************************************/
void CFramePlayWnd::resizeEvent(QResizeEvent *event)
{  
    int iTempWidth;
    int iTempHeight;
    iTempWidth = event->size().width();
    iTempHeight = event->size().height();

    m_pframePlay->resize(iTempWidth - 2*m_iBorderWidth, iTempHeight - 2*m_iBorderHeiht);
}

/*******************************************************************
      Function:   CFramePlayWnd::GetPlayWndId
   Description:   Get play HWND in Windows.
     Parameter:   none
        Return:   Window ID.
**********************************************************************/
WId CFramePlayWnd::GetPlayWndId()
{
    return m_pframePlay->winId();
}

/********************************************************************
*      Function:   CFramePlayWnd::GetPlayRect
*   Description:   Get play rect in Linux.
*     Parameter:   (IN)   CLIENT_PLAY_RECT* pPlayRect
*        Return:   0--success，-1--fail.
**********************************************************************/
int CFramePlayWnd::GetPlayRect(CLIENT_PLAY_RECT* pPlayRect)
{
    if (NULL == pPlayRect)
    {
        return 0;
    }
    pPlayRect->iX = x() + m_iBorderWidth;
    pPlayRect->iY = y() + m_iBorderHeiht;

    //计算尺寸
    pPlayRect->iWidth = m_pframePlay->width();
    pPlayRect->iHeight = m_pframePlay->height();
    return 1;
}


void CFramePlayWnd::mouseDoubleClickEvent(QMouseEvent * event)
{
    if(event->button()==Qt::LeftButton)
    {
        emit DoubleClickSig();
    }
}
