/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 6.23: isPrime Function
* 03/11/2021
* This program uses the isPrime function to create a list of prime numbers.
* The user is prompted for an integer less than 3001, and all prime numbers from 2 
* to the user input are written to a file called PrimeList.txt.
* If the user inputs a value greater than 3000 or less than 2, the program terminates.
*/

#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int); //Function prototype

int main () {
	
	//Declaring variables
	int input;
	ofstream outfile;
	
	//Gathering user input
	cout << "Enter the maximum value (must be less than 3001): ";
	cin >> input;
	
	//If user input is invalid - program terminated
	if (input < 2 || input > 3000) {
		exit(0);
	}
	
	outfile.open("PrimeList.txt"); //Open file for writing
	
	//Loop calls isPrime for every number in [2, user input value]
	for (int i = 2; i <= input; i++) {
		//If number is prime
		if (isPrime(i))
			outfile << i << endl; //Write number to file
	}
	
	outfile.close(); //Close file
	
	//Display final statement
	cout << "Prime numbers written to PrimeList.txt";
	
	return 0;
}

//Function that returns true if value passed in prime or else returns false
bool isPrime(int num) {
	
	//Loop iterates through all possible divisors greater than 1 up to value of num
	for (int i = 2; i <= num; i++) {
		
		//If a divisor is detected
		if (num % i == 0 && i < num)
			return false;
	}
	
	return true; //If no divisors greater than 1 were found
}
