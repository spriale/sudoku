#pragma once

class BoardSolver{
private:
	int** boardSolved;
	size_t rows;
	size_t columns;

public:
	BoardSolver(int **board) :boardSolved{board} {};
	void solve();
	friend void displayBoard(int** board, const size_t& rows, const size_t& columns);

	int** getBoard();
	size_t getRows();
	size_t getColumns();

};



