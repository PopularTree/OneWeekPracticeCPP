#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector
{
private:
	double m_x;
	double m_y;
public:
	// constructor
	Vector();
	// constructor with arguments
	Vector(double x, double y);
	// component setting
	void set(double x, double y);
	// get component of x
	double getX();
	// get component of y
	double getY();
};

#endif