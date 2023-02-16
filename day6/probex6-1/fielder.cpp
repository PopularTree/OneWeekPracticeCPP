#include "fielder.h"
 
Fielder::Fielder(string name,int number) 
{
	m_name = name;
	m_number = number;
	m_kind = "fielder";
}

// the pitcher plays
void Fielder::play()
{
	cout << "handle a batted ball" << endl;
}