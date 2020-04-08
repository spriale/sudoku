#include "include/boardCreatorDynamic.hpp"
//#include "include/boardCreatorStatic.hpp"
#include "include/boardSolver.hpp"
#include <iostream>

int main()
{

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 9;

	BoardCreator<sizeBoard, sizeBoard> boardCreator;
	boardCreator.creator();
	boardCreator.displayBoard();

	BoardSolver boardSolver(boardCreator.getBoard(), sizeBoard, sizeBoard);
	boardSolver.solve();
	boardSolver.displayBoard();

	return 0;
}
