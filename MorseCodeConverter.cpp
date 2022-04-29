/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 10.17: Morse Code Converter
* 04/20/2021
* This program asks the user to enter a string and then the program converts the
* string to Morse code.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main () {
	
	//Array of Morse code strings
	string morseStrings[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
							"...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...",
							"---..","----.","-----"," ","--..--",".-.-.-","..--..",".-..-.","---...",".----.","-....-","-..-.","-.--.","-.--.-"};
	
	//Array of chars - parallel array to morseStrings
	char compareChars[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
							'1','2','3','4','5','6','7','8','9','0',' ',',','.','?','"',':','\'','-','/','(',')'};
	
	//Declaring all other variables
	string userString;
	int matchIndex;
	bool matchFound;
	
	//Getting user input
	cout << "Enter a string and I will translate it to Morse code: ";
	getline(cin,userString);
	
	//Loop runs until each character's Morse code equivalent has been printed out
	for (int i = 0; i < userString.length(); i++) {
		
		//Initialize values before comparing
		matchIndex = 0;
		matchFound = false;
		
		//Loop runs until the corresponding Morse code match is found
		while (!matchFound) {
			
			//If match is not found
			if (toupper(userString[i]) != compareChars[matchIndex]) {
				matchIndex++;
			}
			//If match is found
			else {
				matchFound = true;
			}
		}
		
		//Display Morse code of current character iteration
		cout << morseStrings[matchIndex] << endl;
	}
	
	return 0;
}

