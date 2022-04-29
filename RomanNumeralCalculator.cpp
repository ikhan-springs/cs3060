/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 4.2: Roman Numeral Calculator
* 02/16/2021
* This program converts user inputted numbers into roman numerals and displays the roman numeral, using a switch statement.
* The program will not accept numbers less than 1 or greater than 10.
*/

#include <iostream>

using namespace std;

int main() {
	
	//Declaring variable
	int number;
	
	//Getting user input for number
	cout << "Enter a number (1 - 10): ";
	cin >> number;
	
	//switch statement displays the roman numeral of user input
	switch (number) {
		case 1: cout << "The Roman numeral version of " << number << " is I."; break;
		case 2: cout << "The Roman numeral version of " << number << " is II."; break;
		case 3: cout << "The Roman numeral version of " << number << " is III."; break;
		case 4: cout << "The Roman numeral version of " << number << " is IV."; break;
		case 5: cout << "The Roman numeral version of " << number << " is V."; break;
		case 6: cout << "The Roman numeral version of " << number << " is VI."; break;
		case 7: cout << "The Roman numeral version of " << number << " is VII."; break;
		case 8: cout << "The Roman numeral version of " << number << " is VIII."; break;
		case 9: cout << "The Roman numeral version of " << number << " is IX."; break;
		case 10: cout << "The Roman numeral version of " << number << " is X."; break;
		default: cout << "Invalid number. Please restart program and try again."; //Runs if user does not input value between 1 and 10
	}
	
	return 0;
}
