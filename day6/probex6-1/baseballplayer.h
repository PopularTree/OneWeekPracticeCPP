#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_
 
#include <iostream>
#include <string>
 
using namespace std;

class BaseballPlayer
{
protected:
	// number on player's back
	int m_number;
	// Player Type
	string m_kind;
	// name
	string m_name;
public:
	// get number
	int getNumber();
	// get type
	string getKind();
	// get name
	string getName();
	// func of play
	virtual void play()=0;
};

#endif