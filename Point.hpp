/*****************************************************************
** Author:      Jacob Hendry
** Date:        3/6/2019
** Description: This header file will contain the prototypes for 
**              the x and y coordinate points as well as the get
**              and set functions for x and y. It will also hold
**              the protoype for the function distanceTo.
*****************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double xCoord;
	double yCoord;
public:
	Point();
	Point(double, double);
	void setXCoord(double);
	void setYCoord(double);
	double getXCoord();
	double getYCoord();
	double distanceTo(const Point&);
};
#endif