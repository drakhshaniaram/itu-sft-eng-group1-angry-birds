#ifndef ANGRYBIRDS_QT_BOX2D_H
#define ANGRYBIRDS_QT_BOX2D_H

#include <QtGui/QMainWindow>
#include "ui_angrybirds_qt_box2d.h"

class AngryBirds_Qt_Box2D : public QMainWindow
{
    Q_OBJECT

public:
    AngryBirds_Qt_Box2D(QWidget *parent = 0);
    ~AngryBirds_Qt_Box2D();

private:
    Ui::AngryBirds_Qt_Box2DClass ui;
};

#endif // ANGRYBIRDS_QT_BOX2D_H
