#include "dietplan.h"
#include "ui_dietplan.h"

dietplan::dietplan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietplan)
{
    ui->setupUi(this);
}

dietplan::~dietplan()
{
    delete ui;
}

void dietplan::on_pushButton_clicked()
{
    hide();
    caloriecalculatorobj=new caloriecalculator(this);
    caloriecalculatorobj->show();
}

