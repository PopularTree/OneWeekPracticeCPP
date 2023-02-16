#ifndef _BAR_H_
#define _BAR_H_

class Foo;

class Bar
{
private:
	Foo *pFoo;
public:
	void func1(Foo *pFoo);
	void func2() const;
	// constructor and destructor
	Bar();
	~Bar();
};

#endif