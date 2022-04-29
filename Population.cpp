/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 5.11: Population
* 02/25/2021
* This program first asks the user for the starting number of organisms.
* Then, the program asks the user for the average daily population increase, expressed as a decimal.
* Next, the user is asked for the number of days the organisms will multiply.
* Based on these inputs, the program displays the population size for each day.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	//Declaring variables
	int organisms, days;
	float dailyIncrease, populationSize;
	
	//Getting user input for organisms
	cout << "Enter the starting number of organisms: ";
	cin >> organisms;
	
	//Input validation - loop runs until number of organisms is at least 2
	while (organisms < 2) {
		cout << "The starting number of organisms must be at least 2.\n";
		cout << "Enter the starting number of organisms: ";
		cin >> organisms;
	}
	
	populationSize = organisms; //populationSize on day 0 is the same as number of starting organisms
	
	//Getting user input for daily population increase percentage
	cout << "Enter the average daily population increase (as a percentage): ";
	cin >> dailyIncrease;
	
	//Input validation - loop runs until increase percentage is positive
	while (dailyIncrease < 0) {
		cout << "The average daily population increase must be a positive value.\n";
		cout << "Enter the average daily population increase (as a percentage): ";
		cin >> dailyIncrease;
	}
	
	dailyIncrease += 1; //Adding one to dailyIncrease will make populationSize cumulative
	
	//Getting user input for number of days
	cout << "Enter the number of days they will multiply: ";
	cin >> days;
	
	//Input validation - loop runs until number of days is at least 1
	while (days < 1) {
		cout << "The number of days must be at least 1.\n";
		cout << "Enter the number of days they will multiply: ";
		cin >> days;
	}
	
	//Loop iterates through number of days and displays populationSize for each day
	for (int i = 1; i <= days; i++) {
		
		populationSize *= dailyIncrease; //Update populationSize by daily increase percentage
		
		cout << setprecision(0) << fixed; //Round to nearest whole number
		cout << "On day " << i << " the population size was " << populationSize << ".\n";
	}
	
	return 0;
}
