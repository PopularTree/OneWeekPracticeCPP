#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CDATA
{
private:
	// member variable
	int number;
	// member variable
	string comment;
public:
	// initialization
	void init();
	// setter
	void setNumber(int n);
	void setComment(string s);
	// getter
	int getNumber();
	string getComment();
};

#endif