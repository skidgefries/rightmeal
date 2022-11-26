#include "displaybmi.h"
#include "ui_displaybmi.h"

displaybmi::displaybmi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::displaybmi)
{
    extern float bmi1;
    ui->setupUi(this);
    ui->label_2->setText(QString::number(bmi1));
}

displaybmi::~displaybmi()
{
    delete ui;
}



