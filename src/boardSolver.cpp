#include "boardSolver.hpp"
#include <iostream>

void BoardSolver::solve() {
	boardSolved[0][1] = 12;
	std::cout << "solved" << std::endl;
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