/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 4.18: The Speed of Sound
* 02/16/2021
* This program first shows a menu with three mediums through which sound can travel through (air, water, and steel).
* Then, the program asks for the user's choice in medium and then the user will be asked to enter the distance a sound wave will travel in the selected medium.
* Lastly, the program will display the amount of time it will take for the sound wave to travel the distance specified by the user.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	//Declaring all variables and initializing the constant variables
	const float AIR_SPEED = 1100;
	const float WATER_SPEED = 4900;
	const float STEEL_SPEED = 16400;
	int medium;
	float distance;
	
	//Displaying menu
	cout << "Select a medium:\n1. Air\n2. Water\n3. Steel\n\n";
	
	//Getting user input for choice - will be used in switch statement
	cout << "Enter your choice: ";
	cin >> medium;
	
	switch (medium) {
		
		//If user selected air from menu
		case 1: cout << "Enter the distance (in feet): "; //Getting user input for distance
				cin >> distance;
				
				//Check if distance is positive and then display
				if (distance < 0)
					cout << "You have entered an invalid distance. Please restart program and try again.";
				else
					cout << setprecision(4) << fixed << "\nA sound wave takes " << distance/AIR_SPEED << " seconds to travel " << distance << " feet through air.";
				break;
		
		//If user selected water from menu
		case 2: cout << "Enter the distance (in feet): "; //Getting user input for distance
				cin >> distance;
				
				//Check if distance is positive and then display
				if (distance < 0)
					cout << "You have entered an invalid distance. Please restart program and try again.";
				else
					cout << setprecision(4) << fixed << "\nA sound wave takes " << distance/WATER_SPEED << " seconds to travel " << distance << " feet through water.";
				break;
		
		//If user selected steel from menu
		case 3: cout << "Enter the distance (in feet): "; //Getting user input for distance
				cin >> distance;
				
				//Check if distance is positive and then display
				if (distance < 0)
					cout << "You have entered an invalid distance. Please restart program and try again.";
				else
					cout << setprecision(4) << fixed << "\nA sound wave takes " << distance/STEEL_SPEED << " seconds to travel " << distance << " feet through steel.";
				break;
		
		//If user selected an invalid menu option
		default: cout << "You have entered an invalid menu option. Please restart program and try again.";
	}
	
	return 0;
}
