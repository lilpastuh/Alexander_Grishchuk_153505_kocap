#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <string>

#include <QLineEdit>
#include <QMessageBox>
#include "database.h"
#include <iostream>
#include <fstream>
#include <QTextStream>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(98,5,this);
    ui->tableView->setModel(model);

    model->setHeaderData(0,Qt::Horizontal,"Author");
    model->setHeaderData(1,Qt::Horizontal,"Year of publication");
    model->setHeaderData(2,Qt::Horizontal,"Book name");
    model->setHeaderData(3,Qt::Horizontal,"Publishing house");
    model->setHeaderData(4,Qt::Horizontal,"Number of pages");

    size = 0;
    size_sort = 0;
    List = new Database[0];
    List_sort = new Database[0];


    bufyear = 1;
    bufnum = 1;
    bufauthor = "";
    bufpublisher_house="";
    buf_book="";
    sh = true;
    kw = true;
    nb = true;

    first_file_click = true;

    Author = "";
    Publisher_house = "";
    Name_of_book = "";
    Year = 1;
    Num_of_pages = 1;
    del = 1;
    upd = 1;

    publisherhouse = "";
    bookname = "";
    keyword = " ";

    Way = "C:\\labs on QT\\Labs1\\build-task4-Desktop_Qt_5_9_9_MSVC2015_32bit-Debug\\textin.txt";
    way = "textin.txt";


    //Database();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isRus(QString str1, QString str2, QString str3)
{
    for (int i =0; i < str1.size();i++)
    {
         if (str1[i].script() == 5)
             return false;
         if (str2[i].script() == 5)
             return false;
         if (str3[i].script() == 5)
             return false;
         return true;
    }
}

void MainWindow :: add()
{

    if(isRus(bufauthor,bufpublisher_house,buf_book))
    {
        Database* newList = new Database[size + 1];

        for (int i = 0; i < size; i++)
            newList[i] = List[i];

        delete[]List;

        List = newList;
        List[size].set_database(bufauthor,bufpublisher_house,buf_book,bufnum,bufyear);

        size++;

        N = size - 1;
     }
     else
          QMessageBox::critical(this, "Error!!!", "Please enter the name in English Language");
}

void MainWindow :: delet()
{
    Database* newList = new Database[size - 1];

    for (int k = 0, j = 0; k < size; k++, j++)
    {
        if (k == del - 1 && del == size)
            continue;
        if (k == del - 1) k++;

        newList[j] = List[k];
    }

    size--;

    delete[]List;

    List = newList;
    N = del - 1;
}

void MainWindow :: edit ()
{
    if(isRus(bufauthor,bufpublisher_house,buf_book))
    {
         List[upd - 1].set_database(bufauthor,bufpublisher_house,buf_book,bufnum,bufyear);
         N = upd - 1;
    }
    else
        QMessageBox::critical(this,"Error!!!", "Please enter the name in English Language");
}

void MainWindow :: rewrite()
{
    for(int u = 0; u < size; u++)
    {
        index = model->index(u,0);
        model->setData(index,List[u].get_author());

        index = model->index(u,1);
        model->setData(index,List[u].get_num());

        index = model->index(u,2);
        model->setData(index,List[u].get_boook());

        index = model->index(u,3);
        model->setData(index,List[u].get_publis_house());

        index = model->index(u,4);
        model->setData(index,List[u].get_year());
    }

    for(int t = size;t < 98;t++)
    {
        for(int l = 0;l < 5;l++)
        {
            index = model->index(t,l);
            model->setData(index,"");
        }
    }
}

void MainWindow::rewrite_sort()
{
    for(int t = 0;t < 98;t++)
    {
        for(int l = 0;l < 5;l++)
        {
            index = model->index(t,l);
            model->setData(index,"");
        }
    }

    for(int u = 0; u < size_sort; u++)
    {
        index = model->index(u,0);
        model->setData(index,List_sort[u].get_author());

        index = model->index(u,1);
        model->setData(index,List_sort[u].get_year());

        index = model->index(u,2);
        model->setData(index,List_sort[u].get_boook());

        index = model->index(u,3);
        model->setData(index,List_sort[u].get_publis_house());

        index = model->index(u,4);
        model->setData(index,List_sort[u].get_num());
    }

    for(int t = size_sort;t < 98;t++)
    {
        for(int l = 0;l < 5;l++)
        {
            index = model->index(t,l);
            model->setData(index,"");
        }
    }
}

