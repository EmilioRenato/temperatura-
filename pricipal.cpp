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

