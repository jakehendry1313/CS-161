/**********************************************************************
** Author:		Jacob Hendry
** Date:		1/15/19
** Description: This program will ask the user for a temperature in
**				Celsius. It will then convert the Celsius temperature
**				into Fahrenheit.
**********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double celsiusTemp, fahrenheitTemp;

	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsiusTemp;

	fahrenheitTemp = (9.0 / 5.0) * celsiusTemp + 32.0;

	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fahrenheitTemp << endl;

	return 0;
}