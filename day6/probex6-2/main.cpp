#include <iostream>
#include "airplane.h"
#include "fighteraircraft.h"
#include "passengerplane.h"

using namespace std;

int main()
{
	// create an instance of the fighter plane class
	FighterAircraft* fighter = new FighterAircraft();
	PassengerPlane* airlinear = new PassengerPlane();
	// Processing of the fighter class
	fighter->fly(); // fly
	fighter->fight(); // fighter->fight()
	// Passenger Plane class processing
	airlinear->fly(); // fly
	airlinear->carryPassengers(); // carry passengers
	// delete process
	delete fighter;
	delete airlinear;
	return 0;
}