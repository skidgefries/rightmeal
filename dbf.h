#ifndef DBF_H
#define DBF_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class dbf; }
QT_END_NAMESPACE

class dbf : public QMainWindow
{
    Q_OBJECT

public:
    dbf(QWidget *parent = nullptr);
    ~dbf();

private:
    Ui::dbf *ui;
};
#endif // DBF_H
