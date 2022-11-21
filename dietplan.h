#ifndef DIETPLAN_H
#define DIETPLAN_H
#include"caloriecalculator.h"
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

private:
    Ui::dietplan *ui;
    caloriecalculator *caloriecalculatorobj;
};

#endif // DIETPLAN_H
