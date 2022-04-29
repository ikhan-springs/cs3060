/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 3.18: Pizza Pi
* 02/09/2021
* This program calculates the number of slices a pizza can be divided into, where each slice has an area of 14.125 inches.
* First, the program will ask for the diameter of the pizza, which will be used to calculate the area of the pizza.
* Then, the area will be divided by 14.125 to get the number of slices that can be cut, which will be displayed.
*/

#include <iostream>

using namespace std;

int main() {
	
	//Declaring constant variables
	const float PI = 3.14159;
	const float SLICE_AREA = 14.125;
	
	//Declaring the rest of the variables
	float diameter, radius, area, numSlices;
	
	//Gather user input for diameter of pizza
	cout << "Enter pizza diameter: ";
	cin >> diameter;
	
	radius = diameter / 2; //Calculate radius of pizza
	area = PI * radius * radius; //Calculate area of pizza
	numSlices = area / SLICE_AREA; //Calculate the number of slices pizza should be cut into
	
	cout << (int)numSlices << " slices"; //Display a whole number of slices that the pizza should be cut into
	
	return 0;
}
