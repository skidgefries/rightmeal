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

private:
    Ui::workout *ui;
};
#endif // WORKOUT_H
