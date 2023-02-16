#include <iostream>
#include "minmax.h"

using namespace std;

int main(void)
{
	MinMax m;
	int a = 4;
	int b = 2;
	int c = 7;
	cout << "Of " << a << ", " << b << " and " << c << ", " << "the largest is " << m.max(a, b, c) << "." << endl;
	cout << "Of " << a << ", " << b << " and " << c << ", " << "the smallest is " << m.min(a, b, c) << "." << endl;
	return (0);
}
