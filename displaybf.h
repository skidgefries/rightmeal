#ifndef DISPLAYBF_H
#define DISPLAYBF_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class displaybf; }
QT_END_NAMESPACE

class displaybf : public QMainWindow
{
    Q_OBJECT

public:
    displaybf(QWidget *parent = nullptr);
    ~displaybf();

private:
    Ui::displaybf *ui;
};
#endif // DISPLAYBF_H
