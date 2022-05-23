#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "myfigure.h"

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

    void on_spinBox_x_valueChanged(int arg1);

    void on_spinBox_y_valueChanged(int arg1);

    void on_spinBox_h_valueChanged(int arg1);

    void on_spinBox_rotate_valueChanged(int arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_spinBox_Width_valueChanged(int arg1);

    void on_spinBox_rotate_2_valueChanged(int arg1);

    void on_radioButton_clicked();

    void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;

    int Timer;

    int x; int y; int h; int rot; int w;

    int X; int Y; int H; int Rot; int W;

    int alpha; int Alpha;

    double area; double perimetr;

    bool a = false;

    QString choice;
};
#endif // MAINWINDOW_H
