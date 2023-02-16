#include <iostream>
#include "counter.h"

using namespace std;

int main(void)
{
	// generate counter
	Counter* pC = new Counter();
	pC->count(); // 1 time count
	pC->count(); // 1 time count
	cout << "Frequency : " << pC->getCount() << " times" << endl;
	pC->count(4); // 4 time count
	cout << "Frequency : " << pC->getCount() << " times" << endl;
	// reset counter
	pC->reset();
	cout << "Frequency : " << pC->getCount() << " times" << endl;
	// delete counter
	delete pC;
	return 0;
}