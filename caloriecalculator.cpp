#include "caloriecalculator.h"
#include "ui_caloriecalculator.h"

caloriecalculator::caloriecalculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caloriecalculator)
{
    ui->setupUi(this);
}

caloriecalculator::~caloriecalculator()
{
    delete ui;
}



