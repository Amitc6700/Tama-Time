#include "TamaGame.h"
#include "Menus.h"
#include "Tama.h" 
#include <time.h>
#include <iostream>
#include <stdlib.h>     //idk one of these is for using the function sleep
#include <stdio.h>     //ty stack overflow
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <chrono> //For system_clock
#include <random>

using namespace std;

void TamaGame::playGame() {
	srand(time(0));
	char userGuess;
	bool continuePlaying = true;
	cout << "Welcome to Tamagame!" << endl;
	while (continuePlaying == true) {
		int correctGuess = 0;
		int incorrectGuess = 0;
		cout << "Welcome to Numbers Guessing Game!" << endl << "The CPU will display a number and you will have a chance to guess if your number is higher or lower than the mystery number!" << endl << "Best of 5 rounds wins!" << endl;
		for (int i = 0; i < 5; i++) {
			int cpuNum = rand() % 9 + 1;
			int userNum = rand() % 9 + 1;
			while (cpuNum == userNum) {
				userNum = rand() % 9 + 1;
			}
			cout << "Your number: " << cpuNum << endl;
			cout << "Is your number higher or lower than the mystery number?" << endl << "Please insert h for higher or l for lower: ";
			cin >> userGuess;
			if (userGuess == 'h') {
				cout << "Your mystery number was: " << userNum << endl;
				if (cpuNum > userNum) {
					incorrectGuess++;
					cout << "Incorrect guess." << endl;
				}
				else {
					cout << "Correct guess!" << endl;
					correctGuess++;
				}
			}
			if (userGuess == 'l') {
				cout << "Your mystery number was: " << userNum << endl;
				if (cpuNum > userNum) {
					correctGuess++;
					cout << "Correct guess!" << endl;
				}
				else {
					incorrectGuess++;
					cout << "Incorrect guess." << endl;
				}
			}
			cout << "Correct guesses: " << correctGuess << endl;
			cout << "Incorrect guesses: " << incorrectGuess << endl;
			continuePlaying = false;
		}
	}
}