void MainWindow :: findbook()
{
    size_sort = 0;
    delete [] List_sort;
    List_sort = new Database[0];

    for (int i = 0; i < size; i++)
    {
        if (bookname == List[i].get_boook() || bookname == List[i].get_author())
        {
            Database* newList = new Database[size_sort + 1];

            for (int i = 0; i < size_sort; i++)
                newList[i] = List_sort[i];

            delete[]List_sort;

            List_sort = newList;
            List_sort[size_sort].set_database(List[i].get_author(),List[i].get_publis_house(),List[i].get_boook(),List[i].get_num(),List[i].get_year());

            size_sort++;
        }
    }

    if (size_sort == 0)
    {
         QMessageBox::critical(this,"Sorry", "This book is not exists in this table");
    }

    nb = false;


}

void MainWindow :: showbypub() //+
{
    size_sort = 0;
    delete [] List_sort;
    List_sort = new Database[0];

    for (int i = 0; i < size; i++)
    {
        if (publisherhouse == List[i].get_publis_house())
        {
            Database* newList = new Database[size_sort + 1];

            for (int i = 0; i < size_sort; i++)
                newList[i] = List_sort[i];

            delete[]List_sort;

            List_sort = newList;
            List_sort[size_sort].set_database(List[i].get_author(),List[i].get_publis_house(),List[i].get_boook(),List[i].get_num(),List[i].get_year());

            size_sort++;
        }
    }

    if (size_sort == 0)
    {
         QMessageBox::critical(this,"Sorry", "This publisher house is not exists");
    }

    sh = false;

}

void MainWindow::sortbyyears()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
          if (List[j].get_num() < List[j + 1].get_num())
          {
               Database b = List[j];
               List[j] = List [j+1];
               List [j+1] = b;
          }
        }
      }

    kw = false;
}

bool MainWindow::findkey(QString bn0)
{
    //в цикле пробегаемся по строке и ищем кол-во пробелов *(счётчиком), далее создаем массив массив qstring
    //размер которого зависит от коло-ва пробелов, массив - массив слов в строке, потом еще раз пробегаемся по массиву и
    //ищем индексы пробеллов чтобы поле выделить само слово
    //и потом это слово сравниваем массив наших слов с ключевым словом
    // если длина слова не равна длине ключевого слова то мы его не добавляем в массив
    //для вывода на экран
    //функция в которую мы передаем одну строку, если true - выведем

    bn0+=' ';
    int col = 0;
    int beginstr = 0; // для того чтобы знать откуда брать слово
    int endstr = 0; // до куда брать слово
    int j = 0;

    for (int i = 0; i < bn0.length()-1; i++)
        if (bn0[i].isLetter() && bn0[i+1].isSpace()) // isletter - проверяет является ли символ буквой, isSpace - проверка на пробел
            col++;


    QString *mass = new QString[col];



    for (int i = 0; i < bn0.length()-1; i++)
    {
        if (bn0[i].isSpace() && bn0[i+1].isLetter())
        {
            beginstr = i+1;
            if (beginstr < endstr && (endstr - beginstr+1 == keyword.length()))
            {
                mass[j] = bn0.mid(beginstr,endstr - beginstr + 1);
                j++;

            }
        }
        if (bn0[i].isLetter() && bn0[i+1].isSpace())
        {
            endstr = i;
            if (beginstr < endstr && (endstr - beginstr+1 == keyword.length()))
            {
                mass[j] = bn0.mid(beginstr,endstr - beginstr + 1);
                j++;

            }
        }
    }

    for (int i = 0; i < j; i++)
    {
         if (mass[i] == keyword)
         {
             delete[] mass;
             return true;
         }
    }

    delete[] mass;
    return false;
}

bool MainWindow::IsDigit(char s)
{
    if(s - 48 >=0 && s - 48 < 10)
        return true;
    else
        return false;
}

