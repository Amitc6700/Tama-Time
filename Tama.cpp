#include "Tama.h"

Tama::Tama() { //default tama constructor
	name = "Tama";
	happiness = 100;
	fullness = 100;
}

Tama::Tama(string aName, int aHappiness, int aFullness) { //non-default constructor
	setName(aName);
	setHappiness(aHappiness);
	setFullness(aFullness);
}

string Tama::setName(string aName) { //Sets the name
	cout << "Welcome to Tama time :)" << endl;
	while (nameCheck == false) { //while the name is invalid
		cout << "Please enter a name for your Tama: ";
		cin >> name; //allows name input
		if (find_if(name.begin(), name.end(), isdigit) != name.end()) { //name must not have any digits
			cout << "Letters only please. " << endl;
		}
		else {
			nameCheck = true;
		}
	}
	cout << endl;
	return name;
}

void Tama::setHappiness(int aHappiness) { //Happiness checker
	if (aHappiness >= 100) {
		happiness = 100;
	}
	else if (aHappiness <= 0) {
		happiness = 0;
	}
	else {
		happiness = aHappiness;
	}
}

void Tama::setFullness(int aFullness) { //fullness checker
	if (aFullness >= 100) {
		fullness = 100;
	}
	else if (aFullness <= 0) {
		fullness = 0;
	}
	else {
		fullness = aFullness;
	}
}

string Tama::getName() {
	return name;
}

int Tama::getHapiness() {
	return happiness;
}

int Tama::getFullness() {
	return fullness;
}

void Tama::tamaPrinter() { //prints stats
	cout << "Name: " << getName() << endl;
	cout << "Happiness: " << getHapiness() << endl;
	cout << "Fullness: " << getFullness() << endl << endl;
}

int Tama::giveFood(int fullnessInc) {
	if (fullness >= 100) {
		cout << name << " is currently full." << endl;
	}
	else {
		fullness = fullnessInc;
	}
	return fullness;
}

int Tama::giveHappiness(int happinessInc) {
	if (happiness >= 100) {
		cout << name << " is already super happy!" << endl;
	}
	else {
		happiness = happinessInc;
	}
	return happiness;
}