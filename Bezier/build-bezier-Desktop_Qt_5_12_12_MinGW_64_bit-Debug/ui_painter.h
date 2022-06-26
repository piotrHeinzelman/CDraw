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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_painter
{
public:
    QAction *saveMenuItem;
    QAction *QuitMenuItem;
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *delButton;
    QLineEdit *inputStart;
    QLabel *labelWgt;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *exitButton;
    QLineEdit *inputCenter;
    QLineEdit *inputEnd;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *painter)
    {
        if (painter->objectName().isEmpty())
            painter->setObjectName(QString::fromUtf8("painter"));
        painter->resize(800, 600);
        painter->setMouseTracking(true);
        saveMenuItem = new QAction(painter);
        saveMenuItem->setObjectName(QString::fromUtf8("saveMenuItem"));
        QuitMenuItem = new QAction(painter);
        QuitMenuItem->setObjectName(QString::fromUtf8("QuitMenuItem"));
        QuitMenuItem->setCheckable(false);
        centralwidget = new QWidget(painter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 10, 80, 21));
        delButton = new QPushButton(centralwidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setGeometry(QRect(100, 10, 80, 21));
        inputStart = new QLineEdit(centralwidget);
        inputStart->setObjectName(QString::fromUtf8("inputStart"));
        inputStart->setGeometry(QRect(10, 40, 51, 21));
        labelWgt = new QLabel(centralwidget);
        labelWgt->setObjectName(QString::fromUtf8("labelWgt"));
        labelWgt->setGeometry(QRect(190, 10, 601, 561));
        labelWgt->setCursor(QCursor(Qt::PointingHandCursor));
        labelWgt->setMouseTracking(false);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(70, 550, 51, 21));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(10, 550, 51, 21));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(130, 550, 51, 21));
        inputCenter = new QLineEdit(centralwidget);
        inputCenter->setObjectName(QString::fromUtf8("inputCenter"));
        inputCenter->setGeometry(QRect(70, 40, 51, 21));
        inputEnd = new QLineEdit(centralwidget);
        inputEnd->setObjectName(QString::fromUtf8("inputEnd"));
        inputEnd->setGeometry(QRect(130, 40, 51, 21));
        painter->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(painter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        painter->setStatusBar(statusbar);

        retranslateUi(painter);

        QMetaObject::connectSlotsByName(painter);
    } // setupUi

    void retranslateUi(QMainWindow *painter)
    {
        painter->setWindowTitle(QApplication::translate("painter", "painter", nullptr));
        saveMenuItem->setText(QApplication::translate("painter", "Save", nullptr));
        QuitMenuItem->setText(QApplication::translate("painter", "Quit", nullptr));
        addButton->setText(QApplication::translate("painter", "Add", nullptr));
        delButton->setText(QApplication::translate("painter", "Remove", nullptr));
        inputStart->setText(QApplication::translate("painter", "10,11", nullptr));
        labelWgt->setText(QString());
        saveButton->setText(QApplication::translate("painter", "Save", nullptr));
        loadButton->setText(QApplication::translate("painter", "Load", nullptr));
        exitButton->setText(QApplication::translate("painter", "Exit", nullptr));
        inputCenter->setText(QApplication::translate("painter", "22,23", nullptr));
        inputEnd->setText(QApplication::translate("painter", "30,32", nullptr));
    } // retranslateUi

};

namespace Ui {
    class painter: public Ui_painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
