#ifndef UPDATEBASICINFO_H
#define UPDATEBASICINFO_H

#include <QMainWindow>
#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class updatebasicinfo; }
QT_END_NAMESPACE

class updatebasicinfo : public QMainWindow
{
    Q_OBJECT

public:
    updatebasicinfo(QWidget *parent = nullptr);
    ~updatebasicinfo();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::updatebasicinfo *ui;
    QSqlDatabase db69;
};
#endif // UPDATEBASICINFO_H
