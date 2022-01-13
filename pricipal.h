#ifndef PRICIPAL_H
#define PRICIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class pricipal; }
QT_END_NAMESPACE

class pricipal : public QMainWindow
{
    Q_OBJECT

public:
    pricipal(QWidget *parent = nullptr);
    ~pricipal();
public slots:
    void centAfarhr(int cent);
    void farAcent(int i);
    void farAKelvin(int i);
    void kelvinAfar(int i);
    void centAkelvin (int i);
    void kelvinAcent(int i);

private:
    Ui::pricipal *ui;
};
#endif // PRICIPAL_H
