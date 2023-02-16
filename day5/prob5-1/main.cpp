#include <iostream>
#include "function.h"

using namespace std;

int main(void)
{
	int m = 3, n = 1;
	cout << "Of " << m << " and " << n << ", " << Function::max(m, n) << " is the largest." << endl;
	cout << "Of " << m << " and " << n << ", " << Function::min(m, n) << " is the smallest." << endl;
	return (0);
}
