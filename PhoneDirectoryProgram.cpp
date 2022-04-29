/*
* Ibrahim Khan
* CS 3060-001
* Appendix G - Exercise 10758: Utility Program for phonedir
* 05/06/2021
* This program contains a file named phonedir.txt where each line contains a
* person's last name, first name, and email address.  The program allows the
* user to either lookup a string or add a string to the file.  The program
* continues to run on a loop until the user decides to exit.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function prototypes
void lookup(fstream&, string);
void add(fstream&, string, string, string);

int main () {
	
	//Declaring variables
	string command, lookupString, lastName, firstName, email;
	fstream phoneDir;
	
	//Give user directions on how to input commands
	cout << "These are the three commands that you can enter:\n";
	cout << "To lookup a string in the file: lookup \"string\"\n";
	cout << "To add an entry to the file: add \"last_name\" \"first_name\" \"email_address\"\n";
	cout << "To end the program: exit\n";
	
	//Loop runs until user decides to exit program
	do {
		//Ask user for command
		cout << "\nEnter command: ";
		cin >> command;
		
		//If user wants to lookup a string in file
		if (command == "lookup") {
			cin >> lookupString;
			lookup(phoneDir, lookupString);
		}
		//If user wants to add a string to the file
		else if (command == "add") {
			cin >> lastName >> firstName >> email;
			add(phoneDir, lastName, firstName, email);
		}
		
	} while (command != "exit");
	
	return 0;

} //main

//Function that searches file for a string match
void lookup(fstream &phoneDirFile, string search) {
	
	//Declaring variables
	string compare1, compare2, compare3;
	bool matchFound = false;
	
	phoneDirFile.open("phonedir.txt", ios::in); //Open file for reading
	
	//Loop runs until entire file has been read
	while (!phoneDirFile.eof()) {
		
		//Get one line from the file
		phoneDirFile >> compare1;
		phoneDirFile >> compare2;
		phoneDirFile >> compare3;
		
		//Compare each string from file to lookup string to check for a match
		if (compare1 == search || compare2 == search || compare3 == search) {
			matchFound = true;
			break; //End loop if a match is found
		}
	}
	
	phoneDirFile.close(); //Close file
	
	//If a match was found, display the matching line
	if (matchFound) {
		cout << compare1 << " " << compare2 << " " << compare3 << endl;
	}
	//If no match was found, display that it was not found
	else {
		cout << search << ": not found\n";
	}
	
} //lookup

//Function that adds a new line to the file
void add(fstream &phoneDirFile, string lastName, string firstName, string email) {
	
	phoneDirFile.open("phonedir.txt", ios::app); //Open file for appending
	phoneDirFile << endl << lastName << " " << firstName << " " << email; //Append strings
	phoneDirFile.close(); //Close file
	
} //add
