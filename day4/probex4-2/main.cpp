#include <iostream>
#include <vector>

using namespace std;

int find_max(vector<int> array)
{
	int max;
	
	max = array[0];
	for (int i=1; i<array.size(); i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

int find_min(vector<int> array)
{
	int min;

	min = array[0];
	for (int i=1; i<array.size(); i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return (min);
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
	cout << "Maximum value : " << find_max(array) << endl;
	cout << "Minimum value : " << find_min(array) << endl;
	return (0);
}