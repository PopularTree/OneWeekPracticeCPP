#include <iostream>
#include "number.h"

using namespace std;

int main(void)
{
	Number* pN;
	pN = new Number();
	// cout << pN->getAdd() << endl;
	pN->setNumbers(1, 2);
	cout << pN->getAdd() << endl;
	delete pN;
	return (0);
}
