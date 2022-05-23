#ifndef DATE_H
#define DATE_H

#include <QMainWindow>
#include <QString>
#include<QDate>
class Date
{
public:
    //explicit Date(QWidget *parent = nullptr);
    Date(int A,int B,int C);
    Date();
    void setAll(int A,int B,int C);
    void setBirth(int A,int B);
    int get_day()
    {
     return day;
    }
    int get_month()
    {
     return month;
    }
    int get_year()
    {
     return year;
    }

    QString getDate();

   // QString getnowDate();
    bool isLeap(int valueC);
    short WeekNumber(int valueA,int valueB,int valueC);
    Date NextDay(int valueA,int valueB,int valueC);
    int numberofDay(int valueA,int valueB,int valueC);
    Date PreviousDay();
    int DaysTillYourBithday(Date bithdaydate);
    int Duration(Date date);
private:
    int day;
    int month;
    int year;
    bool leap;
    //QString endDate;

};

#endif // DATE_H
