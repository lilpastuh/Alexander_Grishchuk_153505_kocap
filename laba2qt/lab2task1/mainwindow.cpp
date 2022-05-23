#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"
#include "fstream"
#include <QFileDialog>
#include <QTextStream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TypeofAir = "";

    Destination = "";

    FlightNumber = 1;


     Day = 1;
     Month = 1;
     Year = 1;
     Pos = 1;
     Pos3 = 0;
     Pos4=0;
     k=0;
     way="D:\\laba2qt\\lab2task1\\FilesForTask1.1\\output.txt";

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_NumberReis_valueChanged(int arg1)
{
    FlightNumber = arg1;
}

void MainWindow::on_typePlane_textEdited(const QString &arg1)
{
    TypeofAir = arg1;

}

void MainWindow::on_distanation_textEdited(const QString &arg1)
{
    Destination = arg1;
}

void MainWindow::on_day_valueChanged(int arg1)
{
    Day = arg1;
}

void MainWindow::on_month_valueChanged(int arg1)
{
    Month = arg1;
}

void MainWindow::on_year_valueChanged(int arg1)
{
    Year = arg1;
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    Pos = arg1;
}

void MainWindow::on_add_clicked()
{

    Clear3();

    Elem temp("", 0, "", Day, Month, Year);

    if(!temp.checkDate()){
        QMessageBox::information(this,"","дата некорректна");

        return;
    }

    if (TypeofAir == ""){

        QMessageBox::information(this,"","имя пустое");

        return;

    }

    if (Destination == ""){

        QMessageBox::information(this,"","имя пустое");

        return;

    }

    if(L.GetCount() > 10){

         QMessageBox::information(this,"","Достигнут лимит");

         return;
     }


    L.Insert(Pos,TypeofAir,FlightNumber,Destination,Day,Month,Year);

    rewrite();
}

void MainWindow::on_change_clicked()
{
    Clear3();


        if(Pos == L.GetCount() + 1) {

                QMessageBox::information(this,"","Изменение несуществующей ячейки");
                return;
    }
      L.Change(Pos,TypeofAir,FlightNumber,Destination,Day,Month,Year);

      rewrite();
}

void MainWindow::on_sort_clicked()
{
    L.sort();

    rewrite();



}

void MainWindow::on_del_clicked()
{

    if(Pos == L.GetCount() + 1) {

            QMessageBox::information(this,"","Удаление Несуществующей ячейки");
            return;
}
    L.Del(Pos);

    rewrite();
}

void MainWindow::on_delAll_clicked()
{
    Clear2();
    Clear3();
    Clear4();
    L.DelAll();

    rewrite();
}

void MainWindow::rewrite()
{
    QTableWidgetItem *item = new QTableWidgetItem;

    Elem *Del = L.GetHead();

    for(int i = 0;i < L.GetCount();i++)
    {
        QString buf;

        item = new QTableWidgetItem(Del->typeofAir);
        ui->tableWidget->setItem(i, 1, item);

        item = new QTableWidgetItem(Del->getDate());

        ui->tableWidget->setItem(i, 3, item);

        buf.setNum(Del->flightNumber);
        item = new QTableWidgetItem(buf);
        ui->tableWidget->setItem(i,0,item);

        item = new QTableWidgetItem(Del->destination);
        ui->tableWidget->setItem(i, 2, item);

        Del = Del->next;
    }

    for(int j = L.GetCount();j < 100;j++)

        for(int g = 0;g < 9;g++)
        {
            item = new QTableWidgetItem;
            ui->tableWidget->setItem(j,g,item);
        }

    ui->spinBox_4->setMaximum(L.GetCount()+1);
   }


void MainWindow::rewrite4()
{
    QTableWidgetItem *item = new QTableWidgetItem;

    Elem *Del = L.GetHead();

    for(int i = 0;i < L.GetCount();i++)
    {
        QString buf;

        item = new QTableWidgetItem(Del->typeofAir);
        ui->tableWidget_4->setItem(i, 1, item);

        item = new QTableWidgetItem(Del->getDate());

        ui->tableWidget_4->setItem(i, 3, item);

        buf.setNum(Del->flightNumber);
        item = new QTableWidgetItem(buf);
        ui->tableWidget_4->setItem(i,0,item);

        item = new QTableWidgetItem(Del->destination);
        ui->tableWidget_4->setItem(i, 2, item);

        Del = Del->next;
    }

    for(int j = L.GetCount();j < 100;j++)

        for(int g = 0;g < 9;g++)
        {
            item = new QTableWidgetItem;
            ui->tableWidget_4->setItem(j,g,item);
        }


}


    void MainWindow::FileWrite()
    {

        QFile file;

        QTextStream out (stdout);

        file.setFileName(way);

          if(file.open(QIODevice::WriteOnly)) {

              QTextStream out(&file);

              Elem *Del = L.GetHead();

                   for (int i = 0; i < L.GetCount(); i++) {

                   out << "\n";

                   out << Del->flightNumber << "\n";
                   out << Del->typeofAir << "\n";
                   out << Del->destination << "\n";
                   out << Del->getDate();


                   Del = Del->next;
               }

          }

          else {

              qWarning("Could not open file");
            }

           file.close();

    }






