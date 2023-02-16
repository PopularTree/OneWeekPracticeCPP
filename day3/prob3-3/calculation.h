#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

using namespace std;

class Calculation
{
private:
	// First number
	int m_number1;
	// Second number
	int m_number2;
public:
	// set first number
	void setNumber1(int n);
	// set second number
	void setNumber2(int n);
	// get first number
	int getNumber1();
	// get second number
	int getNumber2();
	// add first number and second number
	int add();
	// substract first number and second number
	int sub();
};

#endif