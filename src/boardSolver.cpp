#include "boardSolver.hpp"
#include <iostream>
#include <tuple> 

bool BoardSolver::validElementToInsert(int _posRow,int _posCol, int value) {

	//check row validity
	for (int col= 0; col<this->columns;++col) {
		if ((this->boardSolved[_posRow][col] == value) && (_posCol !=col)){
			break;
		}
	}
	
	return true;
}

bool BoardSolver::solve() {

	int _posRow;
	int _posCol;

	auto position = getZeroElement();
	if (position) {
		std::tie(_posRow, _posCol) = position.value();
	}
	else {
		std::cout << "solved" << std::endl;
		return true;
	}
	
	for (int value = 1;value < 10;++value) {
		if (this->validElementToInsert(_posRow,_posCol, value)) {
			this->boardSolved[_posRow][_posCol] = value;
			if (solve()) { 
				return true;
			}
			//if for loop ends, solved() is false and current pos is zero
			this->boardSolved[_posRow][_posCol] = 0;			 
		}
			
	}

	return false;
}

std::optional<std::pair<int,int>> BoardSolver::getZeroElement() {
	//find  zero elements
	for (int row = 0;row < this->rows;++row) {
		for (int col = 0;col < this->columns;++col) {
			if (this->boardSolved[row][col] == 0) {
				return std::make_pair(row, col);
			}
		}
	}
	return {}; 
}

int** BoardSolver::getBoard() {
	return this->boardSolved;
}

size_t BoardSolver::getRows() {
	return this->rows;
}


size_t BoardSolver::getColumns() {
	return this->columns;
}