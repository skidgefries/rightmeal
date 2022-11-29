#ifndef DIETPLAN_H
#define DIETPLAN_H
#include"caloriecalculator.h"
#include "settings.h"
#include <QDialog>

namespace Ui {
class dietplan;
}

class dietplan : public QDialog
{
    Q_OBJECT

public:
    explicit dietplan(QWidget *parent = nullptr);
    ~dietplan();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_26_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_22_clicked();

    void on_commandLinkButton_23_clicked();

    void on_commandLinkButton_24_clicked();

    void on_commandLinkButton_25_clicked();

private:
    Ui::dietplan *ui;
    caloriecalculator *caloriecalculatorobj;
    settings *settingsobj1;
};

#endif // DIETPLAN_H
