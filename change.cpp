/**********************************************************************
** Author:		Jacob Hendry
** Date:		1/15/19
** Description: This program will ask the user to input an amount less
**				than a dollar. It will then output the amount of each
**				coin it represents with the fewest amount of coins.
**********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int centsAmount, quarters, dimes, nickels, pennies, change;

	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> centsAmount;
	cout << "Your change will be:" << endl;
	
	quarters = centsAmount / 25;
	change = centsAmount % 25;

	dimes = change / 10;
	change = change % 10;
	
	nickels = change / 5;
	pennies = change % 5;

	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies << endl;

	system("pause");
	return 0;
}