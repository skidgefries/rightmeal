#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

QString usernameg;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dblogin = QSqlDatabase::addDatabase("QMYSQL");
        dblogin.setHostName("127.0.0.1");
        dblogin.setUserName("root");
        dblogin.setPassword("0852");
        dblogin.setDatabaseName("proj");
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
    dblogin.open();
        QString username=ui->lineEdit_5->text();
        QString password=ui->lineEdit_6->text();
        QSqlQuery qry;
        qry.prepare("SELECT * FROM signup WHERE username=:username AND password=:password");
        qry.bindValue(":username",username);
        qry.bindValue(":password",password);
        if(!qry.exec())
        {
            QMessageBox::information(this,"Login","Login failed. Try Again.");
        }
        else
        {
            while(qry.next())
            {
                QString usernamea=qry.value(0).toString();
                QString passworda=qry.value(1).toString();
                if(username==usernamea && password==passworda)
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

