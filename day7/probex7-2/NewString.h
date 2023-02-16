#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

class NewString
{
private:
	// string
	string m_value;
public:
	// constructor
	NewString();
	// constructor to assign a value (from string)
	NewString(string value);
	// constructor to assign a value (from another class)
	NewString(NewString& value);
	// assign value
	NewString& operator= (NewString& n);
	// Compare equal values
	bool operator==(NewString& n) const;
	// Compare if values are not equal
	bool operator!=(NewString& n) const;
	// get value by string
	string getValue();
private:
	// Make the string all uppercase
	string str_toupper(string s) const;
};

#endif