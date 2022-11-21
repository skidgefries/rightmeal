#ifndef MYPROFILE_H
#define MYPROFILE_H
#include "dietplan.h"

#include <QDialog>

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

private:
    Ui::myprofile *ui;
    dietplan *dietplanobj;

};

#endif // MYPROFILE_H
