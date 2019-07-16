/***************************************************************************
** Author:		Jacob Hendry
** Date:		1/14/19
** Description: This program asks the user to enter five numbers and then
**				prints out the average of those numbers.
***************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double num1, num2, num3, num4, num5;
	double averageNum;

	cout << "Please enter five numbers." << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	averageNum = (num1 + num2 + num3 + num4 + num5) / 5;
	cout << "The average of those numbers is:" << endl;
	cout << averageNum << endl;

	return 0;
}