#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


     LastName = "";
     FirstName = "";
     Patronymic = "";
     Town = "";
     MathMark = 1;
     RusMark = 1;
     PhysMark = 1;
     Pos = 1;
     AverageMark = 1;
     townCounter = 0;
     AverageMarkCounter = 0;
     way = "C:\\Users\\User\\Desktop\\files f 1.2\\output.txt";


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    FirstName = arg1;
}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    LastName = arg1;
}


void MainWindow::on_lineEdit_4_textEdited(const QString &arg1)
{
    Town = arg1;
}


void MainWindow::on_Math_valueChanged(int arg1)
{
    MathMark = arg1;
}


void MainWindow::on_Russian_valueChanged(int arg1)
{
    RusMark = arg1;
}


void MainWindow::on_Physics_valueChanged(int arg1)
{
    PhysMark = arg1;
}


void MainWindow::on_spinBox_pos_valueChanged(int arg1)
{
    Pos = arg1;
}


void MainWindow::rewrite()
{
    QTableWidgetItem *item = new QTableWidgetItem;

    for(int i = 1; i <= List.GetCount();i++)
    {
        Node Del = List.GetNode(i);
        QString buf;

        item = new QTableWidgetItem(Del.firstName);
        ui->tableWidget->setItem(i - 1, 1, item);

        item = new QTableWidgetItem(Del.lastName);
        ui->tableWidget->setItem(i - 1, 0, item);

        item = new QTableWidgetItem(Del.patronymic);
        ui->tableWidget->setItem(i - 1, 2, item);

        item = new QTableWidgetItem(Del.town);
        ui->tableWidget->setItem(i - 1, 3, item);

        buf.setNum(Del.mathMark);
        item = new QTableWidgetItem(buf);
        ui->tableWidget->setItem(i - 1, 4, item);

        buf.setNum(Del.rusMark);
        item = new QTableWidgetItem(buf);
        ui->tableWidget->setItem(i - 1, 5, item);

        buf.setNum(Del.physMark);
        item = new QTableWidgetItem(buf);
        ui->tableWidget->setItem(i - 1, 6, item);

    }

    for(int j = List.GetCount();j < 100;j++)

        for(int g = 0; g < 9; g++)
        {
            item = new QTableWidgetItem;
            ui->tableWidget->setItem(j,g,item);
        }

    ui->spinBox_pos->setMaximum(List.GetCount() + 1);

}

void MainWindow::on_AppointInfo_clicked()
{

    if (FirstName == ""){

        QMessageBox::information(this,"","имя пустое");

        return;

    }

    if (LastName == ""){

        QMessageBox::information(this,"","фамилия пустая");

        return;

    }

    if (Patronymic == ""){

        QMessageBox::information(this,"","отчество пустое");

        return;

    }

    if (Town == ""){

        QMessageBox::information(this,"","город пустой");

        return;

    }

     List.Insert(Pos, LastName, FirstName, Patronymic, Town , MathMark, RusMark, PhysMark);

     rewrite();

     if(List.GetCount() > 10){

         QMessageBox::information(this, "", "Достигнут лимит");

         return;
     }
}


void MainWindow::on_DeleteInfo_clicked()
{
    if(List.GetCount() == 1 || List.GetCount() == 0){

        Clear2();
        Clear3();
        Clear4();

    }

    if(Pos == List.GetCount() + 1) {

        QMessageBox::information(this,"","Удаление Несуществующей ячейки");
        return;
    }

    List.Del(Pos);
    rewrite();
}


void MainWindow::on_DeleteAll_clicked()
{

    Clear2();
    Clear3();
    Clear4();
    List.DelAll();
    rewrite();
}

void MainWindow::on_Sort_clicked()
{
    List.QSort(-1, -1);
    rewrite();

}


