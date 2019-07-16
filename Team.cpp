/**********************************************************************
** Author:		Jacob Hendry
** Date:		2/13/2019
** Description: This team file will implement the prototype functions
**				listed in the team header file such as determining who
**				plays what position. This team file will also determine 
**				the total points for the team.
**********************************************************************/

#include "Team.hpp"			//This needs to include the team header file.
#include "Player.hpp"		//It also needs the player header file.

/**************************************************
*				Default Constructor
* This default constructor will set each player's
* position to a new variable to be able to be 
* passed to the main function.
**************************************************/
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	pointGuard = p1;
	shootingGuard = p2;
	smallForward = p3;
	powerForward = p4;
	center = p5;
}
/***************************************************
*			Getter and Setter Functions
* The file will now use getter and setter functions
* for all five positions of the team.
***************************************************/
void Team::setPointGuard(Player p)
{
	pointGuard = p;
}

Player Team::getPointGuard()
{
	return pointGuard;
}

void Team::setShootingGuard(Player p)
{
	shootingGuard = p;
}

Player Team::getShootingGuard()
{
	return shootingGuard;
}

void Team::setSmallForward(Player p)
{
	smallForward = p;
}

Player Team::getSmallForward()
{
	return smallForward;
}

void Team::setPowerForward(Player p)
{
	powerForward = p;
}

Player Team::getPowerForward()
{
	return powerForward;
}

void Team::setCenter(Player p)
{
	center = p;
}

Player Team::getCenter()
{
	return center;
}

/*****************************************************************
*						totalPoints Function
* This totalPoints function will take every point from each player
* of the team and combine them to determine the total amount for
* the team.
*****************************************************************/
int Team::totalPoints()
{
	return (pointGuard.getPoints() + shootingGuard.getPoints() +
		smallForward.getPoints() + powerForward.getPoints() + 
		center.getPoints());
}