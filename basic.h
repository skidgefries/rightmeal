#ifndef BASIC_H
#define BASIC_H

#include <QMainWindow>
#include<dbf.h>

QT_BEGIN_NAMESPACE
namespace Ui { class basic; }
QT_END_NAMESPACE

class basic : public QMainWindow
{
    Q_OBJECT

public:
    basic(QWidget *parent = nullptr);
    ~basic();

private slots:
    void on_pushButton_2_clicked();


    void on_pushButton_clicked();

private:
    Ui::basic *ui;
    dbf *dbfobj;
};
#endif // BASIC_H
