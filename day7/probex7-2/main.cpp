#include <iostream>
#include <string>
#include "NewString.h"

using namespace std;

int main()
{
	NewString s1("HelloWorld"),s2;
	cout << s1.getValue() << endl;
	s2 = s1; // assign value
	cout << s2.getValue() << endl;
	NewString s3(s2); // call constructor with NewString as argument
	cout << s3.getValue() << endl;
	NewString s4("HELLOWORLD");
	cout << s4.getValue() << endl;
#if 1
	if(s1 == s2)
	{
		cout << "s1==s2" << endl;
	}
	if(s1 == s4)
	{
		cout << "s1==s4" << endl;
	}
#endif
	return 0;
}
