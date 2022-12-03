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
        db3.setPassword("MySQL@2020");
        db3.setDatabaseName("proj");

    db3.open();
    QSqlQuery qry(db3);
    QString name,ln;
    extern QString usernameg;
    qry.prepare("SELECT Firstname,Midname,Lastname,dob FROM signup WHERE username=:username");
    qry.bindValue(":username",usernameg);
    qry.exec();
    qry.next();
    QString mn=qry.value(1).toString();
    if(mn=="0")
    {
        name= qry.value(0).toString()+" "+qry.value(2).toString() ;
    }
    else
    {
        name= qry.value(0).toString()+" "+qry.value(1).toString()+" "+qry.value(2).toString() ;
    }
    QDate dob= qry.value(3).toDate();
    QDate a= QDate::currentDate();
    qint64 days=dob.daysTo(a)/365;
    int day=days;

    ui->username->setText(name);
    ui->age->setNum(day);
    qDebug()<<days<<Qt::endl;
//    else
//    {
//        QMessageBox::information(this,"myprofile","Not executed suruko");
//        qDebug() << qry.lastError().text()<<Qt::endl;
//    }
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



void myprofile::on_commandLinkButton_13_clicked()
{
    hide();
    settingsobj = new settings(this);
    settingsobj->show();
}


void myprofile::on_pushButton_clicked()
{
    close();
    upbasicinfoobj1 = new updatebasicinfo(this);
    upbasicinfoobj1->show();
}

