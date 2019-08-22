/*
	SWITCH:
	1. Create functions for - load game, play game, play multiplayer, or quit
	2. User is in a loop until quit option is read

*/

#include "iostream"

using namespace std;

// FUNCTION PROTOTYPES
void printMenu();

void loadGame();

void playGame();

void multiplayer();

void quit();

void error();


// MAIN
int main(){

	int choice = 0;

	printMenu();
	cin >> choice;

	// WHILELOOP1 - loops menu
	while( choice != 4 ){

		// END SWITCH1
		switch( choice ){

			case 1:
				loadGame();
				break;
			case 2:
				playGame();
				break;
			case 3:
				multiplayer();
				break;
			default:
				error();
				break;
		}// END SWITCH1
		printMenu();
		cin >> choice;

	} // END WHILELOOP1

	quit();
	return 0;
} // END MAIN

void printMenu(){

	string menu;

	menu =  "1. Load Game\n";
	menu += "2. Play Game\n";
	menu += "3. Multiplayer\n";
	menu += "4. Quit\n";

	cout << menu;
}

// FUNCTIONS

void loadGame(){
	cout << "Loading game...\n";
}

void playGame(){
	cout << "Playing game...\n";
}

void multiplayer(){
	cout << "Loading multiplayer...\n";
}

void quit(){
	cout << "Quitting game...\n";
}

void error(){
	cout << "Bad input!\n";
}







