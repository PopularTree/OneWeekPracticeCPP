#ifndef _NEWCALC_H_
#define _NEWCALC_H_

#include "fundcalc.h"

class NewCalc : public FundCalc
{
public:
	// outputs the multiplication of two numbers
	double mul();
	// outputs the division of two numbers
	double div();
};

#endif