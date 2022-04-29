/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 12.15: Average Number of Words
* 05/04/2021
* This program reads from a file of sentences and calculates the average number of words per sentence.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main () {
	
	//Declaring variables
	ifstream inputFile;
	int wordCount, sentenceCount;
	string tempString;
	
	wordCount = sentenceCount = 0; //Initializing counters
	
	inputFile.open("text.txt"); //Opening file for reading
	
	//Loop runs until entire file has been read
	while (!inputFile.eof()) {
		
		getline(inputFile, tempString); //Store one line from file into tempString
		
		//Loop iterates through each character of tempString
		for (int i = 0; i < tempString.length(); i++) {
			//If a space is detected, it means end of a word
			if (isspace(tempString[i])) {
				wordCount++; //Increment number of words in file
			}
		}
		
		wordCount++; //Account for last word in sentence
		sentenceCount++; //Increment for the sentence just read
	}
	
	inputFile.close(); //Close file
	
	//Display results and average
	cout << "Number of words = " << wordCount << endl;
	cout << "Number of sentences = " << sentenceCount << endl;
	cout << "Average number of words per sentence = " << wordCount / sentenceCount << endl;
	
	return 0;
}

