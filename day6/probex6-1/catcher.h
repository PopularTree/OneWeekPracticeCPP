#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "baseballplayer.h"

class Catcher : public BaseballPlayer
{
public:
	// Constructor
	Catcher(string name, int number);
	// catcher plays
	void play();
};

#endif