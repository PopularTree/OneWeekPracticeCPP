#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int num;
	vector<int> even;
	vector<int> odd;
	unsigned int i;
	vector<int>::iterator itr;
	while (1)
	{
		cout << "Enter a positive integer : ";
		cin >> num;
		if (num == -1)
		{
			cout << endl;
			break;
		}
		else if (num % 2 == 0)
		{
			even.push_back(num);
		}
		else
		{
			odd.push_back(num);
		}
	}
	cout << "Even number :";
	for (i=0; i<even.size(); i++)
	{
		cout << " " << even[i];
	}
	cout << endl;

	cout << "Odd number  :";
	for (itr=odd.begin(); itr != odd.end(); itr++)
	{
		cout << " " << *itr;
	}
	cout << endl;
	return (0);
}