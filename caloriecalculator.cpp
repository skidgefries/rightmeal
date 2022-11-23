#include "caloriecalculator.h"
#include "ui_caloriecalculator.h"
#include "mainwindow.h"
#include "myprofile.h"
myprofile *myprofileobj;
MainWindow *mainwindowobj1;

caloriecalculator::caloriecalculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caloriecalculator)
{
    ui->setupUi(this);
}

caloriecalculator::~caloriecalculator()
{
    delete ui;
}




void caloriecalculator::on_commandLinkButton_4_clicked()
{
    hide();
    myprofileobj=new myprofile(this);
    myprofileobj->show();
}


void caloriecalculator::on_commandLinkButton_14_clicked()
{
    hide();
    mainwindowobj1=new MainWindow(this);
    mainwindowobj1->show();
}

