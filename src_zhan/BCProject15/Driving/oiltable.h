#ifndef DRIVING_OILTABLE_H_
#define DRIVING_OILTABLE_H_

#include <QWidget>

namespace Ui {
class OilTable;
}

class OilTable : public QWidget
{
    Q_OBJECT

public:
    explicit OilTable(QWidget *parent = 0);
    void paintEvent(QPaintEvent* event);
    void change_oiltable(qreal temp);
    ~OilTable();

private:
    Ui::OilTable *ui;
    qreal m_degreespeed;
    int m_pointX;
    int m_pointY;
};

#endif // DRIVING_OILTABLE_H_
