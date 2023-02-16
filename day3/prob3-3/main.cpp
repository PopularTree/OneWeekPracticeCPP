#include "calculation.h"

int main(void)
{
	Calculation c;
	c.setNumber1(8);
	c.setNumber2(9);
	// display result of addition
	cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << endl;
	// display result of substraction
	cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << endl;
	return (0);
}
