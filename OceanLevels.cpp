/*
Ibrahim Khan
CS 3060-001
Programming Challenge 2.7: Ocean Levels
02/02/2021
This program displays how much the ocean level will rise in 5 years, 7 years, and 10 years, 
assuming that the ocean level rises at a rate of 1.5 millimeters every year.
*/

#include <iostream>
using namespace std;

int main() {
	
	const double RISE_RATE = 1.5; //Ocean level rises at this rate every year
	
	//Print statements for amount ocean level will rise in 5, 7, then 10 years
	cout << "In 5 years, the ocean level will be " << (RISE_RATE*5) << " mm higher than the current ocean level." << endl;
	cout << "In 7 years, the ocean level will be " << (RISE_RATE*7) << " mm higher than the current ocean level." << endl;
	cout << "In 10 years, the ocean level will be " << (RISE_RATE*10) << " mm higher than the current ocean level." << endl;
	
	return 0;
}
