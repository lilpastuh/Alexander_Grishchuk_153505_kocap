#include "database.h"

Database::Database(QString author0, QString publisher_house0, QString name_of_book0, int year0, int num_of_pages0)
{
    author = author0;
    publisher_house = publisher_house0;
    name_of_book = name_of_book0;
    year = year0;
    num_of_pages = num_of_pages0;
}

void Database::set_author(QString n)
{
    author = n;
}

void Database::set_publlisher_house(QString ph)
{
    publisher_house = ph;
}

void Database::set_book(QString b)
{
    name_of_book = b;
}

void Database::set_year(int y)
{
    year = y;
}

void Database::set_num_of_pages(int num)
{
    num_of_pages = num;
}

void Database::set_database(QString author1, QString publisher_house1, QString name_of_book1, int year1, int num_of_pages1)
{
    author = author1;
    publisher_house = publisher_house1;
    name_of_book = name_of_book1;
    year = year1;
    num_of_pages = num_of_pages1;
}

QString Database::get_author()
{
    return author;
}

QString Database::get_publis_house()
{
    return publisher_house;
}

QString Database::get_boook()
{
    return name_of_book;
}

int Database::get_year()
{
    return year;
}

int Database::get_num()
{
    return num_of_pages;
}

