#include "Menus.h"
#include "Tama.h"
#include "TamaGame.h"
#include <iostream>
using namespace std;

enum menuChoice{invalid, foodChoice, playChoice, statsChoice, quitChoice}; //globalized choices

 Tama Menus::tamaCreate() { //Creates the tama
	string tname;
	Tama tama1 = Tama(tname, 50, 50);
	return tama1;
}



void Menus::menu() {
	int userChoice = invalid; //default choice is invalid
	Tama tama1 = tamaCreate(); //Creates the Tama

	while (userChoice != quitChoice) {
		int fullnessInc = tama1.getFullness() + 25;
		cout << endl << "Welcome to the menus. Please select from the following options" << endl << "1. See your Tama's food options" << endl << "2. Play with your Tama" << endl << "3. Check your Tama's current status" << endl << "4. Quit" << endl << "Your input: ";
		cin >> userChoice;
		switch (userChoice) {
		case (foodChoice):
			cout << "You give " << tama1.getName() << " some food." << endl;
			tama1.giveFood(fullnessInc);
			break;
		case(playChoice):
			cout << "Tama play placeholder" << endl;
			break;
		case(statsChoice):
			cout << endl;
			cout << "Here is " << tama1.getName() << "'s current status." << endl;
			tama1.tamaPrinter();
			break;
		case (quitChoice):
			break;
		default:
			cout << "Enter a valid choice." << endl;
			break;
		}
	}
}
