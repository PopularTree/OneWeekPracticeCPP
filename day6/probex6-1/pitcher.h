#ifndef _PITCHER_H_
#define _PITCHER_H_

#include "baseballplayer.h"

class Pitcher : public BaseballPlayer
{
public:
	// Constructor
	Pitcher(string name,int number);
	// Pitcher plays.
	void play();
};

#endif