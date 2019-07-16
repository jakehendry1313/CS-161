/************************************************************************
** Author:		Jacob Hendry
** Date:		2/13/2019
** Description: This header file will hold the prototypes that will be
**				implemented in the player.cpp file. These prototypes will
**				include protoypes about a player's points, rebounds, and
**				assists as well as determining who has more points.
*************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

using std::string;

class Player
{
private:
	string name;
	int points;
	int rebounds;
	int assists;

public:
	Player();
	Player(string plyrName, int plyrPoints, int plyrRebounds, int plyrAssists);

	string getName();

	void setPoints(int plyrPoints);
	int getPoints();

	void setRebounds(int plyrRebounds);
	int getRebounds();

	void setAssists(int plyrAssists);
	int getAssists();

	bool hasMorePointsThan(Player plyr);
};

#endif