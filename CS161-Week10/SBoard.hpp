/*******************************************************************
** Author:      Jacob Hendry
** Date:        3/14/2019
** Description: This header file will hold the prototype functions
**              and data members for the SBoard.cpp. It will include
**              a default constructor, a getNumTokens method, and a
**              placeToken method as well as a method called
**              readPlacementsFromFile.
****************************************************************/

#ifndef SBOARD_HPP
#define SBOARD_HPP

#include <string>

class SBoard
{
private:
	char grid[10][10];
	int numOfTokens;
	int squaresCompleted(int, int);
public:
	SBoard();
	int getNumTokens();
	int placeToken(int, int);
	void readPlacementsFromFile(std::string);
};
#endif