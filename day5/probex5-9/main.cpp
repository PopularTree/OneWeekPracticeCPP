#include <iostream>
#include <string>
#include <map>

using namespace std;

int searching_words(string words[], string str)
{
	for (int i=0; i<words->length(); i++)
	{
		if (words[i] == str)
			return (1);
	}
	return (0);
}

int main(void)
{
	map<string, string> siritori;
	string words[] = {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
	siritori[words[0]] = "money";		// room → money
	siritori[words[2]] = "kind";		// pork → kind
	siritori[words[3]] = "pork";		// trap → pork
	siritori[words[4]] = "dog";			// kind → dog
	siritori[words[5]] = "yellow";		// money → yellow
	siritori[words[6]] = "given";		// dog → given
	siritori[words[7]] = "neighbor";	// given → neighbor
	siritori[words[8]] = "wonderful";	// yellow → wonderful
	siritori[words[9]] = "trap";		// eat → trap
	siritori[words[10]] = "eat";		// apple → eat
	siritori[words[11]] = "room";		// neighbor → room
	string str;

	cout << "room wonderful pork trap kind money dog given yellow eat apple neighbor" << endl << endl;
	cout << "Please choose one of these." << endl;
	cout << "input a word : ";
	cin >> str;
	cout << endl;
	while (1)
	{
		if (siritori.find(str) == siritori.end())
		{
			if (searching_words(words, str) == 0)
			{
				cout << "Please choose one of the words above." << endl;
			}
			else
			{
				cout << endl << "Could not find the rest of the siritori." << endl;
			}
			break;
		}
		else
		{
			cout << " ￫ " << siritori[str];
			str = siritori[str];
		}
	}
	return (0);
}