#include "fundcalc.h"

FundCalc::FundCalc() : m_number1(0), m_number2(0)
{
}

// Set the first number
void FundCalc::setNumber1(double number)
{
	m_number1 = number;
}

// Set the second number
void FundCalc::setNumber2(double number)
{
	m_number2 = number;
}

// Get the fist number
double FundCalc::getNumber1()
{
	return m_number1;
}

// Get the second number
double FundCalc::getNumber2()
{
	return m_number2;
}

// Outputs the sum of two numbers
double FundCalc::add()
{
	return m_number1 + m_number2;
}

// Outputs the difference of two numbers
double FundCalc::sub()
{
	return m_number1 - m_number2;
}