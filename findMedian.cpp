/*********************************************************************
** Author:		Jacob Hendry
** Date:		2/20/2019
** Description: This program will have a function called findMedian
**				that will sort an array and then determines the median
**				based on the size of the array.
*********************************************************************/

#include <algorithm>

using std::sort;

/*******************************************
*			findMedian Function
* This function will determine the median
* based on the size of an array and then
* returns it to the main function.
*******************************************/
double findMedian(int array[], int size)
{
	sort(array, array + size);
	double median;
	int midNumber;
	midNumber = size / 2;

	if (size % 2 == 0)    //This if statement will determine if the array is even.
	{
		median = (array[midNumber] + array[midNumber - 1]) / 2.0;
	}						
	else                 //This else statement will determine if the array is odd.
	{
		median = (array[midNumber]);
	}

	return median;       //The median will return to the main function.
}