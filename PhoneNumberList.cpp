/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 10.18: Phone Number List
* 04/20/2021
* This program reads from a file and places these contents in an array of strings.
* Each string in the array contains a person's name and phone number.  The program 
* then prompts the user for a name or a partial name and searches through the array
* to display results matching what the user asked for.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
	
	//Declaring variables
	int index;
	string searchString;
	ifstream inputFile;
	string phonebook[50];
	
	index = 0; //Initialize index
	
	//Open file for reading
	inputFile.open("phonebook");
	
	//Loop runs until entire file has been read
	while (!inputFile.eof()) {
		getline(inputFile, phonebook[index]); //Copy file string to phonebook array
		index++; //Increment index
	}
	
	inputFile.close(); //Close file
	
	//Get user input for search phrase
	cout << "Enter a name or partial name to search for: ";
	getline(cin, searchString);
	
	//Loop runs based on number of strings read into phonebook array
	for (int i = 0; i < index; i++) {
		//If a search match was found
		if (phonebook[i].find(searchString) < index) {
			cout << phonebook[i] << endl; //Display entire line
		}
	}
	
	return 0;
}
