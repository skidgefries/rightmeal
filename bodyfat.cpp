#include "bodyfat.h"
#include "ui_bodyfat.h"

#include "mainwindow.h"
MainWindow *mainwindowobj5;

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
    QString gender = ui->Gender->currentText();
    QString age= ui-> age ->text();
    QString hft=ui->lineEdit->text();
    QString hin=ui->lineEdit_2->text();
    QString wt=ui->lineEdit_3->text();
    QString nm=ui->lineEdit_5->text();
    QString hm=ui->lineEdit_6->text();
    QString wm=ui->lineEdit_7->text();

}

