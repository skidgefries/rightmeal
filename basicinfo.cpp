#include "basicinfo.h"
#include "ui_basicinfo.h"

basicinfo::basicinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::basicinfo)
{
    ui->setupUi(this);
}

basicinfo::~basicinfo()
{
    delete ui;
}

void basicinfo::on_pushButton_3_clicked()
{
    hide();
    myprofileobj=new myprofile(this);
    myprofileobj->show();
}


void basicinfo::on_pushButton_clicked()
{
    hide();
    basicobj=new basic(this);
    basicobj->show();
}

