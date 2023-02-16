#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge()
{
	cout << "constrctor" << endl;
}

Hoge::~Hoge()
{
	cout << "destructor" << endl;
}

void Hoge::foo()
{
	cout << "foo method" << endl;
}