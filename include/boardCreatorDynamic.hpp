#pragma once
#include <iostream>
#include <array>
#include "board.hpp"

template <size_t N1, size_t N2>
class BoardCreator {
private:
	int** board;
	size_t rows;
	size_t columns;

	//Board boardT;
public:
	BoardCreator() : board{}, rows{ N1 }, columns{ N2 }{};
	//BoardCreator(int **board) : board{board}, rows{ N1 }, columns{ N2 }{};
	/*BoardCreator(int** board) : board{ board }, Board{ N1,N2 }{
		this->board = new int* [rows];
		for (int row = 0;row < rows;row++) {
			this->board[row] = new int[columns];
			for (int col = 0;col < columns;col++) {
				this->board[row][col] = 0;
			}
		}
	};*/
	
	
	void creator();
	bool isValid(int& value, int& row, int& col);

	int** getBoard();
	size_t getRows();
	size_t getColumns();
};



template <size_t N1, size_t N2>
void BoardCreator<N1,N2>::creator() {

	this->board= new int*[N1];
	//create 2 pointer with 1 array each
	for (int row = 0;row < N1;row++) {
		this->board[row] = new int[N2];
		for (int col = 0;col < N2;col++) {
			int number = std::rand() % 10;
			//valid boardElement before pushing into array
			if (isValid(number, row,col)) {
				this->board[row][col] = number;
			}
			else {
				this->board[row][col] = 0;
			}
		}
	}
}

template <size_t N1, size_t N2>
bool BoardCreator<N1,N2>::isValid(int& value, int& row, int& col){
	//check row

	if ((col == 0) && (row ==0)) {
		return true;
	}
	for (int i = col;i > 0;i--) {
		if (board[row][col-i] == value) {		
			return false;
		}
	}
	//check column
	for (int j = row;j > 0;j--) {
		if (board[row-j][col] == value) {
			return false;
		}
	}

	//check square (from previous rows)
	if (row != 0) {
		for (int l = row; l > 0;l--) {
			for (int m = 0;m < 3;m++) {			
				if (board[row-l][(col/3)*3 + m] == value)  {
					return false;
				}
			}
		}
	}
	return true;
}
/*
template <size_t N1, size_t N2>
void BoardCreator<N1,N2>::displayBoard() {

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
*/

template <size_t N1, size_t N2>
int** BoardCreator<N1,N2>::getBoard() {	
	return this->board;
}

template <size_t N1, size_t N2>
size_t BoardCreator<N1, N2>::getRows() {
	return this->rows;
}

template <size_t N1, size_t N2>
size_t BoardCreator<N1, N2>::getColumns() {
	return this->columns;
}