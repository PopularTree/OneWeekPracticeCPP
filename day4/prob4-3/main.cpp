#include <iostream>

using namespace std;

int main(void)
{
	// Generate array
	int* num = new int[4];
	int i;
	// Assign values to the array
	for (i = 0; i < 4; i++)
	{
		num[i] = i;
	}
	// Display array contents
	for (i = 0; i < 4; i++)
	{
		cout << "num[" << i << "]=" << num[i] << " ";
	}
	cout << endl;
	delete [] num;
	return (0);
}
