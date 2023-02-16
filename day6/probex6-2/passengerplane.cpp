#include "passengerplane.h"

// Constructor
PassengerPlane::PassengerPlane()
{
	m_type = "passenger plane";
}

// get the type
string PassengerPlane::getType()
{
	return m_type;
}

// Fly
void PassengerPlane::fly()
{
	cout << "Fly to the destination with passengers." << endl;
}

// Carry passengers
void PassengerPlane::carryPassengers()
{
	cout << "Carry passengers to their destinations." << endl;
}