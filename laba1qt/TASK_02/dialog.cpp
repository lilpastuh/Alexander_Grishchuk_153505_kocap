#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new Canv();

    ui->graphicsView->setScene(scene);

}

Dialog::~Dialog()
{
    delete ui;
}
