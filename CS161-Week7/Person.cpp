/***********************************************************
** Author:		Jacob Hendry
** Date:		2/20/2019
** Description: This program will define the prototypes from
**				the Person header file for the person's name
**				age. It will also define the getter function
**				for person's name and age.
***********************************************************/

#include "Person.hpp"

/***************************************************
*				Default Constructor
* This default constructor will define the person's
* name to be set to a specific name and the age will
* be set to 0.
***************************************************/
Person::Person()
{
	name = " ";
	age = 0;
}

/**************************************************
*					Constructor
* This constructor is used to rename the variable
* name to the person's name as well as the variable 
* age to the person's age to return to the main
* function.
**************************************************/
Person::Person(std::string perName, double perAge)
{
	name = perName;
	age = perAge;
}

std::string Person::getName()
{
	return name;
}

double Person::getAge()
{
	return age;
}