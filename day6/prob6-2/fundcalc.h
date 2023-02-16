#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_

class FundCalc
{
protected:
	double m_number1;	// first number
	double m_number2;	// second number
public:
	// constructor
	FundCalc();
	// set the first number
	void setNumber1(double number);
	// set the second number
	void setNumber2(double number);
	// get the first number
	double getNumber1();
	// get the second number
	double getNumber2();
	// outputs the sum of two numbers
	double add();
	// outputs the difference of two numbers
	double sub();
};

#endif