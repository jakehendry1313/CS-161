/************************************************************************
** Author:		Jacob Hendry
** Date:		2/13/2019
** Description: This player.cpp file will implement the prototypes
**				from the header file by determining the player's 
**				name,setting the player's points, rebounds, and assists
**				as well as determining who has the most points.
************************************************************************/

#include "Player.hpp"       //This file needs to include the player header file

/**************************************************************
*					Default Constructor
* This default constructor is being defined here where the 
* variable 'name' will be used to name each player and the
* points, rebounds, and assists are set to the limit of -100.
**************************************************************/
Player::Player()
{
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

/************************************************************
*						Constructor
* This constructor is being used to rename each variable of
* the player's name, points, rebounds, and assists for them
* to be able to be passed back to the main function.
************************************************************/
Player::Player(string plyrName, int plyrPoints, int plyrRebounds, int plyrAssists)
{
	name = plyrName;
	points = plyrPoints;
	rebounds = plyrRebounds;
	assists = plyrAssists;
}

string Player::getName()
{
	return name;
}

void Player::setPoints(int plyrPoints)
{
	points = plyrPoints;
}

int Player::getPoints()
{
	return points;
}

void Player::setRebounds(int plyrRebounds)
{
	rebounds = plyrRebounds;
}

int Player::getRebounds()
{
	return rebounds;
}

void Player::setAssists(int plyrAssists)
{
	assists = plyrAssists;
}

int Player::getAssists()
{
	return assists;
}

/********************************************************
*			bool hasMorePointsThan Function
* This bool function will determine if a player has
* more points than another player. If this returns 
* true then it will place that player with the most 
* points first.
********************************************************/
bool Player::hasMorePointsThan(Player plyr)
{
	if (points > plyr.getPoints())
		return true;
	else
		return false;
}