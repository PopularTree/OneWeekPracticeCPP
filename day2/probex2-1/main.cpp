#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int main(void)
{
	Foo *pFoo;
	Bar *pBar;
	pFoo = new Foo();
	pBar = new Bar();
	pFoo->hoge();
	pBar->func2();
	pFoo->fuga(pBar);
	pBar->func1(pFoo);
	delete pFoo;
	delete pBar;
	return (0);
}
