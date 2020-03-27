#include "include/boardDynamicArray.hpp"
//#include "include/boardStaticArray.hpp"
#include <iostream>
#include <array>

int main() {

	std::cout << "Create sudoku board.." << std::endl;
	const size_t sizeBoard = 9;
	Board<sizeBoard, sizeBoard> board;
	//std::array<std::array<int,sizeBoard>, sizeBoard> testBoard = board.getBoard();
	//int** tstboard= board.getBoard();
	for (int testBoard = 0; testBoard < 7;testBoard++) {
		board.creator();
		board.displayBoard();
	}

	return 0;

}