#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
private:
	int m_count;
public:
	// constructor
	Counter();
	// reset counter
	void reset();
	// get counted times
	int getCount();
	// count by 1
	void count();
	// count by n
	void count(int n);
};

#endif