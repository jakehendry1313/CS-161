/********************************************************************
** Author:		Jacob Hendry
** Date:		2/13/2019
** Description: This team header file will hold the prototypes for
**				each position of the team. The positions will include
**				point guard, shooting guard, small forward, power
**				forwards, and center. 
********************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;

public:
	Team(Player p1, Player p2, Player p3, Player p4, Player p5);

	void setPointGuard(Player p);
	Player getPointGuard();

	void setShootingGuard(Player p);
	Player getShootingGuard();

	void setSmallForward(Player p);
	Player getSmallForward();

	void setPowerForward(Player p);
	Player getPowerForward();

	void setCenter(Player p);
	Player getCenter();

	int totalPoints();
};

#endif