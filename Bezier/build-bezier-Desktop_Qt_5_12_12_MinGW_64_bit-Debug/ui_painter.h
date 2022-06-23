/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_painter
{
public:
    QAction *actionSave;
    QAction *actionQuit;
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *delButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *painter)
    {
        if (painter->objectName().isEmpty())
            painter->setObjectName(QString::fromUtf8("painter"));
        painter->resize(800, 600);
        actionSave = new QAction(painter);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(painter);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setCheckable(false);
        centralwidget = new QWidget(painter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 10, 80, 21));
        delButton = new QPushButton(centralwidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setGeometry(QRect(100, 10, 80, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 81, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 601, 541));
        painter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(painter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        painter->setMenuBar(menubar);
        statusbar = new QStatusBar(painter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        painter->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(painter);

        QMetaObject::connectSlotsByName(painter);
    } // setupUi

    void retranslateUi(QMainWindow *painter)
    {
        painter->setWindowTitle(QApplication::translate("painter", "painter", nullptr));
        actionSave->setText(QApplication::translate("painter", "Save", nullptr));
        actionQuit->setText(QApplication::translate("painter", "Quit", nullptr));
        addButton->setText(QApplication::translate("painter", "Add", nullptr));
        delButton->setText(QApplication::translate("painter", "Remove", nullptr));
        label->setText(QApplication::translate("painter", "TextLabel", nullptr));
        menuFile->setTitle(QApplication::translate("painter", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class painter: public Ui_painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
