#include "formulaire.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Formulaire w;
    w.show();
    return a.exec();
}
