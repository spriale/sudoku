#include "boardSolver.hpp"
#include <iostream>
#include <tuple>

bool BoardSolver::validElementToInsert(int _posRow, int _posCol, int value)
{
	//std::cout << "value : " << value << ";pos = " << _posRow << ", " << _posCol << std::endl;
	//this->displayBoard();
	// check row validity
	for(int col = 0; col < this->columns; ++col)
	{
		if((this->boardSolved[_posRow][col] == value) && (_posCol != col))
		{
			return false;
		}
	}
	// check column validity
	for(int row = 0; row < this->rows; ++row)
	{
		if((this->boardSolved[row][_posCol] == value) && (_posRow != row))
		{
			return false;
		}
	}

	//check square (from previous rows)
	for(int row = 0; row < 3; ++row)
	{
		for(int col = 0; col < 3; ++col)
		{
			int currentRow = (_posRow / 3) * 3 + row;
			int currentCol= (_posCol / 3) * 3 + col;

			if((this->boardSolved[currentRow][currentCol] == value) && (_posRow != currentRow) && (_posCol != currentCol))
			{
				return false;
			}
		}
	}


	return true;
}

bool BoardSolver::solve()
{

	int _posRow;
	int _posCol;

	auto position = getZeroElement();
	if(position)
	{
		std::tie(_posRow, _posCol) = position.value();
	}
	else
	{
		std::cout << "solved" << std::endl;
		return true;
	}

	for(int value = 1; value < 10; ++value)
	{
		if(this->validElementToInsert(_posRow, _posCol, value))
		{
			this->boardSolved[_posRow][_posCol] = value;
			if(solve())
			{
				return true;
			}
			// if for loop ends, solved() is false and current pos is zero
			this->boardSolved[_posRow][_posCol] = 0;
		}
	}

	return false;
}

std::optional<std::pair<int, int>> BoardSolver::getZeroElement()
{
	// find  zero elements
	for(int row = 0; row < this->rows; ++row)
	{
		for(int col = 0; col < this->columns; ++col)
		{
			if(this->boardSolved[row][col] == 0)
			{
				return std::make_pair(row, col);
			}
		}
	}
	return {};
}

int** BoardSolver::getBoard()
{
	return this->boardSolved;
}

size_t BoardSolver::getRows()
{
	return this->rows;
}

size_t BoardSolver::getColumns()
{
	return this->columns;
}
