#include "calculation.h"

void Calculation::setNumber1(int n)
{
	m_number1 = n;
}

int Calculation::getNumber1()
{
	return (m_number1);
}

void Calculation::setNumber2(int n)
{
	m_number2 = n;
}

int Calculation::getNumber2()
{
	return (m_number2);
}

int Calculation::add()
{
	return (getNumber1() + getNumber2());
}

int Calculation::sub()
{
	return (getNumber1() - getNumber2());
}