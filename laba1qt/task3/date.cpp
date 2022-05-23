#include "date.h"
#include <QDate>

Date::Date(int A, int B, int C)
{
    day=A;
    month=B;
    year=C;

}

Date::Date(){

    day = 1;
    month = 1;
    year = 1;

}
void Date::setAll(int A, int B, int C)
{
    day=A;
    month=B;
    year=C;
}

void Date::setBirth(int A,int B)
{
    day=A;
    month=B;
}

QString Date::getDate()
{
    QDate dt;
    dt.setDate(year, month, day);

    return dt.toString("dd.MM.yyyy");
}

//QString Date::getnowDate()
//{
//    return QDate::currentDate().toString("dd.MM.yyyy");
//}

bool Date::isLeap(int valueC)
{
    year=valueC;
    if((year%4==0 && year%100!=0) ||year%400==0)
    {
        leap=true;
    }
    else
    {
        leap=false;
    }
    return leap;
}

short Date::WeekNumber(int valueA, int valueB, int valueC)
{
    day=valueA;
    month=valueB;
    year=valueC;

    if(year==2004)
    {
        QDate data(year,month,day);
        return data.weekNumber();
    }


    int kodofXX;
    int XX=(year/100)%4;
    if(XX==0) kodofXX=6;
    else if(XX==1) kodofXX=4;
    else if(XX==2) kodofXX=2;
    else  kodofXX=0;



    int kodofYear;
    kodofYear=(kodofXX+year%100+(year%100)/4)%7;






    int dayof1Jan;
    dayof1Jan=(2+kodofYear)%7;

    if (isLeap(year) &&((day <= 31 && month == 1)||(day <= 29 && month == 2)))
    {
        dayof1Jan += 1;
    }
    //                понедельник-2
    //                вторник-3
    //                среда-4
    //                четверг-5
    //                пятница-6
    //                суббота-0
    //                воскресенье-1
    int firstdayof1Week;
    if(dayof1Jan==6) firstdayof1Week=4;
    if(dayof1Jan==0) firstdayof1Week=3;
    if(dayof1Jan==1) firstdayof1Week=2;
    if(dayof1Jan==2||dayof1Jan==3||dayof1Jan==4||dayof1Jan==5) firstdayof1Week=1;







    int numberofday;
    int k=0;


        for (int i=1;i<month;i++)
        {
           if(i<=9)
           {
                if(i%2!=0)
                {
                    k+=31;
                }
                else if(i==2 && !isLeap(year))
                {
                    k+=28;
                }
                else if(i==2 && isLeap(year))
                {
                    k+=29;
                }
                else if(i==8)
                {
                    k+=31;
                }
                else if(i%2==0 && i!=2)
                {
                    k+=30;
                }
          }
           else
           {
               if(i%2==0)
                   {
                       k+=31;
                   }

                   else if(i%2!=0)
                   {
                       k+=30;

                   }
           }
    }







    numberofday=k+day;
    int numberofWeek=0;
    if(firstdayof1Week<=numberofday)
    {
        for(int i =firstdayof1Week;i<numberofday;i+=7)
        {
            numberofWeek++;
        }

    }
    else
    {
        numberofWeek=53;
    }
    return numberofWeek;
}

Date Date::NextDay(int valueA, int valueB, int valueC)
{
    day=valueA;
    month=valueB;
    year=valueC;

    int nextDay;
    int nextMonth;
    int nextYear;
    if(month<=8)
    {
        //без перехода на новый месяц и год
        if(month%2!=0 && day<31)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;
        }
        else if(month==2 && !isLeap(year) && day<28)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;

        }
        else if(month==2 && isLeap(year)&&day<29)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;

        }
        else if(month==8 && day<31)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;
        }
        else if(month%2==0 && day<30 && month!=8 && month!=2)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;
        }



        //переход на новый месяц
        else if(month%2!=0 && day==31)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;
        }
        else if(month==2 && !isLeap(year) && day==28)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;

        }
        else if(month==2 && isLeap(year) && day==29)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;

        }
        else if(month==8 && day==31)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;
        }
        // else if(month%2==0 && day==30 && month!=8 && month!=2)
        else
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;
        }




    }
    else
    {
        //без перехода на новый месяц и год
        if(month%2!=0 && day<30)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;
        }
        else if(month%2==0 && day<31)
        {
            nextDay=day+1;
            nextMonth=month;
            nextYear=year;
        }
        //переход на новый месяц
        else if(month%2==0 && day==31 && month!=12)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;
        }
        else if(month%2!=0 && day==30)
        {
            nextDay=1;
            nextMonth=month+1;
            nextYear=year;
        }
        //переход на новый год
        //else if(month==12 && day==31)
        else
        {
            nextDay=1;
            nextMonth=1;
            nextYear=year+1;
        }
    }
    Date nd(nextDay,nextMonth,nextYear);
    return nd;
}

int Date::numberofDay(int valueA, int valueB, int valueC)
{
    day=valueA;
    month=valueB;
    year=valueC;
    int numberofday;
    int k=0;




    for (int i=1;i<month;i++)
    {
       if(i<=9)
       {
            if(i%2!=0)
            {
                k+=31;
            }
            else if(i==2 && !isLeap(year))
            {
                k+=28;
            }
            else if(i==2 && isLeap(year))
            {
                k+=29;
            }
            else if(i==8)
            {
                k+=31;
            }
            else if(i%2==0)
            {
                k+=30;
            }
      }
       else
       {
           if(i%2==0)
               {
                   k+=31;
               }

               else if(i%2!=0)
               {
                   k+=30;

               }
       }
}



    numberofday=k+day;
    return numberofday;
}

Date Date::PreviousDay()
{
    int days[14] = { 31,31,28 + this->isLeap(year),31,30,31,30,31,31,30,31,30,31,31 };

    int d = day;
    int m = month;
    int y = year;

    d--;
    if (d < 1) {
        d = days[m - 1];
        m--;
    }

    if (m < 1) {
        m = 12;
        y--;
    }

    Date Previous_Day(d, m, y);
    return Previous_Day;


}

int Date::DaysTillYourBithday(Date birthdaydate)
{
    QDate curdt;
    curdt.setDate(year,month,day);

    if(birthdaydate.day == 29 && birthdaydate.month == 2 && curdt.isLeapYear(birthdaydate.year))
    {
        //если сегодня високосный год но др не было
        if (curdt.isLeapYear(year) && ((month < birthdaydate.month) || (month == birthdaydate.month && day < birthdaydate.day)))
        {
            birthdaydate.year = year;
        }
        else
        {
        birthdaydate.year = year+1;
        birthdaydate.setBirth(birthdaydate.day,birthdaydate.month);

        //пока год рождения не станет високосным опять
        while(!curdt.isLeapYear(birthdaydate.year))
            {
                birthdaydate.year+=1;
            }
        }
    }

    else if (((month < birthdaydate.month) || (month == birthdaydate.month && day < birthdaydate.day))) //если дня рождения еще не было
    {
        birthdaydate.year = year;
    }

    else if (month == birthdaydate.month && day == birthdaydate.day)
    {
        //вывести поздравление с др
        return -1;
    }

    else
    {
        birthdaydate.year = year + 1;
    }





    QDate birdt;

    birdt.setDate(birthdaydate.year,birthdaydate.month,birthdaydate.day);


    return curdt.daysTo(birdt);




}

int Date::Duration(Date date)
{
    
    QDate curdt(year,month,day);

    QDate toDate(date.year, date.month,date.day);

    return curdt.daysTo(toDate);
}   
