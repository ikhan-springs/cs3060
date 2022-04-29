/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 13.8: Circle Class
* 05/11/2021
* This program uses the Circle class to create one instance of a circle.  The user inputs the
* circle's radius and the area, diameter, and circumference will be displayed after that.
*/

#include <iostream>
#include "CircleClass.h"

using namespace std;

//Defining Circle class functions
//Default constructor
Circle::Circle() {
	radius = 0;
}
//Constructor that sets radius
Circle::Circle(double value) { 
	radius = value;
}
//Mutator function for radius
void Circle::setRadius(double value) {
	radius = value;
}
//Accessor function for radius
double Circle::getRadius() {
	return radius;
}
//Accessor function for area
double Circle::getArea() {
	return pi * radius * radius;
}
//Accessor function for diameter
double Circle::getDiameter() {
	return radius * 2;
}
//Accessor function for circumference
double Circle::getCircumference() {
	return 2 * pi * radius;
}

int main() {
	
	double radius; //Declaring radius
	
	//Getting user input for radius
	cout << "Enter radius: ";
	cin >> radius;
	
	Circle userCircle = Circle(radius); //Creating Circle object with user input
	
	//Displaying Circle object's area, diameter, and circumference
	cout << "\nThe circle's area is: " << userCircle.getArea();
	cout << "\nThe circle's diameter is: " << userCircle.getDiameter();
	cout << "\nThe circle's circumference is: " << userCircle.getCircumference();
	
	return 0;
}
