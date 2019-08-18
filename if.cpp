/*
	IF:
	1. using if statements
*/



#include <iostream>

using namespace std;

int main(){

	int age;

	cout << "Enter age: ";
	cin >> age;
	cin.ignore();

	if( age < 18 ){
		cout << "Please come back when you are 21 or older.\n";
	}
	else if( age >= 18 && age < 80 ){
		cout << "You may enter.\n";
	}
	else if( age >= 80 ){
		cout << "You look good for " << age << "!\n";
	}
	else{
		cout << "Invalid entry!\n";
	}

	return 0;
}