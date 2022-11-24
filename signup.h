#ifndef SIGNUP_H
#define SIGNUP_H
#include "basicinfo.h"
#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QAbstractButton>


namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::signup *ui;
    basicinfo *basicinfoobj;
    QSqlDatabase db1;
};

#endif // SIGNUP_H
