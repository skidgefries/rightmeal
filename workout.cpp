#include "workout.h"
#include "ui_workout.h"

#include "mainwindow.h"
MainWindow *mainwindowobj3;

#include "myprofile.h"
myprofile *myprofileobj3;

#include "dietplan.h"
dietplan *dietplanobj3;

#include "bmi.h"
bmi *bmiobj3;

#include "bodyfat.h"
BodyFAT *bodyfatobj3;

workout::workout(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::workout)
{
    ui->setupUi(this);
}

workout::~workout()
{
    delete ui;
}


void workout::on_commandLinkButton_14_clicked()
{
    hide();
    mainwindowobj3= new MainWindow(this);
    mainwindowobj3->show();
}


void workout::on_commandLinkButton_4_clicked()
{
    hide();
    myprofileobj3=new myprofile(this);
    myprofileobj3->show();
}


void workout::on_commandLinkButton_9_clicked()
{
    hide();
    dietplanobj3=new dietplan(this);
    dietplanobj3->show();
}


void workout::on_commandLinkButton_11_clicked()
{
    hide();
    bmiobj3=new bmi(this);
    bmiobj3->show();
}


void workout::on_commandLinkButton_12_clicked()
{
    hide();
    bodyfatobj3=new BodyFAT(this);
    bodyfatobj3->show();
}

