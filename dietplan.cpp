#include "dietplan.h"
#include "ui_dietplan.h"
#include<QMessageBox>
#include<QDebug>
dietplan::dietplan(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dietplan)
{
    ui->setupUi(this);
    this->showMaximized();
    db =QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("MySQL@2020");
        db.setDatabaseName("proj");
}

dietplan::~dietplan()
{
    delete ui;
}


void dietplan::on_pushButton_clicked()
{
        db.open();
        QSqlQuery qry(db);
        QString foodname;
        int amt,cal,i,random,random1,l,m;
        float cf,carb,protein,fat;

        int reqcal= ui->entercal->text().toInt();

        QString diettype = ui->comboBox->currentText();


        if (diettype=="Non-Vegeterian")
        {
            int stdcal=2226;
            cf=float(reqcal)/float(stdcal);
            l=1;m=1;
            for(i=1;i<=5;i++)//nonvegbreakfast
            {

                    srand((unsigned) time(NULL));
                    random = l+ (rand() % m);

                    random1=random;
                    qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM nonvegbreakfast WHERE number=:random");
                    qry.bindValue(":random",random1);
                    qry.exec();
                    qry.first();

                    foodname= qry.value(0).toString() ;
                    amt= qry.value(1).toInt();
                    cal= qry.value(2).toInt();
                    carb= qry.value(3).toFloat();
                    protein= qry.value(4).toFloat() ;
                    fat= qry.value(5).toFloat();
                    amt=amt*cf;
                    cal=cal*cf;
                    carb=carb*cf;
                    protein=protein*cf;
                    fat=fat*cf;

                    if (random1>=1 and random1<=1)
                    {
                        ui->food1->setText(foodname);
                        ui->food1amt->setNum(amt);
                        ui->food1cal->setNum(cal);
                        ui->food1carb->setNum(carb);
                        ui->food1pro->setNum(protein);
                        ui->food1fat->setNum(fat);
                        l=2; m=1;

                    }

                    if (random1>=2 and random1<=2)
                    {
                        ui->food2->setText(foodname);
                        ui->food2amt->setNum(amt);
                        ui->food2cal->setNum(cal);
                        ui->food2carb->setNum(carb);
                        ui->food2pro->setNum(protein);
                        ui->food2fat->setNum(fat);
                        l=3; m=3;

                    }

                    if (random1>=3 and random1<=5)
                    {
                        ui->food3->setText(foodname);
                        ui->food3amt->setNum(amt);
                        ui->food3cal->setNum(cal);
                        ui->food3carb->setNum(carb);
                        ui->food3pro->setNum(protein);
                        ui->food3fat->setNum(fat);
                        l=6; m=3;

                    }
                    if (random1>=6 and random1<=8)
                    {
                        ui->food4->setText(foodname);
                        ui->food4amt->setNum(amt);
                        ui->food4cal->setNum(cal);
                        ui->food4carb->setNum(carb);
                        ui->food4pro->setNum(protein);
                        ui->food4fat->setNum(fat);
                        l=9; m=3;

                    }
                    if (random1>=9 and random1<=11)
                    {
                        ui->food5->setText(foodname);
                        ui->food5amt->setNum(amt);
                        ui->food5cal->setNum(cal);
                        ui->food5carb->setNum(carb);
                        ui->food5pro->setNum(protein);
                        ui->food5fat->setNum(fat);
                        l=1;m=6;
                    }
            }//for end




                for(i=1;i<=5;i++)//nonveglunch
                {
                        srand((unsigned) time(NULL));
                                                random = l+ (rand() % m);

                                                random1=random;
                                   qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM nonveglunch WHERE number=:random");
                                                qry.bindValue(":random",random1);
                                                qry.exec();
                                                qry.first();

                                                foodname= qry.value(0).toString() ;
                                                amt= qry.value(1).toInt();
                                                cal= qry.value(2).toInt();
                                                carb= qry.value(3).toFloat();
                                                protein= qry.value(4).toFloat() ;
                                                fat= qry.value(5).toFloat();
                                                amt=amt*cf;
                                                cal=cal*cf;
                                                carb=carb*cf;
                                                protein=protein*cf;
                                                fat=fat*cf;
                                                if (random1>=1 and random1<=6)
                                                {
                                                    ui->food1_5->setText(foodname);
                                                    ui->food1amt_5->setNum(amt);
                                                    ui->food1cal_5->setNum(cal);
                                                    ui->food1carb_5->setNum(carb);
                                                    ui->food1pro_5->setNum(protein);
                                                    ui->food1fat_5->setNum(fat);
                                                    l=7; m=3;

                                                }
                                                if (random1>=7 and random1<=9)
                                                {
                                                    ui->food2_5->setText(foodname);
                                                    ui->food2amt_5->setNum(amt);
                                                    ui->food2cal_5->setNum(cal);
                                                    ui->food2carb_5->setNum(carb);
                                                    ui->food2pro_5->setNum(protein);
                                                    ui->food2fat_5->setNum(fat);
                                                    l=10; m=10;

                                                }
                                                if (random1>=10 and random1<=19)
                                                {
                                                    ui->food3_5->setText(foodname);
                                                    ui->food3amt_5->setNum(amt);
                                                    ui->food3cal_5->setNum(cal);
                                                    ui->food3carb_5->setNum(carb);
                                                    ui->food3pro_5->setNum(protein);
                                                    ui->food3fat_5->setNum(fat);
                                                    l=20; m=9;
                                                }
                                                if (random1>=20 and random1<=28)
                                                {
                                                    ui->food4_5->setText(foodname);
                                                    ui->food4amt_5->setNum(amt);
                                                    ui->food4cal_5->setNum(cal);
                                                    ui->food4carb_5->setNum(carb);
                                                    ui->food4pro_5->setNum(protein);
                                                    ui->food4fat_5->setNum(fat);
                                                    l=29; m=2;

                                                }
                                                if (random1>=29 and random1<=30)
                                                {
                                                    ui->food5_5->setText(foodname);
                                                    ui->food5amt_5->setNum(amt);
                                                    ui->food5cal_5->setNum(cal);
                                                    ui->food5carb_5->setNum(carb);
                                                    ui->food5pro_5->setNum(protein);
                                                    ui->food5fat_5->setNum(fat);
                                                    l=1; m=3;

                                                }
             }//for end



                for(i=1;i<=2;i++)//nonvegsnacks
                {
                            srand((unsigned) time(NULL));
                                                random = l+ (rand() % m);

                                                random1=random;
                                   qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM nonvegsnacks WHERE number=:random");
                                                qry.bindValue(":random",random1);
                                                qry.exec();
                                                qry.first();

                                                foodname= qry.value(0).toString() ;
                                                amt= qry.value(1).toInt();
                                                cal= qry.value(2).toInt();
                                                carb= qry.value(3).toFloat();
                                                protein= qry.value(4).toFloat() ;
                                                fat= qry.value(5).toFloat();
                                                amt=amt*cf;
                                                cal=cal*cf;
                                                carb=carb*cf;
                                                protein=protein*cf;
                                                fat=fat*cf;
                                                if (random1>=1 and random1<=3)
                                                {
                                                    ui->food1_6->setText(foodname);
                                                    ui->food1amt_6->setNum(amt);
                                                    ui->food1cal_6->setNum(cal);
                                                    ui->food1carb_6->setNum(carb);
                                                    ui->food1pro_6->setNum(protein);
                                                    ui->food1fat_6->setNum(fat);
                                                    l=4; m=3;

                                                }
                                                if (random1>=4 and random1<=6)
                                                {
                                                    ui->food2_6->setText(foodname);
                                                    ui->food2amt_6->setNum(amt);
                                                    ui->food2cal_6->setNum(cal);
                                                    ui->food2carb_6->setNum(carb);
                                                    ui->food2pro_6->setNum(protein);
                                                    ui->food2fat_6->setNum(fat);
                                                    l=1; m=3;

                                                }
//                                                if (random1>=7 and random1<=9)
//                                                {
//                                                    ui->food3_6->setText(foodname);
//                                                    ui->food3amt_6->setNum(amt);
//                                                    ui->food3cal_6->setNum(cal);
//                                                    ui->food3carb_6->setNum(carb);
//                                                    ui->food3pro_6->setNum(protein);
//                                                    ui->food3fat_6->setNum(fat);
//                                                    l=10; m=3;
//
//                                                }
//                                                if (random1>=10 and random1<=12)
//                                                {
//                                                    ui->food4_6->setText(foodname);
//                                                    ui->food4amt_6->setNum(amt);
//                                                    ui->food4cal_6->setNum(cal);
//                                                    ui->food4carb_6->setNum(carb);
//                                                    ui->food4pro_6->setNum(protein);
//                                                    ui->food4fat_6->setNum(fat);
//
//                                                }

                    }//nonveg snacks for end



                for(i=1;i<=5;i++)//nonvegdinner
                {
                        srand((unsigned) time(NULL));
                                                random = l+ (rand() % m);

                                                random1=random;
                                   qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM nonvegdinner WHERE number=:random");
                                                qry.bindValue(":random",random1);
                                                qry.exec();
                                                qry.first();

                                                foodname= qry.value(0).toString() ;
                                                amt= qry.value(1).toInt();
                                                cal= qry.value(2).toInt();
                                                carb= qry.value(3).toFloat();
                                                protein= qry.value(4).toFloat() ;
                                                fat= qry.value(5).toFloat();
                                                amt=amt*cf;
                                                cal=cal*cf;
                                                carb=carb*cf;
                                                protein=protein*cf;
                                                fat=fat*cf;
                                                if (random1>=1 and random1<=3)
                                                {
                                                    ui->food1_7->setText(foodname);
                                                    ui->food1amt_7->setNum(amt);
                                                    ui->food1cal_7->setNum(cal);
                                                    ui->food1carb_7->setNum(carb);
                                                    ui->food1pro_7->setNum(protein);
                                                    ui->food1fat_7->setNum(fat);
                                                    l=4; m=3;
                                                }
                                                if (random1>=4 and random1<=6)
                                                {
                                                    ui->food2_7->setText(foodname);
                                                    ui->food2amt_7->setNum(amt);
                                                    ui->food2cal_7->setNum(cal);
                                                    ui->food2carb_7->setNum(carb);
                                                    ui->food2pro_7->setNum(protein);
                                                    ui->food2fat_7->setNum(fat);
                                                    l=7; m=3;
                                                }
                                                if (random1>=7 and random1<=9)
                                                {
                                                    ui->food3_7->setText(foodname);
                                                    ui->food3amt_7->setNum(amt);
                                                    ui->food3cal_7->setNum(cal);
                                                    ui->food3carb_7->setNum(carb);
                                                    ui->food3pro_7->setNum(protein);
                                                    ui->food3fat_7->setNum(fat);
                                                    l=10; m=3;
                                                }
                                                if (random1>=10 and random1<=12)
                                                {
                                                    ui->food4_7->setText(foodname);
                                                    ui->food4amt_7->setNum(amt);
                                                    ui->food4cal_7->setNum(cal);
                                                    ui->food4carb_7->setNum(carb);
                                                    ui->food4pro_7->setNum(protein);
                                                    ui->food4fat_7->setNum(fat);
                                                    l=13;m=1;
                                                }
                                                if (random1>=13 and random1<=13)
                                                {
                                                    ui->food5_7->setText(foodname);
                                                    ui->food5amt_7->setNum(amt);
                                                    ui->food5cal_7->setNum(cal);
                                                    ui->food5carb_7->setNum(carb);
                                                    ui->food5pro_7->setNum(protein);
                                                    ui->food5fat_7->setNum(fat);
                                                 }

         }//for end
    }//if non veg end


 else// if veg
    {
            int stdcal=2226;
            cf=float(reqcal)/float(stdcal);
            l=1;m=3;
           for(i=1;i<=4;i++)//veg breakfast
                      {
                              srand((unsigned) time(NULL));
                                                      random = l+ (rand() % m);

                                                      random1=random;
                                         qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM vegbreakfast WHERE number=:random");
                                                      qry.bindValue(":random",random1);
                                                      qry.exec();
                                                      qry.first();

                                                      foodname= qry.value(0).toString() ;
                                                      amt= qry.value(1).toInt();
                                                      cal= qry.value(2).toInt();
                                                      carb= qry.value(3).toFloat();
                                                      protein= qry.value(4).toFloat() ;
                                                      fat= qry.value(5).toFloat();
                                                      amt=amt*cf;
                                                      cal=cal*cf;
                                                      carb=carb*cf;
                                                      protein=protein*cf;
                                                      fat=fat*cf;
                                                      if (random1>=1 and random1<=3)
                                                      {
                                                          ui->food1->setText(foodname);
                                                          ui->food1amt->setNum(amt);
                                                          ui->food1cal->setNum(cal);
                                                          ui->food1carb->setNum(carb);
                                                          ui->food1pro->setNum(protein);
                                                          ui->food1fat->setNum(fat);
                                                          l=4; m=3;
                                                      }
                                                      if (random1>=4 and random1<=6)
                                                      {
                                                          ui->food2->setText(foodname);
                                                          ui->food2amt->setNum(amt);
                                                          ui->food2cal->setNum(cal);
                                                          ui->food2carb->setNum(carb);
                                                          ui->food2pro->setNum(protein);
                                                          ui->food2fat->setNum(fat);
                                                          l=7; m=3;
                                                      }
                                                      if (random1>=7 and random1<=9)
                                                      {
                                                          ui->food3->setText(foodname);
                                                          ui->food3amt->setNum(amt);
                                                          ui->food3cal->setNum(cal);
                                                          ui->food3carb->setNum(carb);
                                                          ui->food3pro->setNum(protein);
                                                          ui->food3fat->setNum(fat);
                                                          l=10; m=1;
                                                      }
                                                      if (random1>=10 and random1<=10)
                                                      {
                                                          ui->food4->setText(foodname);
                                                          ui->food4amt->setNum(amt);
                                                          ui->food4cal->setNum(cal);
                                                          ui->food4carb->setNum(carb);
                                                          ui->food4pro->setNum(protein);
                                                          ui->food4fat->setNum(fat);
                                                          l=1; m=3;

                                                      }
//                                                      if (random1>=11 and random1<=11)
//                                                      {
//                                                          ui->food5->setText(foodname);
//                                                          ui->food5amt->setNum(amt);
//                                                          ui->food5cal->setNum(cal);
//                                                          ui->food5carb->setNum(carb);
//                                                          ui->food5pro->setNum(protein);
//                                                          ui->food5fat->setNum(fat);
//                                                          l=1;m=3;
//                                                      }
                  }//for breakfast end

                      for(i=1;i<=5;i++)//veglunch
                      {
                              srand((unsigned) time(NULL));
                                                      random = l+ (rand() % m);

                                                      random1=random;
                                         qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM veglunch WHERE number=:random");
                                                      qry.bindValue(":random",random1);
                                                      qry.exec();
                                                      qry.first();

                                                      foodname= qry.value(0).toString() ;
                                                      amt= qry.value(1).toInt();
                                                      cal= qry.value(2).toInt();
                                                      carb= qry.value(3).toFloat();
                                                      protein= qry.value(4).toFloat() ;
                                                      fat= qry.value(5).toFloat();
                                                      amt=amt*cf;
                                                      cal=cal*cf;
                                                      carb=carb*cf;
                                                      protein=protein*cf;
                                                      fat=fat*cf;
                                                      if (random1>=1 and random1<=3)
                                                      {
                                                          ui->food1_5->setText(foodname);
                                                          ui->food1amt_5->setNum(amt);
                                                          ui->food1cal_5->setNum(cal);
                                                          ui->food1carb_5->setNum(carb);
                                                          ui->food1pro_5->setNum(protein);
                                                          ui->food1fat_5->setNum(fat);
                                                          l=4; m=3;
                                                      }
                                                      if (random1>=4 and random1<=6)
                                                      {
                                                          ui->food2_5->setText(foodname);
                                                          ui->food2amt_5->setNum(amt);
                                                          ui->food2cal_5->setNum(cal);
                                                          ui->food2carb_5->setNum(carb);
                                                          ui->food2pro_5->setNum(protein);
                                                          ui->food2fat_5->setNum(fat);
                                                          l=7; m=3;
                                                      }
                                                      if (random1>=7 and random1<=9)
                                                      {
                                                          ui->food3_5->setText(foodname);
                                                          ui->food3amt_5->setNum(amt);
                                                          ui->food3cal_5->setNum(cal);
                                                          ui->food3carb_5->setNum(carb);
                                                          ui->food3pro_5->setNum(protein);
                                                          ui->food3fat_5->setNum(fat);
                                                          l=10;m=1;
                                                      }
                                                      if (random1>=10 and random1<=10)
                                                      {
                                                          ui->food4_5->setText(foodname);
                                                          ui->food4amt_5->setNum(amt);
                                                          ui->food4cal_5->setNum(cal);
                                                          ui->food4carb_5->setNum(carb);
                                                          ui->food4pro_5->setNum(protein);
                                                          ui->food4fat_5->setNum(fat);
                                                           l=11;m=1;

                                                      }
                                                      if (random1>=11 and random1<=11)
                                                      {
                                                          ui->food5_5->setText(foodname);
                                                          ui->food5amt_5->setNum(amt);
                                                          ui->food5cal_5->setNum(cal);
                                                          ui->food5carb_5->setNum(carb);
                                                          ui->food5pro_5->setNum(protein);
                                                          ui->food5fat_5->setNum(fat);
                                                          l=1;m=3;
                                                      }
                  }//for veg lunch end

                      for(i=1;i<=3;i++)//vegsnacks
                      {
                                  srand((unsigned) time(NULL));
                                                      random = l+ (rand() % m);

                                                      random1=random;
                                         qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM vegsnacks WHERE number=:random");
                                                      qry.bindValue(":random",random1);
                                                      qry.exec();
                                                      qry.first();

                                                      foodname= qry.value(0).toString() ;
                                                      amt= qry.value(1).toInt();
                                                      cal= qry.value(2).toInt();
                                                      carb= qry.value(3).toFloat();
                                                      protein= qry.value(4).toFloat() ;
                                                      fat= qry.value(5).toFloat();
                                                      amt=amt*cf;
                                                      cal=cal*cf;
                                                      carb=carb*cf;
                                                      protein=protein*cf;
                                                      fat=fat*cf;
                                                      if (random1>=1 and random1<=3)
                                                      {
                                                          ui->food1_6->setText(foodname);
                                                          ui->food1amt_6->setNum(amt);
                                                          ui->food1cal_6->setNum(cal);
                                                          ui->food1carb_6->setNum(carb);
                                                          ui->food1pro_6->setNum(protein);
                                                          ui->food1fat_6->setNum(fat);
                                                          l=4; m=3;

                                                      }
                                                      if (random1>=4 and random1<=6)
                                                      {
                                                          ui->food2_6->setText(foodname);
                                                          ui->food2amt_6->setNum(amt);
                                                          ui->food2cal_6->setNum(cal);
                                                          ui->food2carb_6->setNum(carb);
                                                          ui->food2pro_6->setNum(protein);
                                                          ui->food2fat_6->setNum(fat);
                                                          l=7; m=3;

                                                      }
                                                      if (random1>=7 and random1<=9)
                                                      {
                                                          ui->food3_6->setText(foodname);
                                                          ui->food3amt_6->setNum(amt);
                                                          ui->food3cal_6->setNum(cal);
                                                          ui->food3carb_6->setNum(carb);
                                                          ui->food3pro_6->setNum(protein);
                                                          ui->food3fat_6->setNum(fat);
                                                          l=1; m=3;

                                                      }
      //                                                if (random1>=10 and random1<=12)
      //                                                {
      //                                                    ui->food4_6->setText(foodname);
      //                                                    ui->food4amt_6->setNum(amt);
      //                                                    ui->food4cal_6->setNum(cal);
      //                                                    ui->food4carb_6->setNum(carb);
      //                                                    ui->food4pro_6->setNum(protein);
      //                                                    ui->food4fat_6->setNum(fat);
      //
      //                                                }

                          }//veg snacks for end


                      for(i=1;i<=5;i++)//vegdinner
                      {
                              srand((unsigned) time(NULL));
                                                      random = l+ (rand() % m);

                                                      random1=random;
                                         qry.prepare("SELECT foodname,amount,calories,carbohydrate,protein,fat FROM vegdinner WHERE number=:random");
                                                      qry.bindValue(":random",random1);
                                                      qry.exec();
                                                      qry.first();

                                                      foodname= qry.value(0).toString() ;
                                                      amt= qry.value(1).toInt();
                                                      cal= qry.value(2).toInt();
                                                      carb= qry.value(3).toFloat();
                                                      protein= qry.value(4).toFloat() ;
                                                      fat= qry.value(5).toFloat();
                                                      amt=amt*cf;
                                                      cal=cal*cf;
                                                      carb=carb*cf;
                                                      protein=protein*cf;
                                                      fat=fat*cf;
                                                      if (random1>=1 and random1<=3)
                                                      {
                                                          ui->food1_7->setText(foodname);
                                                          ui->food1amt_7->setNum(amt);
                                                          ui->food1cal_7->setNum(cal);
                                                          ui->food1carb_7->setNum(carb);
                                                          ui->food1pro_7->setNum(protein);
                                                          ui->food1fat_7->setNum(fat);
                                                          l=4; m=3;
                                                      }
                                                      if (random1>=4 and random1<=6)
                                                      {
                                                          ui->food2_7->setText(foodname);
                                                          ui->food2amt_7->setNum(amt);
                                                          ui->food2cal_7->setNum(cal);
                                                          ui->food2carb_7->setNum(carb);
                                                          ui->food2pro_7->setNum(protein);
                                                          ui->food2fat_7->setNum(fat);
                                                          l=7; m=3;
                                                      }
                                                      if (random1>=7 and random1<=9)
                                                      {
                                                          ui->food3_7->setText(foodname);
                                                          ui->food3amt_7->setNum(amt);
                                                          ui->food3cal_7->setNum(cal);
                                                          ui->food3carb_7->setNum(carb);
                                                          ui->food3pro_7->setNum(protein);
                                                          ui->food3fat_7->setNum(fat);
                                                          l=10; m=3;
                                                      }
                                                      if (random1>=10 and random1<=12)
                                                      {
                                                          ui->food4_7->setText(foodname);
                                                          ui->food4amt_7->setNum(amt);
                                                          ui->food4cal_7->setNum(cal);
                                                          ui->food4carb_7->setNum(carb);
                                                          ui->food4pro_7->setNum(protein);
                                                          ui->food4fat_7->setNum(fat);
                                                      }
//                                                      if (random1>=13 and random1<=13)
//                                                      {
//                                                          ui->food5_7->setText(foodname);
//                                                          ui->food5amt_7->setNum(amt);
//                                                          ui->food5cal_7->setNum(cal);
//                                                          ui->food5carb_7->setNum(carb);
//                                                          ui->food5pro_7->setNum(protein);
//                                                          ui->food5fat_7->setNum(fat);
//                                                       }

                                   }//for dinner end
    }//else veg end
}//void pushbutton end

