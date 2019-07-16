/*******************************************************************
** Author:      Jacob Hendry
** Date:        3/6/2019
** Description: This program will define the prototypes functions
**              of the LineSegment header file such as the default
**              constructor, construtor, as well as functions to
**              find the length and slope.
*******************************************************************/

#include "LineSegment.hpp"

/********************************************************
*                    Constructor
* This constructor will set point one to point value 1 
* and point two to value 2.
*********************************************************/
LineSegment::LineSegment(Point* pntVal1, Point* pntVal2)
{
	setEnd1(pntVal1);
	setEnd2(pntVal2);
}

void LineSegment::setEnd1(Point* pntVal1)
{
	pnt1 = pntVal1;
}

Point* LineSegment::getEnd1()
{
	return pnt1;
}

void LineSegment::setEnd2(Point* pntVal2)
{
	pnt2 = pntVal2;
}

Point* LineSegment::getEnd2()
{
	return pnt2;
}

/*********************************************************
*                      Lengh Function
* This length function will determine the distance from
* the first point to the two point.
*********************************************************/
double LineSegment::length()
{
	return pnt1->distanceTo(*pnt2);
}

/********************************************************
*                    Slope Function
* This function will calculate and return the slope of 
* the line segment.
********************************************************/
double LineSegment::slope()
{
	double x1 = pnt1->getXCoord();
	double x2 = pnt2->getXCoord();
	double y1 = pnt1->getYCoord();
	double y2 = pnt2->getYCoord();

	return (y2 - y1) / (x2 - x1);
}