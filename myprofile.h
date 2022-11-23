#ifndef MYPROFILE_H
#define MYPROFILE_H
#include "dietplan.h"
#include "bmi.h"
#include <QDialog>
#include "workout.h"

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

private:
    Ui::myprofile *ui;
    dietplan *dietplanobj;
    bmi *bmiobj;
    workout *workoutobj;
};

#endif // MYPROFILE_H
