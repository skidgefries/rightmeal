#ifndef MYPROFILE_H
#define MYPROFILE_H
#include "dietplan.h"
#include "bmi.h"
#include <QDialog>
#include "workout.h"
#include "bodyfat.h"
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

private:
    Ui::myprofile *ui;
    dietplan *dietplanobj;
    bmi *bmiobj;
    workout *workoutobj;
    BodyFAT *bodyfatobj;
    QSqlDatabase db3;
};

#endif // MYPROFILE_H
