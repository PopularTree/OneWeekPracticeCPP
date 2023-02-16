#include <iostream>
#include <vector>

using namespace std;

void check_the_first_digit(vector<int> array)
{
	int count;

	for (int i=0; i<10; i++)
	{
		count = 0;
		cout << "position 1 is " << i << " : ";
		for (int j=0; j<array.size(); j++)
		{
			if (array[j] % 10 == i)
			{
				cout << array[j] << " ";
				count++;
			}
		}
		if (count == 0)
			cout << "Nothing";
		cout << endl;
	}
}

int main(void)
{
	int num;
	vector<int> array;
	while (1)
	{
		cout << "Enter a positive integer : ";
		cin >> num;
		if (num == -1)
		{
			cout << endl;
			break;
		}
		array.push_back(num);
	}
	check_the_first_digit(array);
	return (0);
}