/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 4.21: Geometry Calculator
* 02/16/2021
* This program calculates the area of either a circle, rectangle, or triangle, based on the user's selection.
* The user will be prompted for a radius if calculating the area of a circle, a length and width if calculating the area of a rectangle,
* and a base and height if calculating the area of a triangle.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	//Declaring variables
	const float PI = 3.14159;
	int menuChoice;
	float area;
	
	//Display menu
	cout << "Geometry Calculator\n\n1. Calculate the area of a Circle\n2. Calculate the area of a Rectangle\n3. Calculate the area of a Triangle\n4. Quit\n";
	
	//Gather user input for menu choice
	cout << "\nEnter your choice (1-4): ";
	cin >> menuChoice;
	
	//Switch statement cases correspond with user's menu choice
	switch (menuChoice) {
		
		//If user selected 1 (Area of Circle)
		case 1: float radius; //Declaring float variable to be used for calculating circle's area
				
				//Gather user input for radius
				cout << "\nEnter the circle's radius: ";
				cin >> radius;
				
				//Check if radius is negative
				if (radius <= 0) {
					cout << "\nThe radius cannot be less than zero."; //Error statement if radius is negative
				}
				else {
					area = PI * sqrt(radius); //Calculate area
					cout << "\nThe area is " << area; //Display area
				}
				break;
		
		//If user selected 2 (Area of Rectangle)
		case 2: float length, width;  //Declaring float variables to be used for calculating rectangle's area
				
				//Gather user input for length
				cout << "\nEnter the rectangle's length: ";
				cin >> length;
				//Gather user input for width
				cout << "\nEnter the rectangle's width: ";
				cin >> width;
				
				//Check if length or width is negative
				if (length <= 0 || width <= 0) {
					cout << "\nOnly enter positive values for length and width."; //Error statement if length or width is negative
				}
				else {
					area = length * width; //Calculate area
					cout << "\nThe area is " << area; //Display area
				}
				break;
		
		//If user selected 3 (Area of Triangle)
		case 3: float base, height;  //Declaring float variables to be used for calculating triangle's area
				
				//Gather user input for base
				cout << "\nEnter the traingle's base: ";
				cin >> base;
				//Gather user input for height
				cout << "\nEnter the traingle's height: ";
				cin >> height;
				
				//Check if base or height is negative
				if (base <= 0 || height <= 0) {
					cout << "\nOnly enter positive values for base and height."; //Error statement if base or height is negative
				}
				else {
					area = base * height * 0.5; //Calculate area
					cout << "\nThe area is " << area; //Display area
				}
				break;
		
		//If user selected 4 (Quit)
		case 4: cout << "\nYou have quit the program.";
				break;
		
		//If user selected something other than the valid menu choices
		default: cout << "\nThe valid choices are 1 through 4. Run the program again and select one of those.";
	}
	
	return 0;
}
