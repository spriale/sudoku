#include "include/boardCreatorDynamic.hpp"
//#include "include/boardCreatorStatic.hpp"
#include "include/boardSolver.hpp"
//#include "board.hpp"

#include <iostream>
void displayBoard(int **board,const size_t &rows, const size_t &columns) {

	std::cout << "=============================" << std::endl;
	for (int row = 0;row < rows; ++row) {
		if ((row % 3 == 0) && (row != 0)) {
			std::cout << "=============================" << std::endl;
		}
		for (int col = 0; col < columns; ++col) {

			if ((col % 3 == 0) && (col != 0)) {
				std::cout << "|";
			}

			std::cout << " " << board[row][col] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "=============================" << std::endl;
}


int main() {

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 9;
	//Board board(sizeBoard, sizeBoard);

	//BoardCreator<sizeBoard, sizeBoard> boardCreator(board.getBoard());
	BoardCreator<sizeBoard, sizeBoard> boardCreator;
	boardCreator.creator();
	displayBoard(boardCreator.getBoard(), boardCreator.getRows(), boardCreator.getColumns());

	BoardSolver boardSolver(boardCreator.getBoard());
	boardSolver.solve();
	displayBoard(boardSolver.getBoard(), sizeBoard, sizeBoard);
	
	return 0;

}