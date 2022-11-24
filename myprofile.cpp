#include "myprofile.h"
#include "ui_myprofile.h"
#include "mainwindow.h"
MainWindow *mainwindowobj;



myprofile::myprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myprofile)
{
    ui->setupUi(this);
    db3 = QSqlDatabase::addDatabase("QMYSQL");
        db3.setHostName("127.0.0.1");
        db3.setUserName("root");
        db3.setPassword("0852");
        db3.setDatabaseName("proj");
    db3.open();
    QSqlQuery qry(db3);
    extern QString usernameg;
    extern QString usernames;
    QString username,dob,hfin, winkg,gender,bodyfat,diettype;
    int age=20;
    qry.prepare("SELECT username,Firstname,Midname,Lastname,email,dob, FROM signup WHERE username=:username");
    qry.prepare("SELECT heightft,Heighin,Weight,Bodyfat,Activitylevel,Diettype FROM basicinfo WHERE username=:username");
    qry.bindValue(":username",usernameg);
    qry.exec();
    qry.first();
    username= qry.value(1).toString() ;
    dob= qry.value(2).toString();
    hfin= qry.value(3).toString();
    winkg=qry.value(0).toString();
    gender=qry.value(4).toString();
    bodyfat=qry.value(5).toString();
    diettype=qry.value(6).toString();

    hfin=
    ui->username->setText(username);
    ui->age->setNum(age);
    ui->height->setText(hfin);
    ui->weight->setText(winkg);
    ui->gender->setText(gender);
    ui->bodyfat->setText(bodyfat);
    ui->diet->setText(diettype);

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


void myprofile::on_commandLinkButton_14_clicked()
{
    hide();
    mainwindowobj= new MainWindow(this);
    mainwindowobj->show();
}


void myprofile::on_commandLinkButton_12_clicked()
{
    hide();
    bodyfatobj=new BodyFAT(this);
    bodyfatobj->show();
}

