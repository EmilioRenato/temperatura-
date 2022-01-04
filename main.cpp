#include "pricipal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pricipal w;
    w.show();
    return a.exec();
}
