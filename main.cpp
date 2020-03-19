//#include "include/boardDynamicArray.hpp"
#include "include/boardStaticArray.hpp"
#include <iostream>
#include <array>

int main() {

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 9;
	Board<sizeBoard,sizeBoard> board;
	board.creator();
	std::array<std::array<int,sizeBoard>, sizeBoard> testBoard = board.getBoard();
	//int** tstboard= board.getBoard();
	board.displayBoard();

	return 0;

}