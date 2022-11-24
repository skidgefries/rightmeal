#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

QString usernameg;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db2 = QSqlDatabase::addDatabase("QMYSQL");
        db2.setHostName("127.0.0.1");
        db2.setUserName("root");
        db2.setPassword("0852");
        db2.setDatabaseName("proj");
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_9_clicked()
{
    hide();
    signupobj=new signup(this);
    signupobj->show();
}


void MainWindow::on_pushButton_clicked()
{
    if(db2.open())
    {
      QString username=ui->lineEdit_5->text();
      QString password=ui->lineEdit_6->text();
      QSqlQuery qry;
      qry.prepare(QString("SELECT * FROM signup WHERE username=:username AND password=:password"));
         qry.bindValue(":username", username);
         qry.bindValue(":password", password);
        if(!qry.exec())
         {
              QMessageBox::information(this,"Log in","Log in failed. Try again.");
         }
         else
         {
             while(qry.next())
                    {
                        QString username=qry.value(0).toString();
                        QString password=qry.value(1).toString();
                        if(username==username && password==password)
                        {
                            usernameg=username;
                            hide();
                            myprofileobj=new myprofile(this);
                            myprofileobj->show();

                        }
                        else
                        {
                            QMessageBox::warning(this,"Login","Username and password do not match.");
                        }
                    }
         }
    }
}



void MainWindow::on_pushButton_8_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("0852");
        db.setDatabaseName("proj");
        if(db.open())
        {
            QMessageBox::information(this,"Connection","connected successfully.");

        }
        else
        {
            QMessageBox::information(this,"Connection","not connected.");
        }
}

