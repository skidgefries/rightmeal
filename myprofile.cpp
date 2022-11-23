#include "myprofile.h"
#include "ui_myprofile.h"

myprofile::myprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myprofile)
{
    ui->setupUi(this);
}

myprofile::~myprofile()
{
    delete ui;
}

void myprofile::on_commandLinkButton_9_clicked()
{
    hide();
    dietplanobj=new dietplan(this);
    dietplanobj->show();
};


void myprofile::on_commandLinkButton_11_clicked()
{
    hide();
    bmiobj=new bmi(this);
    bmiobj->show();
}


void myprofile::on_commandLinkButton_10_clicked()
{
    hide();
    workoutobj = new workout(this);
    workoutobj->show();
}

