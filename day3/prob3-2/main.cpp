#include <iostream>
#include "twostrings.h"

using namespace std;

int main(void)
{
	TwoStrings s;
	s.setString1("Hello");
	s.setString2("World");
	cout << "First string is " << s.getString1() << "." << endl;
	cout << "Second string is " << s.getString2() << "." << endl;
	cout << "Connected string is " << s.getConnectedString() << "." << endl;
	cout << "Lengths of Connected string is " << s.getConnectedLength() << "." << endl;
	return (0);
}
