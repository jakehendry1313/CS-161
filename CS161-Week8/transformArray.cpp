/**********************************************************************
** Author:      Jacob Hendry
** Date:        2/27/2019
** Description: In this program, a void function named transformArray
**              will take two parameters, a reference to a pointer to
**              a dynamically allocated array of ints and the size of
**              an array. It will create a new array with one added to
**              the old array numbers as well. 
**********************************************************************/
/*
#include <iostream>

using std::cout;
using std::endl;
*/
/***************************************************
*            transformArray Function
* This function will take the size of an array
* from the main function and double its size.
* It will then take the numbers from the original
* array and add one to each number. It finally will
* display both the original and new array's numbers.
****************************************************/
void transformArray(int *&arr, int size)
{
	int *newArray = new int[size * 2];

	for (int i = 0; i < size; ++i)
	{
		newArray[i] = arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		newArray[size + i] = arr[i] * 2;
	}

	delete[]arr;
	arr = newArray;
}
/*
int main()
{
	int *myArray = new int[3];
	myArray[0] = 4;
	myArray[1] = 2;
	myArray[2] = 5;

	transformArray(myArray, 3);

	for (int i = 0; i < 6; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[]myArray;

	return 0;
}
*/