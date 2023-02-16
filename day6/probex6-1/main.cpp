#include "baseballplayer.h"
#include "pitcher.h"
#include "catcher.h"
#include "fielder.h"

int main()
{
	// Creating an array of baseball players
	BaseballPlayer* players[9];
	players[0] = new Pitcher("Yamada",8);
	players[1] = new Catcher("Takasaka",16);
	players[2] = new Fielder("Gomez",16);
	players[3] = new Fielder("Nakamura",6);
	players[4] = new Fielder("Kasugai",32);
	players[5] = new Fielder("Hotta",5);
	players[6] = new Fielder("Osaka",54);
	players[7] = new Fielder("Tomas",11);
	players[8] = new Pitcher("Saitoh",34);

	for(int i = 0; i < 9; i++)
	{
		cout << "---------------------------------------------" << endl;
		cout << "Name: " << players[i]->getName() << endl;
		cout << "Number on player's back: " << players[i]->getNumber() << endl;
		cout << "Type: " << players[i]->getKind() << endl;
	}
	// delete instance
	for(int i = 0; i < 9; i++)
	{
		delete players[i];
	}
	return 0;
}