#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

// Passenger Plane class
class PassengerPlane : public AirPlane
{
public:
	// constructor
	PassengerPlane();
	// get type
	string getType();
	// fly()
	void fly();
	// carry passengers
	void carryPassengers();
};

#endif