/****************************************************************
** Author:		Jacob Hendry
** Date:		2/6/2019
** Description: This header file will include multiple prototypes
**				and variables to help define the dimensions of 
**				a box.
****************************************************************/

#ifndef BOX_HPP
#define BOX_HPP            //defines a class called Box

class Box
{
	private:
		double height, width, length;

	public:
		Box();
		Box(double hei, double wid, double len);
		void setHeight(double hei);
		void setWidth(double wid);
		void setLength(double len);
		double calcVolume();
		double calcSurfaceArea();
};
#endif