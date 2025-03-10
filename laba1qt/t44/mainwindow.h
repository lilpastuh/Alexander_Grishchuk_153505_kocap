#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "book.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QVector <Book> books;
    ~MainWindow();

private slots:
//    void on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint);

    bool on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_textBrowser_anchorClicked(const QUrl &arg1);

    void on_textBrowser_2_anchorClicked(const QUrl &arg1);

    void RenderList();

    bool on_pushButton_3_clicked();

    void on_pushButton_6_clicked();





    void on_find_cursorPositionChanged();

    void on_pushButton_instr_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
