#include "dbf.h"
#include "ui_dbf.h"

dbf::dbf(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dbf)
{
    ui->setupUi(this);
    extern float BF1;
    ui->setupUi(this);
    ui->label_2->setText(QString::number(BF1));
}

dbf::~dbf()
{
    delete ui;
}

