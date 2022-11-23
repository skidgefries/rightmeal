#ifndef BASICINFO_H
#define BASICINFO_H
#include "myprofile.h"
#include "basic.h"
#include <QDialog>

namespace Ui {
class basicinfo;
}

class basicinfo : public QDialog
{
    Q_OBJECT

public:
    explicit basicinfo(QWidget *parent = nullptr);
    ~basicinfo();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::basicinfo *ui;
    myprofile *myprofileobj;
    basic *basicobj;
};

#endif // BASICINFO_H
