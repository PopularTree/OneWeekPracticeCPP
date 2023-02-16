#include "catcher.h"

Catcher::Catcher(string name, int number)
{
	m_name = name;
	m_number = number;
	m_kind = "catcher";
}

// the catcher plays
void Catcher::play()
{
	cout << "take the ball from the pitcher" << endl;
}