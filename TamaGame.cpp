#include "TamaGame.h"
#include "Menus.h"
#include "Tama.h" 
#include <time.h>
#include <iostream>
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <chrono> //For system_clock
#include <random> 
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //helps change color of the text

void TamaGame::playGame() {
	srand(time(0));
	char userGuess;
	bool continuePlaying = true;
	bool wonTheGame = false;
	string playAgain;
	int numberOfWins = 0;

	while (continuePlaying == true) {
		int correctGuess = 0;
		int incorrectGuess = 0;
		system("cls"); //clears the screen
		cout << "Welcome to Tama's Numbers Guessing Game!" << endl << "The CPU will display a number and you will have a chance to guess if your number is higher or lower than the mystery number!" << endl << "Best of 5 rounds wins!" << endl;
		for (int i = 0; i < 5; i++) {
			int cpuNum = rand() % 9 + 1;
			int userNum = rand() % 9 + 1;
			while (cpuNum == userNum) {
				userNum = rand() % 9 + 1;
			}
			cout << endl << "Your number: " << cpuNum << endl;
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
			cout << endl << "Correct guesses: " << correctGuess << endl;
			cout << "Incorrect guesses: " << incorrectGuess << endl;
		}
		if (correctGuess > incorrectGuess) {
			numberOfWins++;
			//system("color A2");
			SetConsoleTextAttribute(hConsole, 5); // changes the color of the text to purple
			cout << 5 << endl << "You won the game!!" << endl << endl;
			SetConsoleTextAttribute(hConsole, 15); // changes the color of the text back to white
		}
		else {
			wonTheGame = false;
		}
		cout << "Would you like to play again? Please enter either y or n: ";
		cin >> playAgain;
		if (playAgain == "y") {
			continuePlaying = true;
		}
		else if (playAgain == "n") {
			continuePlaying = false;
		}
		else if (playAgain != "y" && playAgain != "n") {
			cout << endl << "Please enter a correct input. Either y or n." << endl << endl;

		}
	}
}