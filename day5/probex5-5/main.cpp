#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
	queue<string> str_que;
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
		str_que.push(word);
	}
	while (!str_que.empty())
	{
		cout << str_que.front() << endl;
		str_que.pop();
	}
	return (0);
}