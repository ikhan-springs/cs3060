/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 5.18: Population Bar Chart
* 02/25/2021
* This program reads population data from a file to display a bar chart.
* The file contains population numbers for every 20 years, starting from 1900 and ending with 2000.
* The bars for the bar chart are represented by asterisks and each asterisk represents 1,000 people.
* The program also validates the data from the file by making sure all values are positive.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	//Declaring variables
	int population;
	int year = 1900;
	ifstream inputFile;
	
	//Display bar chart title
	cout << "PRAIRIEVILLE POPULATION GROWTH\n(each * represents 1000 people)\n";
	
	inputFile.open("People.txt"); //Open file for reading
	
	//For loop runs until all data values from the file have been read
	for (int i = 0; i < 6; i++) {
		
		cout << endl << year << "|"; //Display year
		year += 20; //Increment year by 20 for next iteration
		
		inputFile >> population; //Read value from file into population variable
		
		//If population variable is negative
		if (population < 0) {
			cout << "BAD DATA";
			break;
		}
		
		//While loop runs until all asterisks for the year have been displayed
		while (population > 0) {
			cout << "*";
			population -= 1000;
		}
	}
	
	inputFile.close(); //Close file
	
	return 0;
}

