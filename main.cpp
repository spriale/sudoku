//#include "include/boardCreatorDynamic.hpp"

//#include "include/boardCreatorStatic.hpp"
#include "include/boardSolver.hpp"
#include <iostream>

#include "sudoku.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 9;
	const int difficultyLevel = 33;

	/*BoardCreator<sizeBoard, sizeBoard> boardCreator;	
	boardCreator.createBoard(difficultyLevel);
	//boardCreator.displayBoard();

	BoardSolver boardSolver(boardCreator.getBoard(), sizeBoard, sizeBoard);
	boardSolver.solve();
	boardSolver.displayBoard();*/
	
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();

	//return 0;
}
