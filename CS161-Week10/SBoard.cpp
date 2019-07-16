/**********************************************************************
** Author:      Jacob Hendry
** Date:        3/14/2019
** Description: In this program, the functions will be implemented 
**              from the header file. The function prototypes such as
**              getNumTokens, placeToken, and readPlaceMentFile, as
**              well as the default constructor SBoard will be defined
**********************************************************************/

#include "SBoard.hpp"
#include <fstream>

using std::string;
using std::ifstream;
/*********************************************
*             Default Constructor
* This default constructor will initialize the
* number of tokens as well as setting each
* space of the 10x10 grid with a '.'
*********************************************/
SBoard::SBoard()
{
	numOfTokens = 0;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			grid[i][j] = '-';
}

int SBoard::getNumTokens()
{
	return numOfTokens;
}

/********************************************************
*                  placeToken Function
* This function will place an 'x' to represent a token
* if there isn't already a space taken up or it's not
* out of range of 0-9 as well as return the 
* squaresCompleted.
*********************************************************/
int SBoard::placeToken(int row, int column)
{
	if (grid[row][column] == 'x' || row < 0 || row > 9 
		|| column < 0 || column > 9)

		return -1;
	else
	{
		grid[row][column] = 'x';
	}

	numOfTokens++;

	return squaresCompleted(row, column);
}
/*********************************************************
*                   squaresCompleted Function
* This function will determine how many squares have been
* completed based off the 'x' in place and were the
* numbers from the file are read. 
*********************************************************/
int SBoard::squaresCompleted(int row, int col) {
	int square_count = 0;

	for (int i = 0; i < 10; i++) {
		
		if (i != col && grid[row][i] == 'x') {
			
			int a = (int)abs(i - col);
			
			if (row - a >= 0 && grid[row - a][col] == 'x') {
				
				if (grid[row - a][i] == 'x') {
					
					square_count++;
				}
			}

			
			if (row + a <= 9 && grid[row + a][col] == 'x') {
				
				if (grid[row + a][i] == 'x')
					square_count++;
			}
		}
	}

	return square_count;
}

/*************************************************************
*               readPlacementsFromFile Function
* This function will grab the numbers from the inserted file
* name and insert them into the placeToken function and will
* then be closed after.
*************************************************************/
void SBoard::readPlacementsFromFile(string fileName)
{
	int intValue1, intValue2;
	ifstream inputfile(fileName);

	while (inputfile >> intValue1 >> intValue2)
	{
		placeToken(intValue1, intValue2);
	}
	inputfile.close();
}