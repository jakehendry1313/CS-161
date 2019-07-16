/**********************************************************************
** Author:		Jacob Hendry
** Date:		2/20/2019
** Description: This header file will create a class called Person
**				that will create the prototypes for a person's name
**				and age as well as using getter function for each.
**********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
private:
	std::string name;
	double age;
public:
	Person();
	Person(std::string perName, double perAge);
	std::string getName();
	double getAge();
};
#endif