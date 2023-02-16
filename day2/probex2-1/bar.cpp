#include "bar.h"
#include "foo.h"
#include <iostream>

using namespace std;

Bar::Bar()
{
	// Nothing to do
}

Bar::~Bar()
{
	// Nothing to do
}

void Bar::func1(Foo *pFoo)
{
	pFoo->hoge();
}

void Bar::func2() const
{
	cout << "Bar::func2()" << endl;
}