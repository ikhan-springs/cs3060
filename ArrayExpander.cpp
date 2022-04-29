/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 9.11: Array Expander
* 04/13/2021
* This program first reads integers from a file into an array. The program 
* also contains a function that accepts the array of integers and the size of
* the array as parameters. The function then creates an array that is twice 
* the size of the array passed in and copies the argument array's values into 
* the new array. The rest of the array is filled with zeroes and a pointer to
* the array is returned. Lastly, the program will print the values of the
* expanded array.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int * expandArray(int [], int); //Function prototype

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
	int * expandedArrayPtr;
	ifstream inputFile;
	
	inputFile.open("data"); //Opening file for reading
	
	//Loop reads values from file into array
	for (int i = 0; i < N; i++) {
		inputFile >> originalArray[i];
	}
	
	inputFile.close(); //Closing file
	
	//Expanding array via a function and getting pointer to that array
	expandedArrayPtr = expandArray(originalArray, N);
	
	//Loop displays expanded array
	for (int i = 0; i < N*2; i++) {
		cout << expandedArrayPtr[i] << endl;
	}
	
	return 0;
	
} //Main

//Function that expands an array to twice its size and returns a pointer to the expanded array
int * expandArray(int array[], int size) {
	
	int * arrayPtr = new int[size*2]; //Pointer to return
	
	//For loop copies values and initializes second half of array
	for (int i = 0; i < size; i++) {
		arrayPtr[i] = array[i];
		arrayPtr[size*2-i-1] = 0;
	}
	
	return arrayPtr;
	
} //expandArray
