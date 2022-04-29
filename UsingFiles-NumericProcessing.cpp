/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 5.24: Using Files - Numeric Processing
* 02/25/2021
* This program reads the values from Random.txt to display the number of values in the file, 
* the sum of all the numbers, and the average of all the numbers.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	//Declaring variables
	int valueHolder, numValues, sumValues, averageValues;
	ifstream inputFile;
	
	inputFile.open("Random.txt"); //Open file for reading
	
	//Initializing the variables that will be used in while loop
	numValues = 0;
	sumValues = 0;
	
	//While loop runs until all values have been read from file
	while (inputFile >> valueHolder) {
		numValues++; //Add 1 to number of values in file
		sumValues += valueHolder; //Add the value most recently read to sumValues
	}
	
	averageValues = sumValues / numValues; //Calculate average of all values in the file
	
	//Display results
	cout << "Number of numbers: " << numValues << endl;
	cout << "Sum of the numbers: " << sumValues << endl;
	cout << "Average of the numbers: " << averageValues << endl;
	
	inputFile.close(); //Close file
	
	return 0;
}

