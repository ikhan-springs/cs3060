/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 3.18: Pizza Pi
* 02/09/2021
* This program creates a story based on a few user inputs.
* Before the story is displayed, the program will ask for the user's name, city, age, a college, a profession, a type of animal, and a pet's name.
* These seven variables will be stored as strings and will be used to display the story.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	//Declaring all variables
	string name, city, age, college, profession, animal, petName;
	
	//Getting user input (including whitespace) for all variables
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter city: ";
	getline(cin, city);
	cout << "Enter age: ";
	getline(cin, age);
	cout << "Enter college: ";
	getline(cin, college);
	cout << "Enter profession: ";
	getline(cin, profession);
	cout << "Enter animal: ";
	getline(cin, animal);
	cout << "Enter pet name: ";
	getline(cin, petName);
	
	//Display story using variables
	cout << "\n\nThere once was a person named " << name << " who lived in " << city << ".";
	cout << "\nAt the age of " << age << ", " << name << " went to college at " << college << ".";
	cout << "\n" << name << " graduated and went to work as a " << profession << ".";
	cout << "\nThen, " << name << " adopted a(n) " << animal << " named " << petName << ".";
	cout << "\nThey both lived happily ever after!";
	
	return 0;
}
