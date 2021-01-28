#include "fullcalculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FullCalculator w;
    w.show();
    return a.exec();
}
