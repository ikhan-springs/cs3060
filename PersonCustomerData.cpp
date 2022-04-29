/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 15.7: PersonData and CustomerData Classes
* 05/06/2021
* This program works with two classes. The first class (PersonData) holds basic details about
* one person.  The second class (CustomerData) is a subclass of PersonData and holds two
* additional factors.  The main function is used to demonstrate the use of all accessor and
* mutator functions.
*/

#include <iostream>
#include <string>
#include "CustomerData.h"

using namespace std;

//PersonData mutator functions
void PersonData::setLastName(string str) {
	lastName = str;
}
void PersonData::setFirstName(string str) {
	firstName = str;
}
void PersonData::setAddress(string str) {
	address = str;
}
void PersonData::setCity(string str) {
	city = str;
}
void PersonData::setState(string str) {
	state = str;
}
void PersonData::setZip(string str) {
	zip = str;
}
void PersonData::setPhone(string str) {
	phone = str;
}


//CustomerData mutator functions
void CustomerData::setCustomerNumber(int num) {
	customerNumber = num;
}
void CustomerData::setMailingList(bool value) {
	mailingList = value;
}

int main () {
	
	//Declaring variables used to temporarily hold user input
	int tempInt;
	char tempChar;
	string tempString;
	
	//Creating an instance of CustomerData
	cout << "Creating derived class or subclass CustomerData from base class PersonData with: 'CustomerData customer1;'\n";
	CustomerData customer1;
	
	//Getting user input for customer's last name
	cout << "Enter customer's last name: ";
	getline(cin, tempString);
	cout << "customer1.setLastName(\"" << tempString << "\");\n";
	customer1.setLastName(tempString);
	
	//Getting user input for customer's first name
	cout << "Enter customer's first name: ";
	getline(cin, tempString);
	cout << "customer1.setFirstName(\"" << tempString << "\");\n";
	customer1.setFirstName(tempString);
	
	//Getting user input for customer's address
	cout << "Enter customer's address: ";
	getline(cin, tempString);
	cout << "customer1.setAddress(\"" << tempString << "\");\n";
	customer1.setAddress(tempString);
	
	//Getting user input for customer's city
	cout << "Enter customer's city: ";
	getline(cin, tempString);
	cout << "customer1.setCity(\"" << tempString << "\");\n";
	customer1.setCity(tempString);
	
	//Getting user input for customer's state
	cout << "Enter customer's state: ";
	getline(cin, tempString);
	cout << "customer1.setState(\"" << tempString << "\");\n";
	customer1.setState(tempString);
	
	//Getting user input for customer's zip code
	cout << "Enter customer's zip: ";
	getline(cin, tempString);
	cout << "customer1.setZip(\"" << tempString << "\");\n";
	customer1.setZip(tempString);
	
	//Getting user input for customer's phone number
	cout << "Enter customer's phone: ";
	getline(cin, tempString);
	cout << "customer1.setPhone(\"" << tempString << "\");\n";
	customer1.setPhone(tempString);
	
	//Getting user input for customer's customer number
	cout << "Enter customer's customer number: ";
	cin >> tempInt;
	cout << "customer1.setCustomerNumber(\"" << tempInt << "\");\n";
	customer1.setCustomerNumber(tempInt);
	
	//Getting user input if customer is on mailing list
	cout << "Enter 'y' if customer is on mailing list or 'n' if not: ";
	cin >> tempChar;
	//If customer is on mailing list
	if (tempChar == 'y') {
		customer1.setMailingList(true);
	}
	//If customer is not on mailiing list
	else {
		customer1.setMailingList(false);
	}
	
	//Display everything from the CustomerData instance by using accessor functions
	cout << "\n\nUsing all the get functions from both the base and derived class to show state of CustomerData object:\n\n";
	cout << "customer1.getLastName() = " << customer1.getLastName() << endl;
	cout << "customer1.getFirstName() = " << customer1.getFirstName() << endl;
	cout << "customer1.getAddress() = " << customer1.getAddress() << endl;
	cout << "customer1.getCity() = " << customer1.getCity() << endl;
	cout << "customer1.getState() = " << customer1.getState() << endl;
	cout << "customer1.getZip() = " << customer1.getZip() << endl;
	cout << "customer1.getPhone() = " << customer1.getPhone() << endl;
	cout << "customer1.getCustomerNumber() = " << customer1.getCustomerNumber() << endl;
	if (customer1.getMailingList()) {
		cout << "customer1.getMailingList() = true" << endl;
	}
	else {
		cout << "customer1.getMailingList() = false" << endl;
	}
	
	return 0;
	
} //main
