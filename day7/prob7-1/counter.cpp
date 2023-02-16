#include "counter.h"

// constructor
Counter::Counter() : m_count(0)
{

}

// reset counter
void Counter::reset()
{
	m_count = 0;
}

// get counted times
int Counter::getCount()
{
	return m_count;
}

// count by 1
void Counter::count()
{
	m_count++;
}

// count by n
void Counter::count(int n)
{
	while (n--)
	{
		m_count++;
	}
}