#include <iostream>
#include <vector>
#include <string>

using namespace std;

void find_longest_words(vector<string> array)
{
	int max_len;

	// Find the length of the longest word
	max_len = array[0].length();
	for (int i=1; i<array.size(); i++)
	{
		if (array[i].length() > max_len)
			max_len = array[i].length();
	}
	// Output the longest word
	for (int i=0; i<array.size(); i++)
	{
		if (array[i].length() == max_len)
			cout << array[i] << " ";
	}
	cout << endl;
}

void find_shortest_words(vector<string> array)
{
	int min_len;

	// Find the length of the shortest word
	min_len = array[0].length();
	for (int i=1; i<array.size(); i++)
	{
		if (array[i].length() < min_len)
			min_len = array[i].length();
	}
	// Output the shortest word
	for (int i=0; i<array.size(); i++)
	{
		if (array[i].length() == min_len)
			cout << array[i] << " ";
	}
	cout << endl;
}

int main(void)
{
	string word;
	vector<string> array;
	while (1)
	{
		cout << "Enter string : ";
		getline(cin , word);
		if (word == "\0")
		{
			cout << endl;
			break;
		}
		array.push_back(word);
	}
	cout << "Longest word : ";	find_longest_words(array);
	cout << "Shortest word : ";	find_shortest_words(array);
	return (0);
}