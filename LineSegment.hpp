/******************************************************************
** Author:      Jacob Hendry
** Date:        3/6/2019
** Description: This header file will hold prototypes for a class
**              called LineSegment. It will also contain prototypes
**              for get and set functions as well as for length 
**              and slope functions.
******************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point* pnt1;
	Point* pnt2;
public:
	LineSegment(Point*, Point*);
	void setEnd1(Point*);
	Point* getEnd1();
	void setEnd2(Point*);
	Point* getEnd2();
	double length();
	double slope();
};

#endif