#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	map<string, string> table;
	string english[] = {"cat", "dog", "bird", "tiger"};
	table[english[0]] = "neko";
	table[english[1]] = "inu";
	table[english[2]] = "tori";
	table[english[3]] = "tora";
	string animal;

	cout << "Write an animal name in English and Press Enter : ";
	cin >> animal;
	if (table.find(animal) == table.end())
		cout << "Corresponding data not registered" << endl;
	else
		cout << "Japanese [ " << table[animal] << " ]" << endl;
	return (0);
}