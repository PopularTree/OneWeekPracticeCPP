#include <iostream>
#include "fundcalc.h"
#include "newcalc.h"

using namespace std;

double NewCalc::mul(void)
{
	return m_number1 * m_number2;
}

double NewCalc::div(void)
{
	return m_number1 / m_number2;
}