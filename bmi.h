#ifndef BMI_H
#define BMI_H

#include <QDialog>

namespace Ui {
class bmi;
}

class bmi : public QDialog
{
    Q_OBJECT

public:
    explicit bmi(QWidget *parent = nullptr);
    ~bmi();

private:
    Ui::bmi *ui;
};

#endif // BMI_H
