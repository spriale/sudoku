#include <iostream>
#include "sudoku.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	std::cout << "Create sudoku board.." << std::endl;
	
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
