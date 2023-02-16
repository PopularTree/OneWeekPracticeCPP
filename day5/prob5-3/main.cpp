#include <iostream>
#include "counter.h"

using namespace std;

int main(void)
{
	Counter c1, c2;
	c1.count();
	c2.count();
	c2.count();
	c2.reset();
	c1.count();
	c1.count();
	c2.count();
	cout << "Num of c1's count : " << c1.getCount() << endl;
	cout << "Num of c2's count : " << c2.getCount() << endl;
	cout << "Num of total count : " << Counter::getTotalCount() << endl;
	return (0);
}
