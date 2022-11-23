#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
MainWindow *mainwindowobj7;

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_clicked()
{
    hide();
    basicinfoobj=new basicinfo(this);
    basicinfoobj -> show();
}


void signup::on_commandLinkButton_clicked()
{
    hide();
    mainwindowobj7=new MainWindow(this);
    mainwindowobj7->show();
}

