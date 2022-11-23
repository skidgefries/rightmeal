#include "workout.h"
#include "ui_workout.h"

workout::workout(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::workout)
{
    ui->setupUi(this);
}

workout::~workout()
{
    delete ui;
}

