#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int num;
	list<int> array;
	list<int>::iterator itr;
	list<int>::iterator tmp;

	while (1)
	{
		cout << "Enter a positive digit : ";
		cin >> num;
		if (num == -1)
		{
			cout << endl;
			break;
		}
		array.push_back(num);
	}
	for (itr = array.begin(); itr != array.end(); itr++)
	{
		if (*itr == 2)
		{
			tmp = itr;
			tmp++;
			array.remove(*itr);
			itr = tmp;
		}
	}
	for (itr = array.begin(); itr != array.end(); itr++)
	{
		cout << *itr << " ";
	}
	return (0);
}