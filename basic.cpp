#include "basic.h"
#include "ui_basic.h"
#include"basicinfo.h"
basicinfo *basicinfoobj1;

basic::basic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::basic)
{
    ui->setupUi(this);
}

basic::~basic()
{
    delete ui;
}


void basic::on_pushButton_2_clicked()
{
    hide();
    basicinfoobj1=new basicinfo(this);
    basicinfoobj1->show();
}

