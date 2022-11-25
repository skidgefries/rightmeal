#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
MainWindow *mainwindowobj7;

#include <QMessageBox>

QString usernames;

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    dbsignup = QSqlDatabase::addDatabase("QMYSQL");
        dbsignup.setHostName("127.0.0.1");
        dbsignup.setUserName("root");
        dbsignup.setPassword("0852");
        dbsignup.setDatabaseName("proj");
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_clicked()
{
     if(dbsignup.open())
     {
       QString firstname = ui->lineEdit->text();
       QString midname= ui-> lineEdit_17 ->text();
       QString lastname=ui->lineEdit_18->text();
       QString email=ui->lineEdit_2->text();
       QString username=ui->lineEdit_3->text();
       QString password=ui->lineEdit_4->text();
       QString conpass=ui->lineEdit_5->text();
       QString dob=ui->dateEdit->text();
       //QCheckBox tandp=ui->checkBox->setCheckState()
       if(password!=conpass)
       {
           QMessageBox::warning(this,"Error","Password doesn't match. Please try again.");
       }
       else
        {
            QSqlQuery qry;
          qry.prepare("INSERT INTO signup (Firstname, Midname, Lastname, email, username, password, dob)""VALUES(:Firstname, :Midname, :Lastname, :email, :username, :password, :dob)");
          qry.bindValue(":Firstname", firstname);
          qry.bindValue(":Midname", midname);
          qry.bindValue(":Lastname", lastname);
          qry.bindValue(":email", email);
          qry.bindValue(":username", username);
          qry.bindValue(":password", password);
          qry.bindValue(":dob", dob);

          if(qry.exec())
          {

               QMessageBox::information(this,"Sign Up","Signed up successfully.");
               usernames=username;
               QSqlDatabase::removeDatabase("QMYSQL");
                hide();
                 basicinfoobj=new basicinfo(this);
                 basicinfoobj -> show();
          }
          else
          {
              QMessageBox::warning(this,"Sign Up","Signed up failed.");
              qDebug() << qry.lastError().text()<<Qt::endl;
              QSqlDatabase::removeDatabase("QMYSQL");
          }
        }

      }
     dbsignup.close();



}


void signup::on_commandLinkButton_clicked()
{
   hide();
   mainwindowobj7=new MainWindow(this);
   mainwindowobj7->show();
}

