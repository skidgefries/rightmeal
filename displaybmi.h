#ifndef DISPLAYBMI_H
#define DISPLAYBMI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class displaybmi; }
QT_END_NAMESPACE

class displaybmi : public QMainWindow
{
    Q_OBJECT

public:
    displaybmi(QWidget *parent = nullptr);
    ~displaybmi();

private:
    Ui::displaybmi *ui;
};
#endif // DISPLAYBMI_H
