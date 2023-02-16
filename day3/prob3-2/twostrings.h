#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

using namespace std;

class TwoStrings
{
private:
	// First string
	string m_string1;
	// Second string
	string m_string2;
public:
	// set first string
	void setString1(string s);
	// set second string
	void setString2(string s);
	// get first string
	string getString1();
	// get second string
	string getString2();
	// get connected two string
	string getConnectedString();
	// get length that is getted by getConnectedString()
	int getConnectedLength();
};

#endif