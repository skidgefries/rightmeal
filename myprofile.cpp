#include "myprofile.h"
#include "ui_myprofile.h"
#include "mainwindow.h"
MainWindow *mainwindowobj;
#include<QMessageBox>



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
    QString username,dob,ln;
    extern QString usernameg;
    int age=20;
    qry.prepare("SELECT username,dob FROM signup WHERE username=:username");
    qry.bindValue(":username",usernameg);
    if(qry.exec())
    {
    qry.next();
    username= qry.value(0).toString() ;
    dob= qry.value(1).toString();

    ui->username->setText(username);
    ui->age->setNum(age);
    qDebug() << qry.lastError().text()<<Qt::endl;
    }
    else
    {
        QMessageBox::information(this,"myprofile","Not executed suruko");
        qDebug() << qry.lastError().text()<<Qt::endl;
    }
    //db5.open();
    QSqlQuery qry1(db3);
    extern QString usernameg;
    QString  hfin,hf,hin,winkg,gender,bodyfat,diettype;
    //float hfin ,hf, hin;//=5.3;
    qry1.prepare("SELECT  Gender,heightft,Heighin,Weight,Bodyfat,Diettype FROM basicinfo WHERE username=:username");
    qry1.bindValue(":username",usernameg);
    if (qry1.exec())
    {
        qry1.first();


    hf= qry1.value(1).toString();
    hin= qry1.value(2).toString();
    winkg=qry1.value(3).toString();
    gender=qry1.value(0).toString();
    bodyfat=qry1.value(4).toString();
    diettype=qry1.value(5).toString();

    hfin= hf + "'" + hin;
    //hfin=hf+" /' " + hin+ " ;/"d ";
    //hfin = Qt:: cout<<hf<<"/'"<<hin<<"/"/"";
    ui->height->setText(hfin);
    ui->weight->setText(winkg);
    ui->gender->setText(gender);
    ui->bodyfat->setText(bodyfat);
    ui->diet->setText(diettype);
    }
    else
    {
        QMessageBox::information(this,"myprofile","Not executed second");
        qDebug() << qry.lastError().text()<<Qt::endl;
    }

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

