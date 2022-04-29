/*
Ibrahim Khan
CS 3060-001
Programming Challenge 2.12: Land Calculation
02/02/2021
This program converts square feet into acres for a tract of land that has an area of 389,767 square feet.
*/

#include <iostream>
using namespace std;

int main() {
	
	const double ACRE = 43560; //One acre is equal to 43560 square feet
	double landSqFeet = 389767; //Area of land in square feet
	
	//Print statement with conversion to acres
	cout << "A tract of land with an area of " << landSqFeet << " square feet is equal to " << landSqFeet/ACRE << " acres.";
	
	return 0;
}
