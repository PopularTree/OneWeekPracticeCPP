#include <iostream>
#include <list>
#include <string>

using namespace std;

void display(list<string> array)
{
	list<string>::iterator itr;

	for (itr = array.begin(); itr != array.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
}

void delete_words_five_or_more_characters(list<string> &array)
{
	string word;
	list<string>::iterator itr;
	list<string>::iterator tmp;

	itr = array.begin();
	while (itr != array.end())
	{
		word = *itr;
		if (word.length() >= 5)
		{
			tmp = itr;
			tmp++;
			array.remove(*itr);
			itr = tmp;
		}
		else
		{
			itr++;
		}
	}
}

int main(void)
{
	string word;
	list<string> array;
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
	delete_words_five_or_more_characters(array);
	display(array);
	return (0);
}