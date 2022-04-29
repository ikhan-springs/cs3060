/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 70003: Monkey Business
* 03/30/2021
* This program tracks the number of pounds consumed by three different monkeys in a typical week.
* This information is stored in a 3x7 two-dimensional array, where each row represents a monkey and
* each column represents a day of the week. The user is asked to input the amount of pounds each monkey
* ate day by day. Then, the program displays the average amount of food eaten per day by all three 
* monkeys, whichever monkey ate the least amount of food in one day during the week, and whichever 
* monkey ate the most amount of food during the week.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	
	//Declaring variables and arrays
	const int MONKEYS = 3;
	const int DAYS = 7;
	int lowestRow, lowestColumn, highestRow, highestColumn;
	double sum, sumAverages, lowestAmount, highestAmount;
	double zooMonkeys[MONKEYS][DAYS];
	double averages[DAYS];
	string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	//Loop gathers user input for amount eaten and adds amount eaten per day by all monkeys to averages array
	for (int i = 0; i < DAYS; i++) {
		
		sum = 0; //Used to track amount eaten in one day by all three monkeys
		
		//Loop to gather user input
		for (int j = 0; j < MONKEYS; j++) {
			cout << "Enter the food eaten by monkey #" << j+1 << " on " << days[i] << ": ";
			cin >> zooMonkeys[j][i];
			
			//Loop validates input and makes sure input is not negative
			while (zooMonkeys[j][i] < 0) {
				cout << "Invalid (negative) food quantity -- re-enter\n";
				cout << "Enter the food eaten by monkey #" << j+1 << " on " << days[i] << ": ";
				cin >> zooMonkeys[j][i];
			}
			
			sum += zooMonkeys[j][i]; //Update amount eaten
		}
		
		averages[i] = sum; //Add amount eaten in one day to averages array
	}
	
	sumAverages = 0;
	//Loop adds daily intake into one variable
	for (int i = 0; i < DAYS; i++) {
		sumAverages += averages[i];
	}
	
	//Initializing variables to first array value
	lowestRow = lowestColumn = highestRow = highestColumn = 0;
	lowestAmount = highestAmount = zooMonkeys[0][0];
	
	//Loops find the most and least food consumed by which monkey
	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < MONKEYS; j++) {
			//If a lower amount is found
			if (lowestAmount > zooMonkeys[j][i]) {
				lowestAmount = zooMonkeys[j][i];
				lowestRow = j;
				lowestColumn = i;
			}
			//If a higher amount is found
			if (highestAmount < zooMonkeys[j][i]) {
				highestAmount = zooMonkeys[j][i];
				highestRow = j;
				highestColumn = i;
			}
		}
	}
	
	//Display findings
	cout << "Average food consumed daily: " << sumAverages/DAYS << endl;
	cout << "The least daily food consumed was by Monkey #" << lowestRow+1 << " on " << days[lowestColumn] << ".\n";
	cout << "The most daily food consumed was by Monkey #" << highestRow+1 << " on " << days[highestColumn] << ".\n";
	
	return 0;
}

