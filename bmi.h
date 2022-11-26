#ifndef BMI_H
#define BMI_H

#include <QDialog>
#include "displaybmi.h"

namespace Ui {
class bmi;
}

class bmi : public QDialog
{
    Q_OBJECT

public:
    explicit bmi(QWidget *parent = nullptr);
    ~bmi();

private slots:
    void on_commandLinkButton_26_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_21_clicked();

    void on_commandLinkButton_22_clicked();

    void on_commandLinkButton_24_clicked();

    void on_pushButton_clicked();

private:
    Ui::bmi *ui;
    displaybmi *displaybmiobj;
};

#endif // BMI_H
