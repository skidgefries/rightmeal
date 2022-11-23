#ifndef SIGNUP_H
#define SIGNUP_H
#include "basicinfo.h"
#include <QDialog>

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
};

#endif // SIGNUP_H
