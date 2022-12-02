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
float BF1;
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


void basic::on_pushButton_clicked()
{
    float w,n,height,hp;
    QString gender = ui->comboBox->currentText();
    QString age= ui-> lineEdit_4 ->text();
    float hft= ui->lineEdit->text().toFloat();
    float hin= ui->lineEdit_2->text().toFloat();
    float wt= ui->lineEdit_3->text().toFloat();
    float neck= ui->lineEdit_5->text().toFloat();
    float hip= ui->lineEdit_6->text().toFloat();
    float waist= ui->lineEdit_7->text().toFloat();
    height=(hft*12+hin)*2.54;
    w=waist;
    hp=hip;
    n=neck;

    if(gender=="Male")
    {
        BF1=(495/(1.0324-0.19077*log10(w-n)+0.15456*log10(height)))-450;
        //ui->lineEdit_4->setText(QString::number(BF));

    }
    if(gender=="Female")
    {
        BF1= (495/(1.29579-0.35004*log10(w+hp-n)+0.22100*log10(height)))-450;
        //ui->lineEdit_4->setText(QString::number(BF));
    }
    dbfobj=new dbf(this);
    dbfobj->show();
}