void MainWindow::on_pushButton_clicked()
{

    Clear2();

    Elem * Del = L.GetHead();

        int error = 0;
        for (int i = 0; i < L.GetCount(); i++) {

            if(FlightNumber ==  Del->flightNumber){

                error++;
            }

            if(error > 1){

                QMessageBox::information(this,"","В списке замечено более одного имени");
                return;
            }
            Del = Del->next;

            }


            Del = L.GetHead();

            for (int i = 0; i < L.GetCount(); i++) {

        if(FlightNumber==Del->flightNumber)
        {
            QString buf;

            QTableWidgetItem *item = new QTableWidgetItem;

            item = new QTableWidgetItem(Del->typeofAir);
            ui->tableWidget_2->setItem(0, 1, item);

            item = new QTableWidgetItem(Del->getDate());
            ui->tableWidget_2->setItem(0, 3, item);

            buf.setNum(Del->flightNumber);
            item = new QTableWidgetItem(buf);
            ui->tableWidget_2->setItem(0,0,item);

            item = new QTableWidgetItem(Del->destination);
            ui->tableWidget_2->setItem(0, 2, item);

        }
        Del = Del->next;

}

}
void MainWindow::Clear2()
{


       QTableWidgetItem *item = new QTableWidgetItem;

       item = new QTableWidgetItem("");

       ui->tableWidget_2->setItem(0, 0, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0, 3, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0,1,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0,2,item);




    }


void MainWindow::on_pushButton_2_clicked()
{

    Clear3();

  Elem * Del = L.GetHead();


            Del = L.GetHead();

            for (int i = 0; i < L.GetCount(); i++) {

        if(Destination==Del->destination)
        {

            QString buf;

            QTableWidgetItem *item = new QTableWidgetItem;

            item = new QTableWidgetItem(Del->typeofAir);
            ui->tableWidget_3->setItem(Pos3, 1, item);

            item = new QTableWidgetItem(Del->getDate());
            ui->tableWidget_3->setItem(Pos3, 3, item);

            buf.setNum(Del->flightNumber);
            item = new QTableWidgetItem(buf);
            ui->tableWidget_3->setItem(Pos3,0,item);

            item = new QTableWidgetItem(Del->destination);
            ui->tableWidget_3->setItem(Pos3, 2, item);

            Pos3++;


        }
        Del = Del->next;

}


}
void MainWindow::Clear3()
{
     for(int i =0;i<9;i++)
{
       QTableWidgetItem *item = new QTableWidgetItem;

       item = new QTableWidgetItem("");

       ui->tableWidget_3->setItem(i, 0, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i, 3, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i,1,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i,2,item);
}

     Pos3=0;



    }


