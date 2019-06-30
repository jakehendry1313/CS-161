/************************************************************************
** Author:		Jacob Hendry
** Date:		1/23/2019
** Description: This program will prompt the user enter a file name to 
**				read all information in that file. If it is not there, 
**				it will say "cannot access file." It will also open up
**				the file for the user to create a file and write to it.
************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::string;

int main()
{
	string fileName;
	int numValues = 0;
	double value,
		   sum = 0.0;

	cout << "Please enter your filename." << endl;
	cin >> fileName;

	ifstream inputFile;
	inputFile.open(fileName);

	if (inputFile.fail())
		cout << "could not access file" << endl;
	else
	{
		while(inputFile >> value)
		{
			numValues++;
			sum += value;
		}

		cout << "result written to sum.txt" << endl;
	
	}

	inputFile.close();

	ofstream outputFile;
	outputFile.open("sum.txt");

	outputFile << sum;

	outputFile.close();

	return 0;
}