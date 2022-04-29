/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 12.7: Sentence Filter
* 05/04/2021
* This program asks the user for two files, one file for reading and the other for writing.
* The program then copies the sentences from the first file to the second file while also
* changing all the letters from uppercase to lowercase, except for the first letter of the
* sentence which will be uppercase.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main () {
	
	//Declaring variables
	char inputString[50];
	char outputString[50];
	string tempFileString;
	ifstream inputFile;
	ofstream outputFile;
	
	//Getting user input for file names
	cout << "Enter the name of the input file (file for reading): ";
	cin >> inputString;
	cout << "Enter the name of the output file (file for writing): ";
	cin >> outputString;
	
	//Opening files
	inputFile.open(inputString);
	outputFile.open(outputString);
	
	//Loop runs until user inputs valid name for input file
	while (inputFile.fail()) {
		inputFile.close(); //Close input file
		
		//Gather user input again for input file
		cout << "The input file you entered does not exist.\nEnter the name of the input file: ";
		cin >> inputString;
		
		inputFile.open(inputString); //Re-open input file
	}
	
	//Loop runs until entire input file has been read
	while (!inputFile.eof()) {
		
		getline(inputFile, tempFileString); //Read one line of input file
		
		tempFileString[0] = toupper(tempFileString[0]); //Capitalize the first letter
		
		//Loop runs until end of line and makes all other chars lowercase
		for (int i = 1; i < tempFileString.length(); i++) {
			tempFileString[i] = tolower(tempFileString[i]);
		}
		
		outputFile << tempFileString << endl; //Write the modified string to output file
	}
	
	//Close files
	inputFile.close();
	outputFile.close();
	
	return 0;
}

