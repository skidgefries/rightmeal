#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    hide();
    myprofileobj=new myprofile(this);
    myprofileobj->show();

}