void MainWindow :: find_by_keyword()
{
    size_sort = 0;
    delete [] List_sort;
    List_sort = new Database[0];

    for (int i = 0; i < size; i++)
    {
        if(findkey(List[i].get_boook()))
        {
            Database* newList = new Database[size_sort + 1];

            for (int i = 0; i < size_sort; i++)
                newList[i] = List_sort[i];

            delete[]List_sort;

            List_sort = newList;
            List_sort[size_sort].set_database(List[i].get_author(),List[i].get_publis_house(),List[i].get_boook(),List[i].get_num(),List[i].get_year());

            size_sort++;
        }
    }

    if (size_sort == 0)
    {
         QMessageBox::critical(this,"Sorry", "This keyword is not located in this table");
    }

    kw = false;

}

void MainWindow::on_pushButton_keyword_clicked()
{
    if (kw)
        find_by_keyword();
    rewrite_sort();
}

void MainWindow::on_pushButton_addbook_clicked()
{
    add();
    rewrite();
}

void MainWindow::on_pushButton_delete_clicked()
{
    if(size >= del)
    delet();

    rewrite();
}

void MainWindow::on_pushButton_edit_clicked()
{
    if(size >= upd)
    edit();

    rewrite();
}

void MainWindow::on_pushButton_samepublis_clicked()
{
    if (sh)
        showbypub();
    rewrite_sort();
}

void MainWindow::on_pushButton_findbynsme_clicked()
{
    if (nb)
       findbook();
    rewrite_sort();
}

void MainWindow::on_lineEdit_name_textEdited(const QString &arg1)
{
    bufauthor = arg1;
}

void MainWindow::on_spinBox_year_valueChanged(int arg1)
{
    bufyear = arg1;
}

void MainWindow::on_lineEdit_book_textEdited(const QString &arg1)
{
    buf_book = arg1;
}

void MainWindow::on_lineEdit_housepubl_textEdited(const QString &arg1)
{
    bufpublisher_house = arg1;
}

void MainWindow::on_spinBox_num_valueChanged(int arg1)
{
    bufnum = arg1;
}

void MainWindow::on_spinBox_delete_valueChanged(int arg1)
{
    del = arg1;
}

void MainWindow::on_spinBox_edit_valueChanged(int arg1)
{
    upd = arg1;
}

void MainWindow::on_pushButton_showall_clicked()
{
    rewrite();
}

void MainWindow::on_lineEdit_samepub_textEdited(const QString &arg1)
{
     publisherhouse = arg1;
     sh = true;
}

void MainWindow::on_lineEdit_findbyname_textEdited(const QString &arg1)
{
    bookname = arg1;
    nb = true;
}

void MainWindow::on_lineEdit_keywordsearch_textEdited(const QString &arg1)
{
    keyword = arg1;
    kw = true;
}

void MainWindow::on_pushButton_sortbyyear_clicked()
{
    if (kw)
    sortbyyears();
    rewrite();
}

void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::file_way_change()
{
    Way = QFileDialog::getOpenFileName(this,"","",tr("*.txt"));

    if(Way.length() == 0)
        return;

    std::ifstream fin;
    fin.open(Way.toStdString());

    if (!fin.is_open())
        QMessageBox::critical(this, "ERROR", "File is not opening");

    else if(way != Way.toStdString())
    {
        way = Way.toStdString();

         first_file_click = true;
    }
    else
    {
        first_file_click  = false;
    }

    fin.close();
}

void MainWindow::file_add()
{
    std::ifstream fin(way);

    if(!fin.is_open())
    {
        QMessageBox::critical(this,"ERROR!!!","File opening error");
        return;
    }

    while(!fin.eof())//пока в файле есть информация котоую можно прочесть, считывает все по одному слово
    {
        char* auth = new char[100];

        auth[0] = '\0';
        fin >> auth;

        int l = strlen(auth);

        if(l == 0)
        {
            delete[] auth;
            break;
        }


        char* yea = new char [100];

        fin>>yea;

        int ye = ((yea[0] - 48) * 1000 + (yea[1] - 48) * 100 + (yea[2] - 48) * 10 + (yea[3] - 48));


        char* nambook = new char[100];

        fin >> nambook;



        char* pubhous = new char[100];
        fin >> pubhous;



        char* npag = new char [100];
        fin>>npag;

        int S = strlen(npag);

        int np = 0;

        for (int i = 0, j = S-1; i < S; i++, j--)
        {
            np += ((npag[i] - 48) * pow(10,j));
        }


        Database* newList = new Database[size + 1];

        for (int i = 0; i < size; i++)
            newList[i] = List[i];

        delete[]List;

        List = newList;

        List[size].set_database(auth,pubhous,nambook,np,ye);

        size++;

        N = size - 1;


        delete[] auth;
        delete[] yea;
        delete[] nambook;
        delete[] pubhous;
        delete[] npag;
    }

    fin.close();
}


