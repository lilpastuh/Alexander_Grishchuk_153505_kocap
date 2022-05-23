#include "list.h"
#include <QDebug>
Elem::Elem(QString name, int count,QString punkt, int d, int m, int y)
{
    typeofAir = name;
    flightNumber = count;
    destination = punkt;

    day=d;
    month=m;
    year=y;

}

Elem::Elem()
{
    typeofAir = "";

    destination = "";

    flightNumber = 1;


     day = 1;
     month = 1;
     year = 1;
}

Elem* List::GetHead()
{
    return Head;
}

Elem* List::GetTail()
{
    return Tail;
}

void Elem::setAll(QString TypeofAir, int count, QString punkt, int d, int m, int y)
{
    typeofAir = TypeofAir;
    flightNumber = count;
    destination = punkt;

    day=d;
    month=m;
    year=y;
}

List::List()
{
    Head = Tail = nullptr;
    Count = 0;
}

List::List(const List &L)
{
    Head = Tail = nullptr;
    Count = 0;

    Elem * temp = L.Head;

    while(temp != 0)
    {

        AddTail(temp->typeofAir, temp->flightNumber, temp->destination, temp->day, temp->month, temp->year);
        temp = temp->next;
    }
}

List::~List()
{
    DelAll();
}

QString Elem::getDate()
{
    QDate dt;
    dt.setDate(year, month, day);

    return dt.toString("dd.MM.yyyy");
}

bool Elem::checkDate()
{
    QDate dt;
    dt.setDate(year, month, day);

    return dt.isValid();
}

int Elem::getColl()
{

    return flightNumber;
}

void List::AddHead(QString TypeofAir, int count, QString punkt, int d,int m,int y)
{
    Elem * temp = new Elem;

    temp->prev = 0;

    temp->typeofAir = TypeofAir;
    temp->flightNumber = count;
    temp->destination = punkt;
    temp->day = d;
    temp->month = m;
    temp->year = y;

    temp->next = Head;

    if(Head != 0)
        Head->prev = temp;

    if(Count == 0)
        Head = Tail = temp;
    else

        Head = temp;

    Count++;
}

void List::AddTail(QString TypeofAir, int count, QString punkt, int d, int m, int y)
{

    Elem * temp = new Elem;

    temp->next = 0;

    temp->typeofAir = TypeofAir;
    temp->flightNumber = count;
    temp->destination = punkt;
    temp->day = d;
    temp->month = m;
    temp->year = y;

    temp->prev = Tail;

    if(Tail != 0)
        Tail->next = temp;

    if(Count == 0)
        Head = Tail = temp;
    else

        Tail = temp;

    Count++;
}

void List::Insert(int pos,QString TypeofAir, int count, QString punkt, int d, int m, int y)
{

    if(pos == Count + 1)
    {

        AddTail(TypeofAir, count, punkt, d, m, y);
        return;
    }
    else if(pos == 1)
    {

        AddHead(TypeofAir, count, punkt, d, m, y);
        return;
    }

    int i = 1;

    Elem * Ins = Head;

    while(i < pos)
    {

        Ins = Ins->next;
        i++;
    }

    Elem * PrevIns = Ins->prev;

    Elem * temp = new Elem;

    temp->setAll(TypeofAir, count, punkt, d, m, y);

    if(PrevIns != 0 && Count != 1)
        PrevIns->next = temp;

    temp->next = Ins;
    temp->prev = PrevIns;
    Ins->prev = temp;

    Count++;
}

void List::Del(int pos)
{
    int i = 1;

    Elem * Del = Head;

    while(i < pos)
    {

        Del = Del->next;
        i++;
    }

    Elem * PrevDel = Del->prev;

    Elem * AfterDel = Del->next;

    if(PrevDel != 0 && Count != 1)
        PrevDel->next = AfterDel;

    if(AfterDel != 0 && Count != 1)
        AfterDel->prev = PrevDel;

    if(pos == 1)
        Head = AfterDel;
    if(pos == Count)
        Tail = PrevDel;

    delete Del;

    Count--;
}



void List::Change(int pos,QString TypeofAir, int count, QString punkt, int d, int m, int y)
{

    Elem * temp;
    if(pos <= Count / 2)
        {
            temp = Head;
            int i = 1;

            while(i < pos)
            {
                temp = temp->next;
                i++;
            }
        }
        else
        {
            temp = Tail;
            int i = 1;

            while(i <= Count - pos)
            {
                temp = temp->prev;
                i++;
            }
        }

        temp->setAll(TypeofAir, count, punkt, d, m, y);

    }

    void List::DelAll()
    {
        while(Count != 0)
            Del(1);
    }

    int List::GetCount()
    {
        return Count;
    }

    Elem *List::GetElem(int pos)
    {
        Elem *temp = Head;

        int i = 1;

        while(i < pos && temp != 0)
        {
            temp = temp->next;
            i++;
        }

        if(temp == 0)
            return 0;
        else
            return temp;
    }



    void List::sort(){

        Elem *left = Head;
        Elem *right = Head->next;

        Elem *temp = new Elem;

        while (left->next){

            while (right){

                if ((left->flightNumber) < (right->flightNumber)){

                    temp->flightNumber = left->flightNumber;

                    left->flightNumber = right->flightNumber;

                    right->flightNumber = temp->flightNumber;

                }

                right = right->next;

            }

            left = left->next;

            right = left->next;

        }
    }

//    bool Elem::checkDate()
//    {
//        QDate dt;
//        dt.setDate(y, m, d);

//        return dt.isValid();
//    }
