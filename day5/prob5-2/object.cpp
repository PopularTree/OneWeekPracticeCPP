#include "object.h"

// Set initial values for static member variables
int Object::m_objectNum = 0;

// constructor
Object::Object()
{
	// Count the number of objects
	m_objectNum++;
}

// destructor
Object::~Object()
{
	// Count the number of objects
	m_objectNum--;
}

// Get the value of m_objectNum
int Object::getObjectNum()
{
	return (m_objectNum);
}