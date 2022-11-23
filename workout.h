#ifndef WORKOUT_H
#define WORKOUT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class workout; }
QT_END_NAMESPACE

class workout : public QMainWindow
{
    Q_OBJECT

public:
    workout(QWidget *parent = nullptr);
    ~workout();

private slots:
    void on_commandLinkButton_14_clicked();

    void on_commandLinkButton_4_clicked();

    void on_commandLinkButton_9_clicked();

    void on_commandLinkButton_11_clicked();

    void on_commandLinkButton_12_clicked();

private:
    Ui::workout *ui;
};
#endif // WORKOUT_H
