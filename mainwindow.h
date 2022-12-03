#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "signup.h"
#include "myprofile.h"
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QMainWindow>


/*#include <QAction>
#include <QLineEdit>
#include <QToolButton>*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_lineEdit_5_returnPressed();

    void on_lineEdit_6_returnPressed();

    //void onPressed();
    //void onReleased()

/*protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void focusInEvent(QFocusEvent *event);
    void focusOutEvent(QFocusEvent *event);*/

private:
    Ui::MainWindow *ui;
    signup *signupobj;
    myprofile *myprofileobj;
    QSqlDatabase dblogin;
   // QToolButton *button;
};
#endif // MAINWINDOW_H