void MainWindow::on_AppointAverageMark_clicked()
{

    for (int i = List.GetCount(); i >= 1; i--) {
     Node Del = List.GetNode(i);

        if(AverageMark > (Del.mathMark + Del.rusMark + Del.physMark) / 3){

            List.Del(i);
            rewrite();
        }
    }


    Clear4();


      for (int i = 1; i <= List.GetCount(); i++) {

              QTableWidgetItem *item = new QTableWidgetItem;

              Node  Del = List.GetNode(i);

              if(AverageMark < (Del.mathMark + Del.rusMark + Del.physMark) / 3){

               QString buf;

               item = new QTableWidgetItem(Del.firstName);
               ui->tableWidget_4->setItem(AverageMarkCounter, 1, item);

               item = new QTableWidgetItem(Del.lastName);
               ui->tableWidget_4->setItem(AverageMarkCounter, 0, item);

               item = new QTableWidgetItem(Del.patronymic);
               ui->tableWidget_4->setItem(AverageMarkCounter, 2, item);

               item = new QTableWidgetItem(Del.town);
               ui->tableWidget_4->setItem(AverageMarkCounter, 3, item);

               buf.setNum(Del.mathMark);
               item = new QTableWidgetItem(buf);
               ui->tableWidget_4->setItem(AverageMarkCounter, 4, item);

               buf.setNum(Del.rusMark);
               item = new QTableWidgetItem(buf);
               ui->tableWidget_4->setItem(AverageMarkCounter, 5, item);

               buf.setNum(Del.physMark);
               item = new QTableWidgetItem(buf);
               ui->tableWidget_4->setItem(AverageMarkCounter, 6, item);

               AverageMarkCounter++;
          }

      }


}


void MainWindow::on_AverageMark_valueChanged(int arg1)
{
     AverageMark = arg1;
}


void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    Patronymic = arg1;
}

