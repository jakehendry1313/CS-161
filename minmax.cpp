/*************************************************************************************
** Author:		Jacob Hendry
** Date:		1/22/2019
** Description: For this program, the user will enter a desired amount of integers.
**				It will then determine the maximum (max) and minimum (min) number and
**				then will display them.
*************************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int max, min;
	int length, userInput;

	cout << "How many integers would you like to enter?" << endl;
	cin >> length;

	cout << "Please enter " << length << " integers." << endl;
	cin >> userInput;

	min = userInput;
	max = userInput;

	for (int index = 1; index < length; index++)
	{
		cin >> userInput;

		if (userInput < min)
		{
			min = userInput;
		}

		if (userInput > max)
		{
			max = userInput;
		}
	}

	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;
}
