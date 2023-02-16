#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	int a = 1, b = 2;
	cout << "a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	return (0);
}
