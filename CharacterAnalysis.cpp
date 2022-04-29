/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 10.15: Character Analysis
* 04/20/2021
* This program reads the contents of a file, text.txt, and will display the number
* of uppercase letters in the file, the number of lowercase letters in the file,
* and the number of digits in the file.
*/

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main () {
	
	//Declaring variables
	int numUpperChars, numLowerChars, numDigits;
	char character;
	ifstream inputFile;
	
	//Initializing counter variables to 0
	numUpperChars = numLowerChars = numDigits = 0;
	
	//Opening file for reading
	inputFile.open("text.txt");
	
	//Loop runs until entire file has been read
	while (inputFile.get(character)) {
		
		//If an uppercase character is found
		if (isupper(character)) {
			numUpperChars++;
		}
		//If a lowercase character is found
		else if (islower(character)) {
			numLowerChars++;
		}
		//If a digit is found
		else if (isdigit(character)) {
			numDigits++;
		}
	}
	
	inputFile.close(); //Close file
	
	//Display counters
	cout << "Uppercase characters: " << numUpperChars << endl;
	cout << "Lowercase characters: " << numLowerChars << endl;
	cout << "Digits: " << numDigits << endl;
	
	return 0;
}
