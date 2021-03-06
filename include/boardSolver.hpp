#pragma once
#include "board.hpp"
#include <iostream>
#include <optional>

class BoardSolver : public Board
{
private:
	int** boardSolved;
	size_t rows;
	size_t columns;

public:
	BoardSolver(int** board, size_t rows, size_t columns)
		: boardSolved{board}
		, rows{rows}
		, columns{columns} {};

	void displayBoard() override
	{

		std::cout << "=============================" << std::endl;
		for(int row = 0; row < this->rows; ++row)
		{
			if((row % 3 == 0) && (row != 0))
			{
				std::cout << "=============================" << std::endl;
			}
			for(int col = 0; col < this->columns; ++col)
			{

				if((col % 3 == 0) && (col != 0))
				{
					std::cout << "|";
				}

				std::cout << " " << this->boardSolved[row][col] << " ";
			}
			std::cout << "\n";
		}
		std::cout << "=============================" << std::endl;
	}

	bool BoardSolver::validElementToInsert(int _posRow, int _posCol, int value);
	std::optional<std::pair<int, int>> getZeroElement();
	bool solve();

	int** getBoard();
	size_t getRows();
	size_t getColumns();
};
