
#include "ui_basicinfo.h"
#include <QMessageBox>

#include "mainwindow.h"
MainWindow *mainwindowobjj;

basicinfo::basicinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::basicinfo)
{
    ui->setupUi(this);
    db4 = QSqlDatabase::addDatabase("QMYSQL");
        db4.setHostName("127.0.0.1");
        db4.setUserName("root");
        db4.setPassword("MySQL@2020");
        db4.setDatabaseName("proj");
}

basicinfo::~basicinfo()
{
    delete ui;
}

void basicinfo::on_pushButton_3_clicked()
{
    if(db4.open())
    {
      extern QString usernames;
      QString gender = ui->comboBox->currentText();
      QString heightft= ui-> lineEdit ->text();
      QString heightin=ui->lineEdit_2->text();
      QString weight=ui->lineEdit_3->text();
      QString bodyfat=ui->comboBox_2->currentText();
      QString actlvl=ui->comboBox_3->currentText();
      QString dietype=ui->comboBox_4->currentText();
      QSqlQuery qry;
         qry.prepare("INSERT INTO basicinfo (username,Gender,heightft,Heighin,Weight,Bodyfat,Activitylevel,Diettype)""VALUES(:username,:Gender,:heightft,:Heighin,:Weight,:Bodyfat,:Activitylevel,:Diettype)");
         qry.bindValue(":username", usernames);
         qry.bindValue(":Gender", gender);
         qry.bindValue(":heightft", heightft);
         qry.bindValue(":Heighin", heightin);
         qry.bindValue(":Weight", weight);
         qry.bindValue(":Bodyfat", bodyfat);
         qry.bindValue(":Activitylevel", actlvl);
         qry.bindValue(":Diettype", dietype);
         if(qry.exec())
         {
              QMessageBox::information(this,"Basic Info","Basic info uploaded successfully. Login to continue");
              QSqlDatabase::removeDatabase("QMYSQL");
              hide();
                  mainwindowobjj=new MainWindow(this);
                  mainwindowobjj->show();
         }
         else
         {
             QMessageBox::warning(this,"Basic Info","Basic info uploading failed.");
             qDebug() << qry.lastError().text()<<Qt::endl;
             QSqlDatabase::removeDatabase("QMYSQL");
         }
    }
    db4.close();
}


void basicinfo::on_pushButton_clicked()
{
    hide();
    basicobj=new basic(this);
    basicobj->show();
}



