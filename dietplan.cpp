#include "dietplan.h"
#include "ui_dietplan.h"

#include "mainwindow.h"
MainWindow *mainwindowobj2;

#include "myprofile.h"
myprofile *myprofileobj2;

#include "workout.h"
workout *workoutobj2;

#include "bmi.h"
bmi *bmiobj2;

#include "bodyfat.h"
BodyFAT *bodyfatobj2;



dietplan::dietplan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietplan)
{
    ui->setupUi(this);
}

dietplan::~dietplan()
{
    delete ui;
}

void dietplan::on_pushButton_clicked()
{
    hide();
    caloriecalculatorobj=new caloriecalculator(this);
    caloriecalculatorobj->show();
}




void dietplan::on_commandLinkButton_26_clicked()
{
    hide();
    mainwindowobj2=new MainWindow(this);
    mainwindowobj2->show();

}


void dietplan::on_commandLinkButton_6_clicked()
{
    hide();
    myprofileobj2=new myprofile(this);
    myprofileobj2->show();
}


void dietplan::on_commandLinkButton_22_clicked()
{
    hide();
    workoutobj2=new workout(this);
    workoutobj2->show();
}


void dietplan::on_commandLinkButton_23_clicked()
{
    hide();
    bmiobj2=new bmi(this);
    bmiobj2->show();
}


void dietplan::on_commandLinkButton_24_clicked()
{
    hide();
    bodyfatobj2=new BodyFAT(this);
    bodyfatobj2->show();
}


void dietplan::on_commandLinkButton_25_clicked()
{
    hide();
    settingsobj1 = new settings(this);
    settingsobj1->show();
}

