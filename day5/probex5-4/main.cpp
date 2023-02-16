#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void)
{
	set<char> alphabet;
	set<char>::iterator itr;
	string word;

	cout << "Input English word : ";
	cin >> word;
	for (int i=0; i<word.length(); i++)
	{
		alphabet.insert(word[i]);
	}
	cout << "Alphabet used :";
	for (itr = alphabet.begin(); itr != alphabet.end(); itr++)
	{
		cout << " " << *itr;
	}
	cout << endl;
	return (0);
}