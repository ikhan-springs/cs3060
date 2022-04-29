/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 8.5: Rainfall Statistics Modification
* 04/06/2021
* This program is a modification of the Rainfall Statistics program from Chapter 7.
* After obtaining user inputs and performing/displaying the calculations, the program 
* will then display the months in order of rainfall amount (greatest to lowest).
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	
	//Declaring variables and arrays
	const int MONTHS = 12;
	int lowestIndex, highestIndex;
	double sum, lowestRainfall, highestRainfall, tempRainfall;
	string tempMonth;
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
	
	//Loop that runs a selection sort
	for (int i = 0; i < MONTHS; i++) {
		highestIndex = i; //Index that will be sorted
		
		//Loop finds the highest value in the remaining elements of the array
		for (int j = i+1; j < MONTHS; j++) {
			if (rainfall[j] > rainfall[highestIndex]) {
				highestIndex = j;
			}
		}
		
		//Swap if a higher value was found
		if (highestIndex != i) {
			tempMonth = months[i];
			tempRainfall = rainfall[i];
			months[i] = months[highestIndex];
			rainfall[i] = rainfall[highestIndex];
			months[highestIndex] = tempMonth;
			rainfall[highestIndex] = tempRainfall;
		}
	}
	
	//Display months in order of rainfall
	for (int i = 0; i < MONTHS; i++) {
		cout << rainfall[i] << " inches in " << months[i] << endl;
	}
	
	return 0;
}

