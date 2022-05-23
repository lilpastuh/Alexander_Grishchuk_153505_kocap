#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPainter>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    int timer;
    bool a=false;
    bool b=false;
    bool c=false;
    int i;
    int rot;
    int rot2;


};
#endif // MAINWINDOW_H
