#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QPainter>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class rectangle; }
QT_END_NAMESPACE

class rectangle : public QMainWindow
{
    Q_OBJECT

public:
    rectangle(QWidget *parent = nullptr);
    ~rectangle();
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::rectangle *ui;
    int timer;
    bool a=false;
    bool b=false;

    int i;
};


#endif // RECTANGLE_H
