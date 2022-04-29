/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 3.4: Average Rainfall
* 02/09/2021
* This program asks the user three times to enter a month and the amount of rain that fell in that month.
* Then, the program will calculate the average rainfall for the three months and will display it in a statement.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	//Declaring all variables
	string month1, month2, month3;
	float rain1, rain2, rain3, average;
	
	//Getting user input for first month and the amount of rain that fell in that month
	cout << "Enter month: ";
	cin >> month1;
	cout << "Enter rainfall for " << month1 << ": ";
	cin >> rain1;
	
	//Getting user input for second month and the amount of rain that fell in that month
	cout << "Enter month: ";
	cin >> month2;
	cout << "Enter rainfall for " << month2 << ": ";
	cin >> rain2;
	
	//Getting user input for third month and the amount of rain that fell in that month
	cout << "Enter month: ";
	cin >> month3;
	cout << "Enter rainfall for " << month3 << ": ";
	cin >> rain3;
	
	average = (rain1+rain2+rain3)/3; //calculating average rainfall of the three months
	
	cout << setprecision(2) << fixed; //will display only 2 digits after decimal
	
	//Displays the average rainfall for the three months
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.";
	
	return 0;
}
