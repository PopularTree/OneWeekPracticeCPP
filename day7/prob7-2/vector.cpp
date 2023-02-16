#include "vector.h"

// constructor
Vector::Vector() : m_x(0), m_y(0)
{

}

// constructor with arguments
Vector::Vector(double x, double y)
{
	m_x = x;
	m_y = y;
}

// component setting
void Vector::set(double x, double y)
{
	m_x = x;
	m_y = y;
}

// get component of x
double Vector::getX()
{
	return m_x;
}

// get component of y
double Vector::getY()
{
	return m_y;
}