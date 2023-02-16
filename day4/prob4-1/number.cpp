#include "number.h"

Number::Number() : a(0), b(0)
{
	// Nothing to do
}

Number::~Number()
{
	// Nothing to do
}

// set two figure
void Number::setNumbers(int n1, int n2)
{
	a = n1;
	b = n2;
}

int Number::getAdd()
{
	return (a + b);
}