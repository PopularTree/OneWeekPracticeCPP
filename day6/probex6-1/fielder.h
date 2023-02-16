#ifndef _FIELDER_H_
#define _FIELDER_H_

#include "baseballplayer.h"

class Fielder : public BaseballPlayer
{
public:
	// Constructor
	Fielder(string name,int number);
	// fielder plays
	void play();
};
 
#endif