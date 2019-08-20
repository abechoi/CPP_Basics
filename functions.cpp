/*
	FUNCTIONS:
	1. Pretty similar to my functions.c.
	2. Create prototypes for functions.
*/

#include "cstdlib"
#include "iostream"

using namespace std;

int mult( int x, int y );

int main(){

	int a = rand();
	int x, y;
	cout << "a = " << a << "\n";


	cout << "Please enter two integers: ";
	cin >> x >> y;
	cin.ignore();
	cout << "Product = " << mult( x, y) << "\n";


	return 0;
}

int mult( int x, int y ){
	return x * y;
}