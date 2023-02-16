#include <iostream>

using namespace std;

void changeNumber(int& n)
{
	n *= 2;
}

int main(void)
{
	int n = 5;
	cout << "Before change : " << n << endl;
	changeNumber(n);
	cout << "After change : " << n << endl;
	return (0);
}