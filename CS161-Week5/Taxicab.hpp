/***************************************************************
** Author:		Jacob Hendry
** Date:		2/6/2019
** Description: This header file will list all the protoypes of
**				functions and variables that will be used for
**				the taxicab.cpp file.
***************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
	private: 
		int xCoord;
		int yCoord;
		int distanceTraveled;

	public:
		Taxicab();
		Taxicab(int x, int y);
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int dist);
		void moveY(int dist);
};
#endif