#pragma once
#include <iostream>
#include <array>

template <size_t N>
class Board {
private:
	std::array<int, N> board;
	int boardSize;
public:
	Board():board{} {}; 
	void creator();
	void displayBoard();
	std::array<int, N>& getBoard();
};

template <size_t N>
void Board<N>::creator() {
	unsigned int elem = 0;
	//valid board before pushing into array
	for (unsigned int elem = 0; elem < N;elem+=2) {
		int number = std::rand() % 10;
		this->board[elem] = number;
	}
}


template <size_t N>
void Board<N>::displayBoard() {

	unsigned int elem = 0;
	std::cout << "==============================" << std::endl;

	for (auto const &i : this->board) {
		if ((elem % 3 == 0) && (elem != 0)) {
			std::cout << "|";
		}

		if ((elem % 9 == 0) && (elem != 0)){
			std::cout << "\n";
		}

		if ((elem % 27 == 0) && (elem != 0)){
			std::cout << "==============================" << std::endl;
		}

		std::cout << " " << i << " ";
		elem++;
	}

	std::cout << "|" << std::endl;
	std::cout << "==============================" << std::endl;
}

template<size_t N>
std::array<int, N>& Board<N>::getBoard() {
	return this->board;
}