void MainWindow::on_pushButton_3_clicked()
{
    Clear4();

  Elem * Del = L.GetHead();


            Del = L.GetHead();

            for (int i = 0; i < L.GetCount(); i++) {

        if(Day==Del->day && Month==Del->month && Year==Del->year)
        {

            QString buf;

            QTableWidgetItem *item = new QTableWidgetItem;

            item = new QTableWidgetItem(Del->typeofAir);
            ui->tableWidget_4->setItem(Pos4, 1, item);

            item = new QTableWidgetItem(Del->getDate());
            ui->tableWidget_4->setItem(Pos4, 3, item);

            buf.setNum(Del->flightNumber);
            item = new QTableWidgetItem(buf);
            ui->tableWidget_4->setItem(Pos4,0,item);

            item = new QTableWidgetItem(Del->destination);
            ui->tableWidget_4->setItem(Pos4, 2, item);

            Pos4++;


        }
        Del = Del->next;
            }
}

    void MainWindow::Clear4()
    {
             for(int i =0;i<9;i++)
        {
               QTableWidgetItem *item = new QTableWidgetItem;

               item = new QTableWidgetItem("");
               ui->tableWidget_4->setItem(i, 0, item);

               item = new QTableWidgetItem("");
               ui->tableWidget_4->setItem(i, 3, item);

               item = new QTableWidgetItem("");
               ui->tableWidget_4->setItem(i,1,item);

               item = new QTableWidgetItem("");
               ui->tableWidget_4->setItem(i,2,item);
        }

       Pos4=0;



    }



    void MainWindow::on_pushButton_4_clicked()
    {
         k=0;
        for (int i = L.GetCount(); i >= 1 ; i--)
        {
               Elem * Del1 = L.GetElem(i);


               if(Destination==Del1->destination)
               {
                  k++;
               }


               Del1 = Del1->next;
        }
        if(k==0)
        {
            QMessageBox::information(this,"","Вfffffffff");
            return;
        }




        Clear3();




               for (int i = L.GetCount(); i >= 1 ; i--)
               {
                      Elem * Del1 = L.GetElem(i);


                      if(Destination==Del1->destination)
                      {

                         L.Del(i);

                      }


                      Del1 = Del1->next;
               }

               rewrite();



    }

















    void MainWindow::on_FileWrite_clicked()
    {
        FileWrite();
    }

    void MainWindow::ReadFromFile(){

        std::string TypeofAir;
        std::string Date;
        std::string Destination;
        int FlightNumber;


        std::ifstream fin;

        fin.open(way.toStdString());

        L.DelAll();

        while(!fin.eof()){


            fin >> FlightNumber >> TypeofAir >> Destination >> Date;

              if(fin.fail()){
                  QMessageBox::information(this,"","Неккоректный ввод");
                L.DelAll();
                  return;
              }

              if(TypeofAir == ""){

                  QMessageBox::information(this,"","Введите тип самолёта");
                L.DelAll();
                  return;
              }

              if(TypeofAir.size() > 20){

                  QMessageBox::information(this,"","Длина типа самолёта не должна превышать 20 символов");
                L.DelAll();
                  return;
              }

              if (!checkDate(Date)){

                  QMessageBox::information(this,"","Неккоректный ввод даты");
                L.DelAll();
                  return;
              }

            int D = (int)(Date[0] - 48)*10 + (int)Date[1] - 48;
            int M = (int)(Date[3] - 48)*10 + (int)Date[4] - 48;
            int Y = (int)(Date[6] - 48)*1000 + (int)(Date[7] - 48)*100 + (int)(Date[8] - 48)*10 + (int)(Date[9] - 48);

            L.AddTail(QString::fromStdString(TypeofAir),FlightNumber, QString::fromStdString(Destination), D, M, Y);
        }

        fin.close();


    }

    void MainWindow::on_ReadFromFile_clicked()
    {
        ReadFromFile();
        rewrite();
    }


    void MainWindow::on_ChooseFile_clicked()
    {
        way = QFileDialog::getOpenFileName(this,"","",tr("*.txt"));
    }


    bool MainWindow::CheckInt(QByteArray ba)
    {
        for(int i = 0; i <ba.size();i++)
        {
            if(ba.at(i) >= '0' && ba.at(i) <= '9')
            {
                return true;
            }
        }
        return false;
    }


    bool MainWindow::checkDate(std::string str){

         int year= 0,month= 0,day = 0;

        QByteArray ba(11, '*');
        QByteArray anotherba(11,'*');

        ba = ba.fromStdString(str);

        if(ba.size()!=10)
        {
            return false ;
        }

        int numb = 0;
        for(int i = 0; i< 10; i++)
        {
            if(ba.at(i) == '.')numb++;
        }
        if (numb != 2)
        {
            return false;
        }

        anotherba = ba.left(2);

        if (checkinp(anotherba))
        {
            return false;
        }
        day = anotherba.toInt();

        anotherba =ba.mid(3,2);

        if (checkinp(anotherba))
        {
            return false;
        }
        month = anotherba.toInt();

        anotherba =ba.right(4);

        if (checkinp(anotherba))
        {
            return false;
        }
        year = anotherba.toInt();

        QDate date;

        date.setDate(year,month,day);

        if(!date.isValid())
        {
            return false;
        }

        return true;
    }

    bool MainWindow::checkinp(QByteArray ba)
    {
        for(int i = 0; i<ba.size();i++)
        {
            if((ba.at(i) >= 'a' && ba.at(i) <= 'z') || (ba.at(i) >= 'A' && ba.at(i) <= 'Z'))
            {
                return true;
            }
        }
        return false;
    }








