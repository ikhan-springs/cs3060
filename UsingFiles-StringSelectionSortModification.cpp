/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 8.11: Using Files - String Selection Sort Modification
* 04/06/2021
* This program sorts an array of strings using a selection sort algorithm. The program
* will prompt the user for the number of strings to be read and the program will read that
* number of strings from a file.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main () {
	
	int N; //Variable that holds number of names to read
	
	//Get user input for N
	cout << "Enter number of names to read: ";
	cin >> N;
	
	//If N is greater than 20, program silently terminates
	if (N > 20) {
		exit(1);
	}
	
	//Declaring variables
	int highestIndex;
	string tempString;
	string names[N];
	ifstream namesFile;
	
	namesFile.open("names"); //Opening file for reading
	
	//Loop reads names from file into the array
	for (int i = 0; i < N; i++) {
		getline(namesFile, names[i]);
	}
	
	namesFile.close(); //Closing file
	
	//Loop that runs a selection sort
	for (int i = 0; i < N; i++) {
		highestIndex = i; //Index that will be sorted
		
		//Loop finds the next name in alphabetical order
		for (int j = i+1; j < N; j++) {
			if (names[j] < names[highestIndex]) {
				highestIndex = j;
			}
		}
		
		//Swap if array elements need to be changed
		if (highestIndex != i) {
			tempString = names[i];
			names[i] = names[highestIndex];
			names[highestIndex] = tempString;
		}
	}
	
	//Display names in alphabetical order
	for (int i = 0; i < N; i++) {
		cout << names[i] << endl;
	}
	
	return 0;
}

