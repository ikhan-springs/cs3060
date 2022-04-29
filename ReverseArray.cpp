/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 9.10: Reverse Array
* 04/13/2021
* This program first reads integers from a file into an array. The program also contains
* a function that accepts the array of integers and the size of the array as parameters.
* The function then creates a copy of the array in reverse order and returns a pointer to 
* the array. Lastly, the program will print the values of the reversed array.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int * reverseArray(int [], int); //Function prototype

int main () {
	
	int N; //Variable that holds number of names to read
	
	//Get user input for N
	cout << "Enter number of data values to read: ";
	cin >> N;
	
	//If N is greater than 50, program silently terminates
	if (N > 50 || N < 1) {
		exit(1);
	}
	
	//Declaring variables
	int originalArray[N];
	int * reverseArrayPtr;
	ifstream inputFile;
	
	inputFile.open("data"); //Opening file for reading
	
	//Loop reads values from file into array
	for (int i = 0; i < N; i++) {
		inputFile >> originalArray[i];
	}
	
	inputFile.close(); //Closing file
	
	//Reversing array via a function and getting pointer to that array
	reverseArrayPtr = reverseArray(originalArray, N);
	
	//Loop displays reversed array
	for (int i = 0; i < N; i++) {
		cout << reverseArrayPtr[i] << endl;
	}
	
	return 0;
	
} //Main

//Function that reverses an array and returns a pointer to the reversed array
int * reverseArray(int array[], int size) {
	
	int * arrayPtr = new int[size]; //Pointer to return
	
	//For loop adds values in reverse order
	for (int i = 0; i < size; i++) {
		arrayPtr[i] = array[size-i-1];
	}
	
	return arrayPtr;
	
} //reverseArray
