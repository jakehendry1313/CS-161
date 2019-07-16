#include <iostream>
#include <string>
#include "SBoard.hpp"

using namespace std;

SBoard sboard;

int main()
{
	sboard.readPlacementsFromFile("4squares.txt");
	sboard.printBoard();

	cout << "Number of tokens placed: " << sboard.getNumTokens() << endl;

	return 0;
}