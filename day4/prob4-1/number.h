#ifndef _NUMBER_H_
#define _NUMBER_H_

class Number
{
private:
	// member variable
	int a;
	int b;
public:
	// set two figure
	void setNumbers(int n1, int n2);
	// get result to addition
	int getAdd();
	// constructor
	Number();
	// destructor
	~Number();
};

#endif