#ifndef CFRAMEPLAYWND_H
#define CFRAMEPLAYWND_H

#include <QFrame>
#include <QMouseEvent>
#include <QResizeEvent>

namespace Ui {
class CFramePlayWnd;
}

//播放区域
typedef struct tagPlayRect
{
    int iX;
    int iY;
    int iWidth;
    int iHeight;
}CLIENT_PLAY_RECT, *LPCLIENT_PLAY_RECT;

class CFramePlayWnd : public QFrame
{
    Q_OBJECT

public:
    explicit CFramePlayWnd(QWidget *parent = 0);
    ~CFramePlayWnd();

    WId GetPlayWndId();
    int GetPlayRect(CLIENT_PLAY_RECT* pPlayRect);

public slots:

protected:
    void resizeEvent(QResizeEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);

signals:
    //Doubleclick signal
    void DoubleClickSig();

private:
    Ui::CFramePlayWnd *ui;

    QFrame *m_pframePlay; //windows/linux下作为播放窗口

    int m_iBorderWidth;
    int m_iBorderHeiht;

    int m_bSelected;
};

#endif // CFRAMEPLAYWND_H
