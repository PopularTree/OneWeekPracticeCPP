#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class FighterAircraft : public AirPlane
{
public:
	// constructor
	FighterAircraft();
	// get type
	string getType();
	// fly
	void fly();
	// fight
	void fight();
};

#endif