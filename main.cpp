#include "derma.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Derma w;
    w.show();

    return a.exec();
}
