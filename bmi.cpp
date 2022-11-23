#include "bmi.h"
#include "ui_bmi.h"

bmi::bmi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bmi)
{
    ui->setupUi(this);
}

bmi::~bmi()
{
    delete ui;
}
