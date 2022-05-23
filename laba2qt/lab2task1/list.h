    #ifndef LIST_H
#define LIST_H
#include <QString>
#include <QDate>


struct Elem
{
    Elem(QString TypeofAir, int count,QString punkt, int d, int m, int y);
    Elem();

    void setAll(QString TypeofAir, int count, QString punkt, int d, int m, int y);

    QString getDate();

    bool checkDate();



    int getColl();

    QString typeofAir;
    int flightNumber;
    QString destination;
    int day;
    int month;
    int year;

    Elem * next, * prev;
};

class List
{

    Elem * Head, * Tail;

    int Count;

public:

    Elem* GetHead();
    Elem* GetTail();

    List();

   List(const List&);

   ~List();

   int GetCount();

   Elem* GetElem(int);


   void sort();

   void DelAll();

   void Del(int pos = 0);

   void Insert(int pos, QString TypeofAir, int count, QString punkt, int d,int m,int y);

   void AddTail(QString TypeofAir, int count, QString punkt, int d,int m,int y);

   void AddHead(QString TypeofAir, int count, QString punkt, int d,int m,int y);

   void Change(int pos, QString TypeofAir, int count, QString punkt, int d,int m,int y);


};

#endif // LIST_H
