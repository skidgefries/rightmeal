#include "caloriecalculator.h"
#include "ui_caloriecalculator.h"
#include "mainwindow.h"
#include "myprofile.h"
#include "dietplan.h"
dietplan *dietplanobj15;

#include "bmi.h"
bmi *bmiobj15;

#include "workout.h"
workout *workoutobj15;

#include "bodyfat.h"
BodyFAT *bodyfatobj15;
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


void caloriecalculator::on_pushButton_clicked()
{

    float ht, wt, bmr, mc, al;
    QString gender = ui->gender->currentText();
    QString activitylevel = ui->activitylevel_input->currentText();
    float height = ui->height_input->text().toFloat();
    float weight = ui->weight_input->text().toFloat();
    float age = ui->age_input->text().toFloat();
    ht=height;
    wt=weight;

    if (activitylevel=="Sedentary")
    {
        al=1.2;
    }

    if (activitylevel=="Light")
    {
        al=1.375;
    }

    if (activitylevel=="Moderate")
    {
        al=1.465;
    }

    if (activitylevel=="Active")
    {
        al=1.55;
    }

    if (activitylevel=="Very Active")
    {
        al=1.725;
    }

    if (activitylevel=="Extra-Active")
    {
        al=1.9;
    }


    if (gender=="Male")
    {
        bmr=66.5+(13.75*weight)+(5.003*height)-(6.75*age);
        mc=bmr*al;
        ui->lineEdit->setText(QString::number(mc));
    }

    if (gender=="Female")
    {
        bmr=655.1+(9.563*weight)+(1.850*height)-(4.676*age);
        mc=bmr*al;
        ui->lineEdit->setText(QString::number(mc));
    }


}


void caloriecalculator::on_commandLinkButton_9_clicked()
{
    hide();
    dietplanobj15 = new dietplan(this);
    dietplanobj15->show();
}


void caloriecalculator::on_commandLinkButton_10_clicked()
{
    hide();
    workoutobj15 = new workout(this);
    workoutobj15->show();
}


void caloriecalculator::on_commandLinkButton_11_clicked()
{
    hide();
    bmiobj15 = new bmi(this);
    bmiobj15->show();
}


void caloriecalculator::on_commandLinkButton_12_clicked()
{
    hide();
    bodyfatobj15 = new BodyFAT(this);
    bodyfatobj15->show();
}

