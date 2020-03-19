#pragma once
#include <iostream>
#include <array>

template <size_t N1, size_t N2>
class Board {
private:
	int** board;
	int boardSize;
public:
	Board():board{} {}; 
	void creator();
	bool isValid(int& value, int& row, int& col);
	void displayBoard();
	int** getBoard();
};

template <size_t N1, size_t N2>
void Board<N1,N2>::creator() {

	this->board= new int*[N1];
	//create 2 pointer with 1 array each
	for (int row = 0;row < N1;row++) {
		this->board[row] = new int[N2];
		for (int col = 0;col < N2;col++) {
			int number = std::rand() % 10;
			//valid board before pushing into array
			if (isValid(number, row,col)) {
				this->board[row][col] = number;
			}
		}
	}
}

template <size_t N1, size_t N2>
bool Board<N1,N2>::isValid(int& value, int& row, int& col){
	//check row
	/*for (int i = 0;i < 9;i++) {
		if (board[index + i] == value) && (board[index] != i) {
			std::cout << "tst"
		}
	}*/
	//check column

	//check square
	return true;
}

template <size_t N1, size_t N2>
void Board<N1,N2>::displayBoard() {

	std::cout << "=============================" << std::endl;
	for (int row = 0;row < N1; ++row) {
		if ((row % 3 == 0) && (row != 0)) {
			std::cout << "=============================" << std::endl;
		}
		for (int col = 0; col < N2; ++col) {
			
			if ((col % 3 == 0) && (col!= 0)) {
				std::cout << "|";
			}
			
			std::cout << " " << this->board[row][col] << " ";
		}
		std::cout << "\n";		
	}
	std::cout << "=============================" << std::endl;
}


template <size_t N1, size_t N2>
int** Board<N1,N2>::getBoard() {	
	return this->board;
}