#include "bar.h"
#include "foo.h"
#include <iostream>

using namespace std;

Foo::Foo()
{
	// Nothing to do
}

Foo::~Foo()
{
	// Nothing to do
}

void Foo::hoge() const
{
	cout << "Foo::hoge()" << endl;
}

void Foo::fuga(Bar* pBar)
{
	cout << "Foo::fuga()" << endl;
	pBar->func2();
}