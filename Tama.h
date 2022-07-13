#pragma once
#include <iostream>
using namespace std;

class Tama {
private:
	string name; //so tama can be named in this class, BUT NEVER CHANGED outside of this class
	int happiness; //tama happiness can be changed in other functions
	int fullness; // tama fullness can be changed in other functions

public:
	
	bool nameCheck = false; //Name is defaultly incorrect until otherwise changed

	Tama();

	Tama(string aName, int aHappiness, int aFullness);

	string setName(string aName);

	void setHappiness(int aHappiness);

	void setFullness(int aFullness);

	string getName();

	int getHapiness();

	int getFullness();

	void tamaPrinter();

	int giveFood(int fullnessInc);
};

