#include <iostream>
#include "collectionint.h"

using namespace std;

int main(void)
{
	// define array variable
	int array1[] = { 1, 5, 4, 2, 3};
	double array2[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2};
	Collection<int> *c1 = new Collection<int>(array1, 5);
	c1->showArray();
	cout << "Maximum value : " << c1->getMax() << endl;
	cout << "Minimum value : " << c1->getMin() << endl;
	cout << endl;
	Collection<double> *c2 = new Collection<double>(array2, 6);
	c2->showArray();
	cout << "Maximum value : " << c2->getMax() << endl;
	cout << "Minimum value : " << c2->getMin() << endl;
	return (0);
}
