/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 8.2: Lottery Winners
* 04/06/2021
* This progrom assumes that an individual buys 10 lottery tickets every week with the same
* 5-digit number combinations.  The user will be asked to enter this week's winning numbers.
* Then, the program searches through the 10 lottery tickets to see if the user has won the lottery.
*/

#include <iostream>
using namespace std;

int main () {
	
	//Declaring and initializing variables
	int userNumbers[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int winningNumber;
	bool matchFound = false;
	
	//Gathering user input
	cout << "Enter this week's 5-digit winning lottery number: ";
	cin >> winningNumber;
	
	//Loop makes sure user input is valid
	while (winningNumber < 0 || winningNumber > 99999) {
		cout << "Invalid number!\n";
		cout << "Enter this week's 5-digit winning lottery number: ";
		cin >> winningNumber;
	}
	
	//Loop performs a linear search
	for (int i = 0; i < sizeof(userNumbers)/sizeof(userNumbers[0]); i++) {
		//If a match is found
		if (userNumbers[i] == winningNumber) {
			matchFound = true;
			break;
		}
	}
	
	//Display appropriate statement
	if (matchFound) {
		cout << "You won this week!";
	}
	else {
		cout << "You did not win this week.";
	}
	
	return 0;
}

