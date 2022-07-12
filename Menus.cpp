#include "Menus.h"
#include "Tama.h"
#include <iostream>
using namespace std;

enum menuChoice{invalid, foodChoice, playChoice, statsChoice, quitChoice}; //globalized choices

Tama Menus::tamaCreate() {

}

void Menus::checkStats() {
	cout << "Here is " << "'s current status." << endl;
}

void Menus::menu() {
	int userChoice = invalid; //default choice is invalid

	while (userChoice != quitChoice) {
		cout << "Welcome to the menus. Please select from the following options" << endl << "1. See your Tama's food options" << endl << "2. Play with your Tama" << endl << "3. Check your Tama's current status" << endl << "4. Quit" << endl << "Your input: ";
		cin >> userChoice;
		switch (userChoice) {
		case (foodChoice):
			cout << "Tama's food placeholder" << endl;
			break;
		case(playChoice):
			cout << "Tama play placeholder" << endl;
			break;
		case(statsChoice):
			cout << "Printed stats placeholder" << endl;
			//Tama::tamaPrinter;
			break;
		case (quitChoice):
			break;
		default:
			cout << "Enter a valid choice." << endl;
		}
	}
}
