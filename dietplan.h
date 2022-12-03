#ifndef DIETPLAN_H
#define DIETPLAN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QMainWindow>
#include<QMessageBox>

#include<QAbstractButton>
QT_BEGIN_NAMESPACE
namespace Ui { class dietplan; }
QT_END_NAMESPACE

class dietplan : public QMainWindow
{
    Q_OBJECT

public:
    dietplan(QWidget *parent = nullptr);
    ~dietplan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dietplan *ui;
    QSqlDatabase db;
};
#endif // DIETPLAN_H


