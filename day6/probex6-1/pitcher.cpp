#include "pitcher.h"

Pitcher::Pitcher(string name,int number)
{
	m_name = name;
	m_number = number;
	m_kind = "pitcher";
}

// Pitcher plays
void Pitcher::play()
{
	cout << "Pitching" << endl;
}