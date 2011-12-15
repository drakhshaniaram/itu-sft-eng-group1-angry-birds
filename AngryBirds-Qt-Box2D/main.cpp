#include "angrybirds_qt_box2d.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AngryBirds_Qt_Box2D w;
    w.show();
    return a.exec();
}
