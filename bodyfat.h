#ifndef BODYFAT_H
#define BODYFAT_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class BodyFAT; }
QT_END_NAMESPACE

class BodyFAT : public QMainWindow
{
    Q_OBJECT

public:
    BodyFAT(QWidget *parent = nullptr);
    ~BodyFAT();

private slots:
    void on_commandLinkButton_26_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_21_clicked();

    void on_commandLinkButton_22_clicked();

    void on_commandLinkButton_23_clicked();

    void on_pushButton_clicked();

private:
    Ui::BodyFAT *ui;
    QSqlDatabase dbbfc;
};
#endif // BODYFAT_H
