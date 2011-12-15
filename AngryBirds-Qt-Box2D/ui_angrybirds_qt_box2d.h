/********************************************************************************
** Form generated from reading UI file 'angrybirds_qt_box2d.ui'
**
** Created: Thu Dec 15 14:28:48 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANGRYBIRDS_QT_BOX2D_H
#define UI_ANGRYBIRDS_QT_BOX2D_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AngryBirds_Qt_Box2DClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AngryBirds_Qt_Box2DClass)
    {
        if (AngryBirds_Qt_Box2DClass->objectName().isEmpty())
            AngryBirds_Qt_Box2DClass->setObjectName(QString::fromUtf8("AngryBirds_Qt_Box2DClass"));
        AngryBirds_Qt_Box2DClass->resize(800, 600);
        centralwidget = new QWidget(AngryBirds_Qt_Box2DClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AngryBirds_Qt_Box2DClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AngryBirds_Qt_Box2DClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AngryBirds_Qt_Box2DClass->setMenuBar(menubar);
        statusbar = new QStatusBar(AngryBirds_Qt_Box2DClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AngryBirds_Qt_Box2DClass->setStatusBar(statusbar);

        retranslateUi(AngryBirds_Qt_Box2DClass);

        QMetaObject::connectSlotsByName(AngryBirds_Qt_Box2DClass);
    } // setupUi

    void retranslateUi(QMainWindow *AngryBirds_Qt_Box2DClass)
    {
        AngryBirds_Qt_Box2DClass->setWindowTitle(QApplication::translate("AngryBirds_Qt_Box2DClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AngryBirds_Qt_Box2DClass: public Ui_AngryBirds_Qt_Box2DClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANGRYBIRDS_QT_BOX2D_H
