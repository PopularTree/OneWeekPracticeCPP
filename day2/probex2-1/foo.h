#ifndef _FOO_H_
#define _FOO_H_

class Bar;

class Foo
{
private:
	Bar *pBar;
public:
	void hoge() const;
	void fuga(Bar *pBar);
	// constructor and destructor
	Foo();
	~Foo();
};

#endif