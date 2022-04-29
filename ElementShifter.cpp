/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 9.12: Element Shifter
* 04/13/2021
* This program first reads integers from a file into an array. The program 
* also contains a function that accepts the array of integers and the size 
* of the array as parameters. The function then copies values from the argument
* array into the new array with an index shift of one. The first element of the
* new array will be set to 0. A pointer to the array will be returned. Lastly, 
* the program will print the values of the shifted array.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int * shiftElements(int [], int); //Function prototype

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
	int * shiftedArrayPtr;
	ifstream inputFile;
	
	inputFile.open("data"); //Opening file for reading
	
	//Loop reads values from file into array
	for (int i = 0; i < N; i++) {
		inputFile >> originalArray[i];
	}
	
	inputFile.close(); //Closing file
	
	//Shifting array via a function and getting pointer to that array
	shiftedArrayPtr = shiftElements(originalArray, N);
	
	//Loop displays shifted array
	for (int i = 0; i < N+1; i++) {
		cout << shiftedArrayPtr[i] << endl;
	}
	
	return 0;
	
} //Main

//Function that shifts array values by one index and returns a pointer to the shifted array
int * shiftElements(int array[], int size) {
	
	int * arrayPtr = new int[size+1]; //Pointer to return
	
	arrayPtr[0] = 0; //First element initialized
	
	//For loop adds values in reverse order
	for (int i = 0; i < size; i++) {
		arrayPtr[i+1] = array[i];
	}
	
	return arrayPtr;
	
} //shiftElements
