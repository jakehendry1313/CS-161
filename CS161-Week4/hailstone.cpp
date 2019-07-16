/*************************************************************
**Author:
**Date:
**Description:
************************************************************/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
*/

/**********************************************************
This function will take a user inputted number and determine
whether it's odd or even and then uses specific algorithms
to determine how many times it takes to return to 1.
**********************************************************/
int hailstone(int num)
{
	int count = 0;

	while (num != 1)
	{
		if (num % 2 == 0)  //This if statement determines if the number is even
		{
			num = num / 2;
			count++;
		}
		else               //This else statement will determine if the number is odd.
		{
			num = 3 * num + 1;
			count++;
		}
	}
	return count;
}

/*
int main()
{
	int numInput;

	cout << "Enter a positive integer: " << endl;
	cin >> numInput;
	cout << "Number of step taken to get 1: " << hailstone(numInput) << endl;

	return 0;
}
*/