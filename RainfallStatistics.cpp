/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 70002: Rainfall Statistics
* 03/30/2021
* This program prompts the user to enter the rainfall amount for each month of a year.
* Afterwards, the program will calculate and display the total rainfall for the year, 
* the average monthly rainfall, the month with the least amount of rain, and the month 
* with the most amount of rain.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	
	//Declaring variables and arrays
	const int MONTHS = 12;
	int lowestIndex, highestIndex;
	double sum, lowestRainfall, highestRainfall;
	double rainfall[MONTHS];
	string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	//Loop gathers user input for each month's rainfall amount
	for (int i = 0; i < MONTHS; i++) {
		cout << "Enter rainfall for " << months[i] << ": ";
		cin >> rainfall[i];
	
		//Loop validates input and makes sure input is not negative
		while (rainfall[i] < 0) {
			cout << "Invalid data (negative rainfall) -- retry\n";
			cout << "Enter rainfall for " << months[i] << ": ";
			cin >> rainfall[i];
		}
	}
	
	sum = 0;
	//Loop calculates total rainfall
	for (int i = 0; i < MONTHS; i++) {
		sum += rainfall[i];
	}
	
	//Initializing variables to the first month's values
	lowestIndex = highestIndex = 0;
	lowestRainfall = highestRainfall = rainfall[0];
	
	//Loop finds months with lowest and highest amounts of rainfall
	for (int i = 1; i < MONTHS; i++) {
		//If a lower amount is found
		if (lowestRainfall > rainfall[i]) {
			lowestRainfall = rainfall[i];
			lowestIndex = i;
		}
		//If a higher amount is found
		if (highestRainfall < rainfall[i]) {
			highestRainfall = rainfall[i];
			highestIndex = i;
		}
	}
	
	//Display calculations
	cout << "Total rainfall: " << sum << endl;
	cout << "Average rainfall: " << sum/MONTHS << endl;
	cout << "Least rainfall in: " << months[lowestIndex] << endl;
	cout << "Most rainfall in: " << months[highestIndex] << endl;
	
	return 0;
}

