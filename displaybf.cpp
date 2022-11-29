#include "displaybf.h"
#include "ui_displaybf.h"

displaybf::displaybf(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::displaybf)

{
    extern float BF;
    ui->setupUi(this);
    ui->label_2->setText(QString::number(BF));
}

displaybf::~displaybf()
{
    delete ui;
}
