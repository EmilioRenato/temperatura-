#include "pricipal.h"
#include "ui_pricipal.h"

#include <QDebug>

pricipal::pricipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pricipal)
{
    ui->setupUi(this);
    connect(ui->inCent,SIGNAL(valueChanged(int)),
            this, SLOT(centAfarhr(int)));
    connect(ui->inFaren,SIGNAL(valueChanged(int)),
            this, SLOT(farAcent(int)));

    connect(ui->inkelvin,SIGNAL(valueChanged(int)),
            this, SLOT(kelvinAfar(int)));
    connect(ui->inFaren,SIGNAL(valueChanged(int)),
            this, SLOT(farAKelvin(int)));

    connect(ui->inkelvin,SIGNAL(valueChanged(int)),
            this, SLOT(kelvinAcent(int)));
    connect(ui->inCent,SIGNAL(valueChanged(int)),
            this, SLOT(centAkelvin(int)));

}

pricipal::~pricipal()
{
    delete ui;
}

void pricipal::centAfarhr(int cent)
{
    if (ui->inCent->hasFocus()){
   int far = (cent*9.8/5)+32;
   ui->inFaren->setValue(far);
    }
}

void pricipal::farAcent(int i)
{
    if (ui->inFaren->hasFocus()){
    int c = (i-32)*5.0/9;
    ui->inCent->setValue(c);
    }
}

void pricipal::farAKelvin(int i)
{
    if (ui->inFaren->hasFocus()){

        int k = ((i-1));
        ui->inkelvin->setValue(k);
    }
}

void pricipal::kelvinAfar(int i)
{
    if (ui->inkelvin->hasFocus()){
        int f = ((i-3.15)*1.8)+32;

        ui->inFaren->setValue(f);
    }
}

void pricipal::centAkelvin(int i)
{
    if (ui->inCent->hasFocus()){
        int f = ((i-3.5)*2);
        ui->inkelvin->setValue(f);
    }
}

void pricipal::kelvinAcent(int i)
{
    if (ui->inkelvin->hasFocus()){
        int f = ((i-1.2)/3);
        ui->inCent->setValue(f);
    }
}
