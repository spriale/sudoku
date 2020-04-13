/********************************************************************************
** Form generated from reading UI file 'sudoku.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sudokuClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sudokuClass)
    {
        if (sudokuClass->objectName().isEmpty())
            sudokuClass->setObjectName(QString::fromUtf8("sudokuClass"));
        sudokuClass->resize(600, 400);
        menuBar = new QMenuBar(sudokuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        sudokuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sudokuClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sudokuClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(sudokuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sudokuClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(sudokuClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sudokuClass->setStatusBar(statusBar);

        retranslateUi(sudokuClass);

        QMetaObject::connectSlotsByName(sudokuClass);
    } // setupUi

    void retranslateUi(QMainWindow *sudokuClass)
    {
        sudokuClass->setWindowTitle(QCoreApplication::translate("sudokuClass", "sudoku", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sudokuClass: public Ui_sudokuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
