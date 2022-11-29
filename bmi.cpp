#include "bmi.h"
#include "ui_bmi.h"
#include <cmath>
#include "mainwindow.h"
float bmi1;
MainWindow *mainwindowobj4;

#include "myprofile.h"
myprofile *myprofileobj4;

#include "dietplan.h"
dietplan *dietplanobj4;

#include "workout.h"
workout *workoutobj4;

#include "bodyfat.h"
BodyFAT *bodyfatobj4;



bmi::bmi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bmi)
{
    ui->setupUi(this);
}

bmi::~bmi()
{
    delete ui;
}

void bmi::on_commandLinkButton_26_clicked()
{
    hide();
    mainwindowobj4=new MainWindow(this);
    mainwindowobj4->show();
}


void bmi::on_commandLinkButton_6_clicked()
{
    hide();
    myprofileobj4=new myprofile(this);
    myprofileobj4->show();
}


void bmi::on_commandLinkButton_21_clicked()
{
    hide();
    dietplanobj4=new dietplan(this);
    dietplanobj4->show();
}


void bmi::on_commandLinkButton_22_clicked()
{
    hide();
    workoutobj4=new workout(this);
    workoutobj4->show();
}


void bmi::on_commandLinkButton_24_clicked()
{
    hide();
    bodyfatobj4=new BodyFAT(this);
    bodyfatobj4->show();
}


void bmi::on_pushButton_clicked()
{
    float height;
    QString gender = ui->comboBox->currentText();
    QString age = ui->lineEdit_4->text();
    float hft= ui->lineEdit->text().toFloat();
    float hin= ui->lineEdit_2->text().toFloat();
    float wt=ui->lineEdit_3->text().toFloat();
    height=((hft*12+hin)*2.54)/100;
    bmi1=wt/(height*height);
    displaybmiobj=new displaybmi(this);
    displaybmiobj->show();
}




void bmi::on_commandLinkButton_25_clicked()
{
    hide();
    settingsobj3 = new settings(this);
    settingsobj3->show();
}

