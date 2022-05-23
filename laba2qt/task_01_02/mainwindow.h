#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "list.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void rewrite();

    void Clear2();

    void Clear3();

    void Clear4();

    void FileWrite();

    void ReadFromFile();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_4_textEdited(const QString &arg1);

    void on_Math_valueChanged(int arg1);

    void on_Russian_valueChanged(int arg1);

    void on_Physics_valueChanged(int arg1);

    void on_spinBox_pos_valueChanged(int arg1);

    void on_AppointInfo_clicked();

    void on_DeleteInfo_clicked();

    void on_DeleteAll_clicked();

    void on_Sort_clicked();

    void on_AppointAverageMark_clicked();

    void on_AverageMark_valueChanged(int arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_AppointLastName_clicked();

    void on_AppointTown_clicked();

    void on_WriteFile_clicked();

    void on_ChooseFile_clicked();

    void on_ReadFile_clicked();

private:

    Ui::MainWindow *ui;

    List List;
    QString LastName;
    QString FirstName;
    QString Patronymic;
    QString Town;
    int MathMark;
    int RusMark;
    int PhysMark;
    int Pos;
    int AverageMark;
    int townCounter;
    int AverageMarkCounter;
    QString way;


};
#endif // MAINWINDOW_H
