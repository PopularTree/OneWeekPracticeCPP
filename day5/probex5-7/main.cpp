#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	stack<char> char_stk;
	string word;

	cout << "Input English word : ";
	cin >> word;
	for (int i=0; i<word.length(); i++)
	{
		char_stk.push(word[i]);
	}
	cout << endl;
	while (!char_stk.empty())
	{
		cout << char_stk.top();
		char_stk.pop();
	}
	cout << endl;
	return (0);
}