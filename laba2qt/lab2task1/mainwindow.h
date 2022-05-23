#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "list.h"
#include <QMainWindow>
#include <QTableWidgetitem>
#include <QTabWidget>
#include <QMessagebox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Clear2();


    void Clear3();


    void Clear4();


    void rewrite();

    void rewrite4();




    void FileWrite();

    void ReadFromFile();

    bool CheckInt(QByteArray ba);

    bool checkinp(QByteArray ba);

    bool checkDate(std::string str);
private slots:
    void on_NumberReis_valueChanged(int arg1);

    void on_typePlane_textEdited(const QString &arg1);

    void on_distanation_textEdited(const QString &arg1);

    void on_day_valueChanged(int arg1);

    void on_month_valueChanged(int arg1);

    void on_year_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_add_clicked();

    void on_change_clicked();

    void on_sort_clicked();

    void on_del_clicked();

    void on_delAll_clicked();



    void on_pushButton_clicked();


    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_FileWrite_clicked();

    void on_ReadFromFile_clicked();

    void on_ChooseFile_clicked();

private:
    Ui::MainWindow *ui;


    QString TypeofAir;
    int FlightNumber;
    QString Destination;
    int Day;
    int Month;
    int Year;
    int Pos;
    int Pos3;
    int Pos4;
    List L;
    int k;



    QString way;
};
#endif // MAINWINDOW_H
