#ifndef DRIVING_FPS_H_
#define DRIVING_FPS_H_

#include <QWidget>

namespace Ui {
class Fps;
}

class Fps : public QWidget
{
    Q_OBJECT

public:
    explicit Fps(QWidget *parent = 0);
    void change_fps(int temp);
    ~Fps();

private:
    Ui::Fps *ui;
};

#endif // DRIVING_FPS_H_
