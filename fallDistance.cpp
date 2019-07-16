/*************************************************************
** Author:		Jacob Hendry
** Date:		1/30/2019
** Description: This program will determine the distance an
**				object falls due to gravity in a specific
**				time period given by the user.
*************************************************************

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
*/
/*************************************
*		Defining a function
* This function is defined to find the
* distance the object has fallen.
*************************************/
double fallDistance(double time)                //Function header
{
	double gravity = 9.8;
	double dist = 0.5 * gravity * (time * time);
	return dist;                                //Return the distance
}
/*
int main()
{
	double dist, time;

	cout << "Please enter a value for time." << endl;
	cin >> time;
	dist = fallDistance(time);

	cout << dist << endl;

	return 0;
}
*/