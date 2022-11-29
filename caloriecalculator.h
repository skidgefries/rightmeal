#ifndef CALORIECALCULATOR_H
#define CALORIECALCULATOR_H
#include <QDialog>

namespace Ui {
class caloriecalculator;
}

class caloriecalculator : public QDialog
{
    Q_OBJECT

public:
    explicit caloriecalculator(QWidget *parent = nullptr);
    ~caloriecalculator();

private slots:


    void on_commandLinkButton_4_clicked();

    void on_commandLinkButton_14_clicked();

    void on_pushButton_clicked();

    void on_commandLinkButton_9_clicked();

    void on_commandLinkButton_10_clicked();

    void on_commandLinkButton_11_clicked();

    void on_commandLinkButton_12_clicked();

private:
    Ui::caloriecalculator *ui;
};

#endif // CALORIECALCULATOR_H
