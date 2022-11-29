#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class settings; }
QT_END_NAMESPACE

class settings : public QMainWindow
{
    Q_OBJECT

public:
    settings(QWidget *parent = nullptr);
    ~settings();

private slots:
    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_21_clicked();

    void on_commandLinkButton_22_clicked();

    void on_commandLinkButton_23_clicked();

    void on_commandLinkButton_24_clicked();

    void on_commandLinkButton_26_clicked();

private:
    Ui::settings *ui;
};
#endif // SETTINGS_H
