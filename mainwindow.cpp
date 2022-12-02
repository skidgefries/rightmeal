#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

QString usernameg;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dblogin = QSqlDatabase::addDatabase("QMYSQL","trial");
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
        QString username1=ui->lineEdit_5->text();
        QString password1=ui->lineEdit_6->text();
        if(username1=="\0" || password1=="\0")
        {
            QMessageBox::information(this,"Login","Please enter both username and password");
        }
        else
        {
        QSqlQuery qry(dblogin),qry1(dblogin);
//        qry.prepare(QString("SELECT * FROM signup WHERE username=:username AND password=:password"));
//        qry.bindValue(":username",username1);
//        qry.bindValue(":password",password1);
        qry1.prepare("SELECT password FROM signup WHERE username=:username");
        qry1.bindValue(":username",username1);
        qry1.exec();
        if(qry1.next())
        {
            QString pass=qry1.value(0).toString();
            if(pass!=password1)
            {
                QMessageBox::information(this,"Login","Incorrect Password.");
            }
            else
            {
//                if(!qry.exec())
//                {
//                    QMessageBox::information(this,"Login","Login failed. Try Again.");
//                }
//                else
//                {
                    qry.next();

        //                QString username=qry.value(0).toString();
        //                QString password=qry.value(1).toString();
        //                if(username==username && password==password)
        //                {
                           usernameg=username1;
                           hide();
                           myprofileobj=new myprofile(this);
                           myprofileobj->show();

        //                }
        //                else if (username=='0' && password=='0')
        //                {
        //                    QMessageBox::warning(this,"Login","PLease Enter the username and password.");
        //                }


//                }
            }
        }
        else
        {
            QMessageBox::warning(this,"Login","Username and password do not match.");
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






void MainWindow::on_lineEdit_5_returnPressed()
{
    on_pushButton_clicked();
}


void MainWindow::on_lineEdit_6_returnPressed()
{
    on_pushButton_clicked();
}

