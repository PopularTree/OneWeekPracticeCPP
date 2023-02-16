#include "NewString.h"

// Constructor
NewString::NewString()
{
	m_value = "";
}

// constructor to assign value (1) (from string)
NewString::NewString(string value)
{
	m_value = value;
}

// constructor to assign value (2)（from other class)
NewString::NewString(NewString& value)
{
	m_value = value.getValue();
}

// assign value
NewString& NewString::operator=(NewString& n)
{
	m_value = n.getValue();
	return *this;
}

// Compare equal values
bool NewString::operator==(NewString& n) const
{
	string s1, s2;

	s1 = str_toupper(this->m_value);
	s2 = str_toupper(n.m_value);
	if (s1.length() != s2.length())
		return false;
	for (int i=0; i<s1.length(); i++)
	{
		if (s1[i] != s2[i])
			return false;
	}
	return true;
}

// Compare if values are not equal
bool NewString::operator!=(NewString& n) const
{
	return !(*this == n);
}

// Get value by string
string NewString::getValue()
{
	return m_value;
}

// Make the string all uppercase
string NewString::str_toupper(string s) const
{
	string ss;

	for (int i=0; i<s.length(); i++)
	{
		ss = toupper(s[i]);
	}
	return ss;
}