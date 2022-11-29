#include "settings.h"
#include "ui_settings.h"
#include "myprofile.h"
myprofile *myprofiles;

#include "dietplan.h"
dietplan *dietplans;

#include"workout.h"
workout *workouts;

#include"bmi.h"
bmi *bmis;

#include"bodyfat.h"
BodyFAT *bodyfats;

#include"mainwindow.h"
MainWindow *mainwindows;

settings::settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}


void settings::on_commandLinkButton_6_clicked()
{
    hide ();
    myprofiles = new myprofile(this);
    myprofiles->show();
}


void settings::on_commandLinkButton_21_clicked()
{
    hide();
    dietplans = new dietplan(this);
    dietplans->show();
}


void settings::on_commandLinkButton_22_clicked()
{
    hide();
    workouts = new workout(this);
    workouts->show();
}


void settings::on_commandLinkButton_23_clicked()
{
    hide();
    bmis =  new bmi(this);
    bmis->show();
}


void settings::on_commandLinkButton_24_clicked()
{
    hide();
    bodyfats =  new BodyFAT(this);
    bodyfats->show();
}


void settings::on_commandLinkButton_26_clicked()
{
    hide();
    mainwindows = new MainWindow(this);
    mainwindows->show();
}

