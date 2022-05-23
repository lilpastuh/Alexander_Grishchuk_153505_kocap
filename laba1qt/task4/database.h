#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <iostream>

class Database
{    
    QString author;
    QString publisher_house;
    QString name_of_book;
    int year;
    int num_of_pages;
    
public:

    Database(QString author0 = "", QString publisher_house0 = "", QString name_of_book0 = "", int year0 = 1, int num_of_pages0 = 1);
    void set_author(QString n);
    void set_publlisher_house(QString ph);
    void set_book(QString b);
    void set_year(int y);
    void set_num_of_pages(int num);
    void set_database(QString author1, QString publisher_house1, QString name_of_book1, int year1, int num_of_pages1);

    QString get_author();
    QString get_publis_house();
    QString get_boook();
    int get_year();
    int get_num();
};

#endif // DATABASE_H
