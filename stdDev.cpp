/******************************************************************
** Author:		Jacob Hendry
** Date:		2/20/2019
** Description: This file will define and create a function called
**				stdDev to determine the standard deviation of total
**				number of people's ages.
******************************************************************/

#include "Person.hpp"
#include <cmath>

/*******************************************
*		Standard Deviation Function
* This function will determine the standard
* deviation of people's ages.
*******************************************/
double stdDev(Person persons[], int totPersons)
{
	double stdDevTotal;
	double sum = 0.0, mean, stdDeviation = 0.0;
	int i;

	for (i = 0; i < totPersons; i++)     //Used to determine the mean
	{
		sum = sum + persons[i].getAge();
	}

	mean = sum / (double)(totPersons);

	for (i = 0; i < totPersons; i++)     //Used to find the standard deviation
	{
		stdDeviation += pow(persons[i].getAge() - mean, 2);
	}

	stdDevTotal = sqrt(stdDeviation / (double)(totPersons));

	return stdDevTotal;
}