#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
private:
	// frequency
	int m_count;
	// Static member variable that records the total number of counts
	static int m_totalCount;
public:
	// constructor
	Counter();
	// reset
	void reset();
	// count
	void count();
	// num of count
	int getCount();
	// addtional function
	static int getTotalCount();
};

#endif