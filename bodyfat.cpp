#include "bodyfat.h"
#include "ui_bodyfat.h"
#include<cmath>
#include "mainwindow.h"
MainWindow *mainwindowobj5;

float BF;
#include "myprofile.h"
myprofile *myprofileobj5;

#include "dietplan.h"
dietplan *dietplanobj5;

#include "workout.h"
workout *workoutobj5;

#include "bmi.h"
bmi *bmiobj5;

BodyFAT::BodyFAT(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BodyFAT)
{
    ui->setupUi(this);
    dbbfc = QSqlDatabase::addDatabase("QMYSQL");
        dbbfc.setHostName("127.0.0.1");
        dbbfc.setUserName("root");
        dbbfc.setPassword("0852");
        dbbfc.setDatabaseName("proj");
}

BodyFAT::~BodyFAT()
{
    delete ui;
}


void BodyFAT::on_commandLinkButton_26_clicked()
{
    hide();
    mainwindowobj5=new MainWindow(this);
    mainwindowobj5->show();
}


void BodyFAT::on_commandLinkButton_6_clicked()
{
    hide();
    myprofileobj5=new myprofile(this);
    myprofileobj5->show();
}


void BodyFAT::on_commandLinkButton_21_clicked()
{
    hide();
    dietplanobj5=new dietplan(this);
    dietplanobj5->show();
}


void BodyFAT::on_commandLinkButton_22_clicked()
{
    hide();
    workoutobj5=new workout(this);
    workoutobj5->show();
}


void BodyFAT::on_commandLinkButton_23_clicked()
{
    hide();
    bmiobj5=new bmi(this);
    bmiobj5->show();
}


void BodyFAT::on_pushButton_clicked()
{
    dbbfc.open();
    float w,n,height,hp;
    QString gender = ui->Gender->currentText();
    QString age= ui-> age ->text();
    float hft= ui->lineEdit->text().toFloat();
    float hin= ui->lineEdit_2->text().toFloat();
    float wt= ui->lineEdit_3->text().toFloat();
    float neck= ui->lineEdit_5->text().toFloat();
    float hip= ui->lineEdit_6->text().toFloat();
    float waist= ui->lineEdit_7->text().toFloat();
    height=(hft*12+hin)*2.54;
    w=waist;
    hp=hip;
    n=neck;

    if(gender=="Male")
    {
        BF=(495/(1.0324-0.19077*log10(w-n)+0.15456*log10(height)))-450;
        //ui->lineEdit_4->setText(QString::number(BF));

    }
    if(gender=="Female")
    {
        BF= (495/(1.29579-0.35004*log10(w+hp-n)+0.22100*log10(height)))-450;
        //ui->lineEdit_4->setText(QString::number(BF));
    }
    displaybfobj=new displaybf(this);
    displaybfobj->show();
}


void BodyFAT::on_commandLinkButton_25_clicked()
{
    hide();
    settingsobj4 = new settings(this);
    settingsobj4->show();
}