void MainWindow::on_AppointLastName_clicked()
{

    Clear2();

    int error = 0;
    for (int i = 1; i <= List.GetCount(); i++) {

        Node Del = List.GetNode(i);

        if(LastName == Del.lastName){

            error++;
        }

        if(error > 1){

            QMessageBox::information(this,"", "Более одной одинаковой фамилии");
            return;
        }


    }

    for (int i = 1; i <= List.GetCount(); i++) {

            QTableWidgetItem *item = new QTableWidgetItem;

            Node  Del = List.GetNode(i);

            if(LastName ==  Del.lastName){

             QString buf;

             item = new QTableWidgetItem(Del.firstName);
             ui->tableWidget_2->setItem(0, 1, item);

             item = new QTableWidgetItem(Del.lastName);
             ui->tableWidget_2->setItem(0, 0, item);

             item = new QTableWidgetItem(Del.patronymic);
             ui->tableWidget_2->setItem(0, 2, item);

             item = new QTableWidgetItem(Del.town);
             ui->tableWidget_2->setItem(0, 3, item);

             buf.setNum(Del.mathMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_2->setItem(0, 4, item);

             buf.setNum(Del.rusMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_2->setItem(0, 5, item);

             buf.setNum(Del.physMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_2->setItem(0, 6, item);

        }

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

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0, 4, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0, 5, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_2->setItem(0, 6, item);

    }


void MainWindow::on_AppointTown_clicked()
{

    Clear3();

   // for (int i = 1; i <= List.GetCount(); i++) {
      for (int i=List.GetCount();i>=1;i--)
      {
            QTableWidgetItem *item = new QTableWidgetItem;

            Node  Del = List.GetNode(i);

            if(Town ==  Del.town){

             QString buf;

             item = new QTableWidgetItem(Del.firstName);
             ui->tableWidget_3->setItem(townCounter, 1, item);

             item = new QTableWidgetItem(Del.lastName);
             ui->tableWidget_3->setItem(townCounter, 0, item);

             item = new QTableWidgetItem(Del.patronymic);
             ui->tableWidget_3->setItem(townCounter, 2, item);

             item = new QTableWidgetItem(Del.town);
             ui->tableWidget_3->setItem(townCounter, 3, item);

             buf.setNum(Del.mathMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_3->setItem(townCounter, 4, item);

             buf.setNum(Del.rusMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_3->setItem(townCounter, 5, item);

             buf.setNum(Del.physMark);
             item = new QTableWidgetItem(buf);
             ui->tableWidget_3->setItem(townCounter, 6, item);

             townCounter++;
        }

    }
}


void MainWindow::Clear3()
{
    for(int i = 1; i <= 10; i++){

        QTableWidgetItem *item = new QTableWidgetItem;

       item = new QTableWidgetItem("");

       ui->tableWidget_3->setItem(i- 1, 0, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1, 3, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1,1,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1,2,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1, 4, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1, 5, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_3->setItem(i- 1, 6, item);

       townCounter = 0;

    }
    }

void MainWindow::Clear4()
{

    for(int i = 1; i <= 10; i++){
       QTableWidgetItem *item = new QTableWidgetItem;

       item = new QTableWidgetItem("");

       ui->tableWidget_4->setItem(i - 1, 0, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 3, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 1,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 2,item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 4, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 5, item);

       item = new QTableWidgetItem("");
       ui->tableWidget_4->setItem(i - 1, 6, item);

       AverageMarkCounter = 0;

    }
}


void MainWindow::FileWrite()
{

    QFile file;

    QTextStream out (stdout);

    file.setFileName(way);

      if(file.open(QIODevice::WriteOnly)) {

          QTextStream out(&file);

           for (int i = 1; i <= List.GetCount(); i++) {

               Node Del = List.GetNode(i);

               out << "\n";
               out << Del.lastName << "\n";
               out << Del.firstName << "\n";
               out << Del.patronymic << "\n";
               out << Del.town << "\n";
               out << Del.mathMark << "\n";
               out << Del.rusMark << "\n";
               out << Del.physMark;

       }

   }

      else {

          qWarning("Could not open file");
        }

       file.close();

}



void MainWindow::on_WriteFile_clicked()
{
    FileWrite();
}


void MainWindow::on_ChooseFile_clicked()
{
    way = QFileDialog::getOpenFileName(this,"","",tr("*.txt"));

}


void MainWindow::on_ReadFile_clicked()
{
    ReadFromFile();
    rewrite();
}

void MainWindow::ReadFromFile(){

    std::string FirstName;
    std::string LastName;
    std::string Patronymic;
    std::string Town;

    int MathMark;
    int RusMark;
    int PhysMark;

    std::ifstream fin;

    fin.open(way.toStdString());
    List.DelAll();

    while(!fin.eof()){


        fin >> LastName >> FirstName >> Patronymic >> Town >> MathMark >> RusMark >> PhysMark;

          if(fin.fail()){
              QMessageBox::information(this,"","Неккоректный ввод");
            List.DelAll();
              return;
          }

          if(LastName == ""){

              QMessageBox::information(this,"","Введите Фамилию");
            List.DelAll();
              return;
          }

          if(LastName.size() > 20){

              QMessageBox::information(this,"","Длина фамилии не должна превышать 20 символов");
            List.DelAll();
              return;
          }


          if(FirstName == ""){

              QMessageBox::information(this,"","Введите Имя");
            List.DelAll();
              return;
          }

          if(FirstName.size() > 20){

              QMessageBox::information(this,"","Длина имени не должна превышать 20 символов");
            List.DelAll();
              return;
          }

          if(Town == ""){

              QMessageBox::information(this,"","Введите город");
            List.DelAll();
              return;
          }

          if(Town.size() > 20){

              QMessageBox::information(this,"","Длина имени города не должна превышать 20 символов");
            List.DelAll();
              return;
          }

          if(Patronymic == ""){

              QMessageBox::information(this,"","Введите Отчество");
            List.DelAll();
              return;
          }

          if(Patronymic.size() > 20){

              QMessageBox::information(this,"","Длина отчества не должна превышать 20 символов");
            List.DelAll();
              return;
          }


        List.AddTail(QString::fromStdString(LastName), QString::fromStdString(FirstName), QString::fromStdString(Patronymic), QString::fromStdString(Town), MathMark, RusMark, PhysMark);
    }

    fin.close();

}

