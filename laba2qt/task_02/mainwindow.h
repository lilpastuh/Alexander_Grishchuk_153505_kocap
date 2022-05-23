#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stack.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool isRus(QString str);

    QString check(QString str);

    int bfigure;
    int bsquare;
    int bround;

    Stack *stack;



private slots:
    void on_textEdit_textChanged();

    void on_LoadushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
