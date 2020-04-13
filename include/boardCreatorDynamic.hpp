#pragma once
#include "board.hpp"
#include <array>
#include <iostream>

#include <random>
#include <chrono>
#include <numeric>

template <size_t N1, size_t N2>
class BoardCreator : public Board
{
private:
	size_t rows;
	size_t columns;
	int** board;

public:
	BoardCreator()
		: rows{N1}
		, columns{N2}
		, board{} 
	{
		this->board = new int*[this->rows];
		for(int row = 0; row < this->rows; row++)
		{
			this->board[row] = new int[this->columns];
			for(int col = 0; col < this->columns; col++)
			{
				this->board[row][col] = 0;				
			}			
		}	
	};

	void displayBoard() override
	{

		std::cout << "=============================" << std::endl;
		for(int row = 0; row < N1; ++row)
		{
			if((row % 3 == 0) && (row != 0))
			{
				std::cout << "=============================" << std::endl;
			}
			for(int col = 0; col < N2; ++col)
			{

				if((col % 3 == 0) && (col != 0))
				{
					std::cout << "|";
				}

				std::cout << " " << board[row][col] << " ";
			}
			std::cout << "\n";
		}
		std::cout << "=============================" << std::endl;
	}

	bool fillGrid();
	void createBoard(const int& difficultyLevel);
	void removeElements(const int& difficulty);
	bool isValid(int& value, int& row, int& col);
	
	int** getBoard();
	size_t getRows();
	size_t getColumns();
};

template <size_t N1, size_t N2>
bool BoardCreator<N1, N2>::fillGrid()
{
	std::array<int, 9> possibleElements;
	//fill possible elements from 1 to 9.
	std::iota(possibleElements.begin(), possibleElements.end(), 1);
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	
	for(int row = 0; row < N1; row++)
	{
		
		for(int col = 0; col < N2; col++)
		{
			//check if value is zero
			if(this->board[row][col] == 0)
			{								
				std::shuffle(possibleElements.begin(), possibleElements.end(), std::default_random_engine(seed));
				for(auto& number : possibleElements)
				{	
					//valid boardElement before pushing into array		
					if(isValid(number, row, col)) 
					{
						this->board[row][col] = number;
						if(this->fillGrid())
						{
							return true;
						}
						//the if fillGrid() was analyzing the next element, therefore the previous element is set to zero.
						this->board[row][col] = 0;
					}
				}
				return false; 
			}		
		}
	}
	return true;
}

template <size_t N1,size_t N2>
void BoardCreator<N1, N2>::createBoard(const int &difficultyLevel)
{
	if(this->fillGrid())
	{
		this->removeElements(difficultyLevel);
		this->displayBoard();
	}
}

template <size_t N1, size_t N2>
void BoardCreator<N1, N2>::removeElements(const int& difficultyLevel)
{
	//remove elements according to difficultyLevel
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> distribution(0, 8);
	for(int removals = 0; removals < difficultyLevel; ++removals)
	{

		int col = distribution(generator);
		int row = distribution(generator);
		this->board[row][col] = 0;
	
	}

}

template <size_t N1, size_t N2>
bool BoardCreator<N1, N2>::isValid(int& value, int& row, int& col)
{

	//check row
	
	if((col == 0) && (row == 0))
	{
		return true;
	}
	
	for(int i = col; i > 0; i--)
	{
		if(this->board[row][col - i] == value)
		{
			return false;
		}
	}
	
	//check column
	for(int j = row; j > 0; j--)
	{
		if(this->board[row - j][col] == value)
		{
			return false;
		}
	}
	
	//check square (from previous rows)
	for(int l = row%3; l > 0; l--)
		{
			for(int m = 0; m < 3; m++)
			{
				if(this->board[row - l][(col / 3) * 3 + m] == value)
				{
					return false;
				}
			}
	}
	
	return true;
}

template <size_t N1, size_t N2>
int** BoardCreator<N1, N2>::getBoard()
{
	return this->board;
}

template <size_t N1, size_t N2>
size_t BoardCreator<N1, N2>::getRows()
{
	return this->rows;
}

template <size_t N1, size_t N2>
size_t BoardCreator<N1, N2>::getColumns()
{
	return this->columns;
}
