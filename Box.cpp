/**********************************************************************
** Author:		Jacob Hendry
** Date:		2/6/2019
** Description: This program will determine a box's volume and surface
**				area based on the user's input of the height, length,
**				and width.
**********************************************************************/

#include "Box.hpp"

/****************************************************
*				Default Constructor
* The default constructor called Box is being defined
* and initializes each variable to 1. 
****************************************************/
Box::Box()
{
	height = 1;
	width  = 1;
	length = 1;
}

/**************************************************
*				Constructor
* This constructor holds three parameters for the 
* height, width, and length to return to the 
* main function to use for the volume and the 
* surface area.
**************************************************/
Box::Box(double hei, double wid, double len)
{
	height = hei;
	width = wid;
	length = len;
}

void Box::setHeight(double hei)
{
	height = hei;
}

void Box::setWidth(double wid)
{
	width = wid;
}

void Box::setLength(double len)
{
	length = len;
}

/***************************************************
*				calcVolume Function
* This function is used to determine the volume of
* a box based off the uer's input of height, width,
* and length.
***************************************************/
double Box::calcVolume()
{
	return height * width * length;
}

/**************************************************
*			calcSurfaceArea Function
* This function is created to determine the surface
* area of a box based off the user's input of 
* height, width, and length.
**************************************************/
double Box::calcSurfaceArea()
{
	return 2 * height * width + 2 * height * length + 2 * width * length;
}