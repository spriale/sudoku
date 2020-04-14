#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "..\..\include\boardCreatorDynamic.hpp"


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

const int sizeBoard = 9;

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
	int** board;
	//BoardCreator<sizeBoard, sizeBoard> boardCreator;

};
#endif // MAINWINDOW_H
