#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <string>

using namespace std;

class AirPlane
{
protected:
	string m_type;
public:
	virtual void fly() = 0;
};

#endif