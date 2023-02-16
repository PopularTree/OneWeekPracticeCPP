#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int num;
	list<int> array;
	list<int>::iterator itr;

	while (1)
	{
		cout << "Enter a positive digit : ";
		cin >> num;
		if (num == -1)
		{
			cout << endl;
			break;
		}
		cout << "Number of entries : ";

		if (array.empty())
		{
			array.push_back(num);
		}
		else
		{
			itr = array.begin();
			while (1)
			{
				if (*itr > num)
				{
					array.insert(itr, num);
					break;
				}
				else if (itr == array.end())
				{
					array.push_back(num);
					break;
				}
				itr++;
			}
		}
		// display
		for (itr = array.begin(); itr != array.end(); itr++)
		{
			cout << *itr << " ";
		}
		cout << endl;
	}
	return (0);
}