#include "updatebasicinfo.h"
#include "ui_updatebasicinfo.h"
#include "myprofile.h"
myprofile *myobj;


updatebasicinfo::updatebasicinfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::updatebasicinfo)
{
    ui->setupUi(this);
    db69 = QSqlDatabase::addDatabase("QMYSQL");
        db69.setHostName("127.0.0.1");
        db69.setUserName("root");
        db69.setPassword("MySQL@2020");
        db69.setDatabaseName("proj");

}

updatebasicinfo::~updatebasicinfo()
{
    delete ui;
}
void updatebasicinfo::on_pushButton_5_clicked()
{
    if(db69.open())
    {
      extern QString usernameg;
      QString fname = ui->lineEdit->text();
      QString mname = ui->lineEdit_2->text();
      QString lname = ui->lineEdit_3->text();
      QString dob = ui->dateEdit->text();
      QString gender = ui->comboBox_9->currentText();
      QString heightft= ui-> lineEdit_7 ->text();
      QString heightin=ui->lineEdit_8->text();
      QString weight=ui->lineEdit_9->text();
      QString bodyfat=ui->comboBox_10->currentText();
      QString dietype=ui->comboBox_12->currentText();
      QSqlQuery qry;
        qry.prepare("UPDATE signup SET Firstname=:Fname, Midname=:Mname, Lastname=:Lname,dob=:DOB WHERE username=:username");
        qry.bindValue(":username", usernameg);
        qry.bindValue(":Fname",fname);
        qry.bindValue(":Mname",mname);
        qry.bindValue(":Lname",lname);
        qry.bindValue(":DOB",dob);
        qry.exec();
        qDebug() << qry.lastError().text()<<Qt::endl;
//        qry.next();
      QSqlQuery qry1;
         qry1.prepare("UPDATE basicinfo SET Gender=:gender,heightft=:heightft,Heighin=:heightin,Weight=:weight,Bodyfat=:bodyfat,Diettype=:diettype WHERE username=:username");
         qry1.bindValue(":username", usernameg);
         qry1.bindValue(":gender", gender);
         qry1.bindValue(":heightft", heightft);
         qry1.bindValue(":heightin", heightin);
         qry1.bindValue(":weight", weight);
         qry1.bindValue(":bodyfat", bodyfat);
         qry1.bindValue(":diettype", dietype);
        if(qry1.exec())
        {
            QMessageBox::information(this,"Edit Profile","Profile updated successfully.");
        }
        else
        {
            QMessageBox::warning(this,"Edit Profile","Please fill all the information and try again.");
            qry1.exec();
            QSqlDatabase::removeDatabase("QMYSQL");
        }
    }
    db69.close();
    close();
    myobj = new myprofile(this);
    myobj->show();
}
