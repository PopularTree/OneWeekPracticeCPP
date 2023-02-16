#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

string convert_kansuuji(map<char, string> table, string num)
{
	string kansuuji;
	queue<string> char_que;
	int counter;

	counter = 0;
	for (int i=0; i<num.length(); i++)
	{
		char_que.push(table[num[i]]);
		counter++;
		if ((num.length() - counter) % 3 == 0 && num.length() - counter != 0)
			char_que.push(",");
	}
	while (!char_que.empty())
	{
		kansuuji.append(char_que.front());
		char_que.pop();
	}
	return (kansuuji);
}

int main(void)
{
	map<char, string> corresponding_table;
	char num_str[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	corresponding_table[num_str[0]] = "〇";
	corresponding_table[num_str[1]] = "一";
	corresponding_table[num_str[2]] = "二";
	corresponding_table[num_str[3]] = "三";
	corresponding_table[num_str[4]] = "四";
	corresponding_table[num_str[5]] = "五";
	corresponding_table[num_str[6]] = "六";
	corresponding_table[num_str[7]] = "七";
	corresponding_table[num_str[8]] = "八";
	corresponding_table[num_str[9]] = "九";
	bool isStringNumber = true;
	string number;

	cout << "Input a digit : ";
	cin >> number;
	for (int i = 0; i < number.length(); i++)
	{
		if (isdigit(number[i]) == 0)
			isStringNumber = false;
	}
	if (isStringNumber)
	{
		cout << "Result of conversion : " << convert_kansuuji(corresponding_table, number) << endl;
	}
	else
	{
		cout << "Input a digit." << endl;
	}
	return (0);
}
