/***********************************************************************************
** Author:      Jacob Hendry
** Date:        2/27/2019
** Description: In this program, there will be a void function called smallSort2
**              that takes as a parameters the addresses of 3 integer variables and
**              sorts them into ascending order.
***********************************************************************************/
/*
#include <iostream>

using std::cout;
using std::endl;
*/
/*****************************************************
*				smallSort2 Function
* This function will take three parameters' addresses
* and sorts them into ascending order from 1st to 3rd.
*****************************************************/
void smallSort2(int *first, int *second, int *third)
{
	int temp;

	if (*first > *second)
	{
		temp = *first;
		*first = *second;
		*second = temp;
	}

	if (*first > *third)
	{
		temp = *first;
		*first = *third;
		*third = temp;
	}

	if (*second > *third)
	{
		temp = *second;
		*second = *third;
		*third = temp;
	}
}
/*
int main()
{
	int first = 14;
	int second = -90;
	int third = 2;

	smallSort2(&first, &second, &third);
	cout << first << ", " << second << ", " << third << ", " << endl;

	return 0;
}
*/