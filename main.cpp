#include "include/board.hpp"
#include <iostream>

int main() {

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 81;
	Board<sizeBoard> board;
	board.creator();
	std::array<int,sizeBoard> testBoard = board.getBoard();
	board.displayBoard();

	return 0;

}