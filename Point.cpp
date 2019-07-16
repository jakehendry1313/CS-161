/****************************************************************
** Author:      Jacob Hendry
** Date:        3/6/2019
** Description: This cpp file will implement the header files
**              prototypes functions such the Point class, set
**              and get the x and y points, as well as defining
**              the distanceTo function.
****************************************************************/

#include "Point.hpp"
#include <math.h>

/******************************************************
*                Default Constructor
* This default constructor will set the x coordinate
* and y coordinate to 0.
******************************************************/
Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

/****************************************************
*               Overloaded Constructor
* This constructor will set the x and y coordinates
* to a new named variable.
****************************************************/
Point::Point(double xCoorPnt, double yCoorPnt)
{
	setXCoord(xCoorPnt);
	setYCoord(yCoorPnt);
}

void Point::setXCoord(double xCoorPnt)
{
	xCoord = xCoorPnt;
}

double Point::getXCoord()
{
	return xCoord;
}

void Point::setYCoord(double yCoorPnt)
{
	yCoord = yCoorPnt;
}

double Point::getYCoord()
{
	return yCoord;
}

/***********************************************************
*                  distanceTo Function
* This function will determine the distance between one 
* point and another point passed by reference.
***********************************************************/
double Point::distanceTo(const Point &pnt)
{
	return sqrt(pow((pnt.xCoord - xCoord), 2) 
		+ pow((pnt.yCoord - yCoord), 2));
}