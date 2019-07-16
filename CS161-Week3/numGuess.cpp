/*********************************************************************
** Author:		Jacob Hendry
** Date:		1/23/2019
** Description:	This program will prompt the user to enter an integer
**				for a player to try and guess. The program will print
**				out that the player either "guessed too high, guessed
**				too low, or let's the player how many tries it took to
**				guess the number.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int userNumber, count = 1;
	int guess;

	cout << "Enter the number for the player to guess." << endl;
	cin >> userNumber;

	cout << "Enter your guess." << endl;
	cin >> guess;

	do
	{
		if (guess > userNumber)
		{
			cout << "Too high - try again." << endl;
			cin >> guess;
		}

		else if (guess < userNumber)
		{
			cout << "Too low - try again." << endl;
			cin >> guess;
		}

		count++;
	} 
	while (userNumber != guess);

	cout << "You guessed it in " << count << " tries." << endl;
	
	return 0;
}