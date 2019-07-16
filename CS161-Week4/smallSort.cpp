/***********************************************************
**Author:		Jacob Hendry
**Date:			1/30/2019
**Description:  This program will take three integer 
**				parameters by reference and will then sort
**				three values into ascending order.
***********************************************************/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void getNumbers(int &firstIn, int &secondIn, int &thirdIn)
{
	cout << "Please enter the first integer." << endl;
	cin >> firstIn;
	cout << "Please enter the second integer." << endl;
	cin >> secondIn;
	cout << "Please enter the third integer." << endl;
	cin >> thirdIn;
}
*/

/************************************************************
This void function will pass three integers by reference to 
return in ascending order.
************************************************************/
void smallSort(int& num1, int& num2, int& num3)
{
	if (num2 < num1)         //Number 2 becomes Number 1
	   {
		int temp = num2;
		num2 = num1;
		num1 = temp;
	   }

	if (num3 < num2)		 //Number 3 becomes Number 2
	   {
		int temp = num3;
		num3 = num2;
		num2 = temp;
	   }
	if (num2 < num1)		 //Number 2 becomes Number 1 again.
	   {
		int temp = num2;
		num2 = num1;
		num1 = temp;
	   }

	return;					 //They should all be in ascending order.
}
/*
int main()
{
	int lowest, middle, highest;

	cout << "I will take the users number inputs and sort them in ascending order." << endl;

	getNumbers(lowest, middle, highest);

	smallSort(lowest, middle, highest);

	cout << "The numbers will now be in ascending order." << endl;

	cout << lowest << ", " << middle << ", " << highest << endl;

	return 0;
}
*/