#ifndef MYPROFILE_H
#define MYPROFILE_H
#include "dietplan.h"
#include "bmi.h"
#include <QDialog>
#include "workout.h"
#include "bodyfat.h"
#include "settings.h"
#include "updatebasicinfo.h"
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlQuery>


namespace Ui {
class myprofile;
}

class myprofile : public QDialog
{
    Q_OBJECT

public:
    explicit myprofile(QWidget *parent = nullptr);
    ~myprofile();

private slots:
    void on_commandLinkButton_9_clicked();

    void on_commandLinkButton_11_clicked();

    void on_commandLinkButton_10_clicked();

    void on_commandLinkButton_14_clicked();

    void on_commandLinkButton_12_clicked();

    void on_commandLinkButton_13_clicked();

    void on_pushButton_clicked();

private:
    Ui::myprofile *ui;
    dietplan *dietplanobj;
    bmi *bmiobj;
    workout *workoutobj;
    settings *settingsobj;
    BodyFAT *bodyfatobj;
    QSqlDatabase db3;
    updatebasicinfo *upbasicinfoobj1;
   // QSqlDatabase db5;
};

#endif // MYPROFILE_H
