#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sudoku.h"

class sudoku : public QMainWindow
{
	Q_OBJECT

public:
	sudoku(QWidget *parent = Q_NULLPTR);

private:
	Ui::sudokuClass ui;
};
