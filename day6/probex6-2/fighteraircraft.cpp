#include "fighteraircraft.h"

// constructor
FighterAircraft::FighterAircraft()
{
	m_type = "fighter aircraft";
}

// get type
string FighterAircraft::getType()
{
	return m_type;
}

// fly
void FighterAircraft::fly()
{
	cout << "flying to attack" << endl;
}

// fight
void FighterAircraft::fight()
{
	cout << "Flying to fight" << endl;
}
