/*
	LOOPS:
	1. Loops in C++ seem pretty standard
	2. I had trouble compiling using g++, had to use g++ -std=c++11 instead
	3. Learned foreach loops

	I need to be more efficient with my time...
*/

#include "iostream"

using namespace std;

int main(){

	int i = 0;;

	// WHILE LOOP
	cout << "Entering while loop:\n";
	while( i < 10 ){
		cout << "i = " << i << "\n";
		++i;
	}
	i = 0;

	// DO WHILE
	cout << "Entering do-while loop:\n";
	do{

		cout << "i = " << i << "\n";
		++i;

	}while( i < 10 );

	// FOR LOOP
	cout << "Entering for loop:\n";
	for( i = 0; i < 10; ++i ){

		cout << "i = " << i << "\n";
	}

	// FOR EACH LOOP
	int arr[] = { 10, 20, 30, 40, 50 };

	cout << "Entering for each loop:\n";
	for( int x : arr)
		cout << "x = " << x << "\n";


	return 0;
}