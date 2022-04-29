/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 19.6: Recursive Power Function
* 05/06/2021
* This program contains a recursive function that raises a number to a
* power.  The function receives two arguments, the number to be raised
* and the exponent.
*/

#include <iostream>

using namespace std;

//Function prototype
int powerFunction(int, int);

int main() {
	
	//Display exponent calculations by calling powerFunction
	cout << "2^3=" << powerFunction(2,3) << endl;
	cout << "2^4=" << powerFunction(2,4) << endl;
	cout << "3^3=" << powerFunction(3,3) << endl;
	cout << "6^3=" << powerFunction(6,3) << endl;
	cout << "7^7=" << powerFunction(7,7) << endl;
	cout << "10^9=" << powerFunction(10,9) << endl;
	
	return 0;
}

//Recursive function that calculates exponents
int powerFunction (int num, int exponent) {
	
	//Declaring variables
	int newNum, compareExponent = 1;
	
	//If recursion needs to be done
	if (compareExponent != exponent) {
		newNum = powerFunction(num, exponent-1);
		num *= newNum;
	}
	
	return num;
}
