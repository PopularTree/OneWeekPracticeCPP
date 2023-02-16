#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	stack<string> str_stk;
	string word;

	while (1)
	{
		cout << "Input character string : ";
		getline(cin, word);
		if (word == "\0")
		{
			cout << endl;
			break;
		}
		str_stk.push(word);
	}
	while (!str_stk.empty())
	{
		cout << str_stk.top() << endl;
		str_stk.pop();
	}
	return (0);
}