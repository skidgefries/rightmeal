#ifndef BASICINFO_H
#define BASICINFO_H
#include "myprofile.h"
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

private:
    Ui::basicinfo *ui;
    myprofile *myprofileobj;
};

#endif // BASICINFO_H
