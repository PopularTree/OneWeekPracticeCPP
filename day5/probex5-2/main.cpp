#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

string convert_kansuuji(map<int, string> table, int num)
{
	string kansuuji;
	stack<string> stk;
	int counter;

	counter = 0;
	while (num)
	{
		stk.push(table[num % 10]);
		num /= 10;
		counter++;
		if (counter % 3 == 0 && num != 0)
			stk.push(",");
	}
	while (!stk.empty())
	{
		kansuuji.append(stk.top());
		stk.pop();
	}
	return (kansuuji);
}

int main(void)
{
	map<int, string> corresponding_table;
#if 1
	corresponding_table[0] = "〇";
	corresponding_table[1] = "一";
	corresponding_table[2] = "二";
	corresponding_table[3] = "三";
	corresponding_table[4] = "四";
	corresponding_table[5] = "五";
	corresponding_table[6] = "六";
	corresponding_table[7] = "七";
	corresponding_table[8] = "八";
	corresponding_table[9] = "九";
#else
	corresponding_table[0] = " zero ";
	corresponding_table[1] = " ichi ";
	corresponding_table[2] = " ni ";
	corresponding_table[3] = " san ";
	corresponding_table[4] = " shi ";
	corresponding_table[5] = " go ";
	corresponding_table[6] = " roku ";
	corresponding_table[7] = " shichi ";
	corresponding_table[8] = " hachi";
	corresponding_table[9] = " kyu ";
#endif
	bool isStringNumber = true;
	string number;
	int num;

	cout << "Input a digit : ";
	cin >> number;
	for (int i = 0; i < number.length(); i++)
	{
		if (isdigit(number[i]) == 0)
			isStringNumber = false;
	}
	if (isStringNumber)
	{
		num = atoi(number.c_str());
		cout << "Result of conversion : " << convert_kansuuji(corresponding_table, num) << endl;
	}
	else
	{
		cout << "Input a digit." << endl;
	}
	return (0);
}
