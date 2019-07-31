#ifndef DRIVING_MYINDICATOR_H_
#define DRIVING_MYINDICATOR_H_

#include <QWidget>
#include <QtGui>

const int INDICATOR_PEN_WIDTH = 1;
const QColor INDICATOR_FRAME_COLOR = QColor(255,230,115,200);
const QColor INDICATOR_GRAPH_COLOR = QColor(23,30,255,200);

class MyIndicator : public QWidget
{
    Q_OBJECT
public:
    explicit MyIndicator(QWidget *parent = 0);
    void SetForeColor(QColor c);

protected:
    QSize sizeHint() const
    {
        return QSize(70,300);
    }

    QSize minimumSizeHint() const
    {
        return QSize(80,200);
    }

    void paintEvent(QPaintEvent *);

private:
    void drawVariables(QPainter* painter);
    void drawBackground(QPainter* painter);
    void drawLCDNums(QPainter* painter);
    void drawRect(QPainter* painter);
    void drawBars(QPainter* painter);
    void drawGraph(QPainter* painter);

private:
    void initVariables();

private:
    qreal m_leftSpace;
    qreal m_topSpace;
    qreal m_lcdWidth;
    qreal m_lcdHeight;
    int m_value;
    int m_currValue;
    bool m_bReverse;

    QTimer* updateTimer;
    QPointF m_rectTopLeft;
    QPointF m_rectBottomRight;
    QColor forecolor;

private slots:
    void UpdateData();

public slots:
    void setValue(int value);

};

#endif // DRIVING_MYINDICATOR_H_