void MainWindow::on_pushButton_addinffromfile_clicked()
{

    file_way_change();
    bool f = file_check();

    if(f &&  first_file_click)
    {
        //file_way_change();
        file_add();
        rewrite();

        //file_rewrite();
    }
    else if (f)
    {
        QMessageBox::information(this,"ERROR","File opening error");
    }
}

bool MainWindow::file_check() // проверяет содержимое нашего файла
{
    std::ifstream fin(way);

    if(!fin.is_open())
    {
        QMessageBox::critical(this,"ERROR!!!","File opening error");
        return false;
    }

    for (int i = 0; !fin.eof(); i++)
    {
        char* auth = new char[100];

        fin >> auth;

        int l = strlen(auth);

        if(l == 0)
        {
            if(i == 0) // для того чтобы больше одного раза при нажатии не добавлялась инфа из файла
                QMessageBox::critical(this,"ERROR!!!","This file is empty");
            delete[] auth;
            break;
        }

        //first_file_click = false;

        if (!isRus(auth))
        {
            QMessageBox::critical(this,"ERROR!!!", "This file contains RUSSIAN letters");
            delete[] auth;
            fin.close();
            return false;
        }

        delete[] auth;

        char* yea = new char [100];

        yea[0] = '\0';

        fin>>yea;

        int L = strlen(yea);

        if(L == 0 || L > 4)
        {
            delete[] yea;
            QMessageBox::critical(this,"ERROR!!!", "You enter incorrect year or the file is damaged");
            return false;
        }


        for(int i = 0;i < L;i++) // здесь проверяем ялвяются ли все остальные символы цифрами
        {

            if(!IsDigit(yea[i]))
            {
                QMessageBox::critical(this,"ERROR!!!", "You enter incorrect year or the file is damaged");
                delete[] yea;
                fin.close();
                return false;
            }
        }

//        int ye = ((yea[0]) * 1000 + (yea[1] - 48) * 100 + (yea[2] - 48) * 10 + (yea[3] - 48));
        delete[] yea;


        char* nambook = new char[100];

        nambook[0] = '\0';

        fin >> nambook;

        int K = strlen(nambook);

        if(K == 0)
        {
            QMessageBox::critical(this,"ERROR!!!", "This file contains RUSSIAN letters");
            delete[] nambook;
            return false;
        }

        if (!isRus(nambook))
        {
            QMessageBox::critical(this,"ERROR!!!", "This file contains RUSSIAN letters");
            delete[] nambook;
            fin.close();
            return false;
        }

        delete[] nambook;

        char* pubhous = new char[100];

        pubhous[0] = '\0';

        fin >> pubhous;

        int M = strlen(pubhous);

        if(M == 0)
        {
            QMessageBox::critical(this,"ERROR!!!", "This file contains RUSSIAN letters");
            delete[] pubhous;
            return false;
        }

        if (!isRus(pubhous))
        {
            QMessageBox::critical(this,"ERROR!!!", "This file contains RUSSIAN letters");
            delete[] pubhous;
            fin.close();
            return false;
        }

        delete[] pubhous;

        char* npag = new char [100];

        npag[0] = '\0';

        fin>>npag;

        int S = strlen(npag);

        if(S == 0)
        {
            delete[] npag;
            return false;
        }


        for(int i = 0; i < S; i++) // здесь проверяем ялвяются ли все остальные символы цифрами
        {
            if(!IsDigit(npag[i]))
            {
                delete[] npag;
                fin.close();
                return false;
            }
        }

        delete[] npag;

   }

    fin.close();
        return true;
}

