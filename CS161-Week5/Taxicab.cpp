/***************************************************************
** Author:		Jacob Hendry
** Date:		2/6/2019
** Description: This program will determine the distance of how 
**				far a taxi cab will move. This file will include
**				the header file to define every function and 
**				variable.
****************************************************************/

#include "Taxicab.hpp"
#include <cmath>

/*****************************************************
*				Default Constructor
* This default constructor will initialize the member
* variables xCoord, yCoord, and distanceTraveled.
*****************************************************/
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distanceTraveled = 0;
}

/****************************************************
*					Constructor
* This constructor will hold the parameters for the
* x coordinate, the y coordinate and the distance
* the taxi cab has traveled.
****************************************************/
Taxicab::Taxicab(int x, int y)
{
	xCoord = x;
	yCoord = y;
	distanceTraveled = 0;
}

int Taxicab::getXCoord()
{
	return xCoord;
}

int Taxicab::getYCoord()
{
	return yCoord;
}

int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}

/********************************************************
*					moveX Function
* This function will move the x point a specific amount
* of positions and then determines the total distance
* of the x coordinate.
********************************************************/
void Taxicab::moveX(int dist)
{
	xCoord += dist;
	distanceTraveled += abs(dist);
}

/********************************************************
*					moveY Function
* This function will move the y point a specific amount
* of positions just like the x point and then determines
* the total distance of the y coordinate.
*********************************************************/
void Taxicab::moveY(int dist)
{
	yCoord += dist;
	distanceTraveled += abs(dist);
}