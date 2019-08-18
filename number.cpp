/*
	NUMBER:
	1. Prompt user for number, user enters number, print number
	2. cout << prints
	3. cin >> [variable] stores user input into the variable
	4. cin.ignore() function strips newline entered by the enter key
*/


#include <iostream>

using namespace std;

int main(){

	int number;

	cout << "Enter an integer: ";
	cin >> number;
	cin.ignore();
	cout << "number = " << number << "\n";


	return 0;
}