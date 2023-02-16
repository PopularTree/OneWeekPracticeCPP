#include <random>
#include <iostream>
#include <set>

using namespace std;

std::random_device rd;
std::mt19937 gen(rd());

int random(int low, int high)
{
	std::uniform_int_distribution<> dist(low, high);
	return dist(gen);
}

int main(void)
{
	set<int> appearance;
	set<int>::iterator itr;
	int n;

	cout << "random number : ";
	for (int i=0; i<10; i++)
	{
		n = random(1, 10) % 10 + 1;
		cout << n << " ";
		appearance.insert(n);
	}
	cout << endl;
	cout << "Number of appearances : ";
	for (itr = appearance.begin(); itr != appearance.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
	return (0);
}