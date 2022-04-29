/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 6.16: Transient Population
* 03/04/2021
* This program calculates population change over a certain period of time based on birth rate, 
* death rate, and the rate of people moving in and out.  The user is prompted for the annual 
* birth rate, the annual death rate, average population arrivals, average population departures, 
* starting size of the population, and the number of years to display population change per year.
* This program also validates all user inputs and make sure starting population size is greater
* than 2 and all other variables are positive.
*/

#include <iostream>
using namespace std;

int calculatePopulationSize(int, float, float, int, int);

int main () {
	
	int P, A, M, nYears;
	float B, D;
	
	cout << "This program calculates population change." << endl;
	
	cout << "Enter the starting population size: ";
	cin >> P;
	
	while (P < 2) {
		cout << "Starting population must be 2 or more.\nPlease re-enter: ";
		cin >> P;
	}
	
	cout << "Enter the annual birth rate (as % of current population): ";
	cin >> B;
	
	while (B < 0) {
		cout << "Birth rate percent cannot be negative.\nPlease re-enter: ";
		cin >> B;
	}
	
	cout << "Enter the annual death rate (as % of current population): ";
	cin >> D;
	
	while (D < 0) {
		cout << "Death rate percent cannot be negative.\nPlease re-enter: ";
		cin >> D;
	}
	
	cout << "How many individuals move into the area each year? ";
	cin >> A;
	
	while (A < 0) {
		cout << "Arrivals cannot be negative.\nPlease re-enter: ";
		cin >> A;
	}
	
	cout << "How many individuals leave the area each year? ";
	cin >> M;
	
	while (M < 0) {
		cout << "Departures cannot be negative.\nPlease re-enter: ";
		cin >> M;
	}
	
	cout << "For how many years do you wish to view the population changes? ";
	cin >> nYears;
	
	while (nYears <= 0) {
		cout << "Years must be one or more.\nPlease re-enter: ";
		cin >> nYears;
	}
	
	cout << "\nStarting population: " << P << endl << endl;
	
	for (int i = 1; i <= nYears; i++) {
		P = calculatePopulationSize(P, B, D, A, M);
		cout << "Population at the end of year " << i << " is " << P << ".\n";
	}
}

int calculatePopulationSize(int P, float B, float D, int A, int M) {
	
	return P + (B*P) - (D*P) + A - M;
}

