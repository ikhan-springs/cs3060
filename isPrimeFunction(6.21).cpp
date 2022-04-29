/*
* Ibrahim Khan
* CS 3060-001
* Programming Project 6.21: isPrime Function
* 03/11/2021
* This program contains a function called isPrime that takes an integer as an argument.
* The function will return true if the integer is prime or else it will return false.
*/

#include <iostream>
using namespace std;

bool isPrime(int); //Function prototype

int main () {
	
	//Declaring variable
	int input;
	
	//Gathering user input
	cout << "Enter a number greater than 1 and I'll tell you whether it is prime: ";
	cin >> input;
	
	//Input validation - makes sure user input is greater than 1
	while (input <= 1) {
		cout << "Invalid input! Number must be greater than one.\n";
		cout << "Enter a number greater than 1 and I'll tell you whether it is prime: ";
		cin >> input;
	}
	
	//If the number is prime
	if (isPrime(input))
		cout << input << " is prime.";
	//If the number is not prime
	else
		cout << input << " is not prime.";
	
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
