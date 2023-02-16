#include "data.h"

void CDATA::init()
{
	number = 0;
	comment = "";
}

void CDATA::setNumber(int n)
{
	number = n;
}

int CDATA::getNumber()
{
	return (number);
}

void CDATA::setComment(string s)
{
	comment = s;
}

string CDATA::getComment()
{
	return (comment);
}