/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 11.7: Customer Accounts
* 04/27/2021
* This program defines a structure to store data about a customer account. 
* Then, the program creates an array of 20 such structures. There is also a
* menu for the user to enter new account information, change account
* information, display all information, or exit the program. The program
* continues to run until the user chooses to exit the program.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Defining structure to store customer account data
struct customerAccount {
	string name, address, city, state, zipCode, phone, lastPayment;
	double balance;
};

//Function prototypes
void displayMenu(void);
customerAccount addNewAccount(void);
void displayAccount(customerAccount);
void editAccount(customerAccount&);

int main () {
	
	//Declaring variables
	int menuOption, numAccounts, editAccountNum;
	customerAccount customers[20];
	
	numAccounts = 0; //Initializing variable that stores number of accounts created
	
	//Loop runs until user chooses to exit the program
	do {
		displayMenu(); //Display menu
		
		//Get user input for option
		cout << "\nSelect an option: ";
		cin >> menuOption;
		
		//Loop runs until user inputs a valid menu option
		while (menuOption < 1 || menuOption > 4) {
			cout << "You have entered an invalid option.\nSelect an option: ";
			cin >> menuOption;
		}
		
		//If user wants to enter a new customer account
		if (menuOption == 1) {
			customers[numAccounts] = addNewAccount(); //New account created
			cout << "\nYou have entered information for customer " << numAccounts; //Statement to confirm new account
			numAccounts++; //Number of customer accounts has increased
		}
		//If user wants to edit an existing customer account
		if (menuOption == 2) {
			
			//If no accounts exist
			if (numAccounts == 0) {
				cout << "There are no customers to edit.";
			}
			else {
				//Get user input for which customer to edit
				cout << "Customer number: ";
				cin >> editAccountNum;
				
				//Loop makes sure input is a valid customer number
				while (editAccountNum >= numAccounts) {
					cout << "Invalid customer number.\nCustomer number: ";
					cin >> editAccountNum;
				}
				
				displayAccount(customers[editAccountNum]); //Display account details before editing
				editAccount(customers[editAccountNum]); //Edit account
			}
		}
		//If user wants to see all customer accounts
		if (menuOption == 3) {
			for (int i = 0; i < numAccounts; i++) {
				displayAccount(customers[i]);
			}
		}
		
	} while (menuOption < 4);
	
	return 0;
	
} //main

//Function that displays the menu
void displayMenu() {
	
	cout << "\n1. Enter new account information\n";
	cout << "2. Change account information\n";
	cout << "3. Display all account information\n";
	cout << "4. Exit the program\n";
	
} //displayMenu

//Function that initializes all fields for a new customer account
customerAccount addNewAccount() {
	
	customerAccount newAccount; //Struct that will be returned
	
	cout << "Enter customer name: ";
	getline(cin, newAccount.name);
	getline(cin, newAccount.name);
	cout << "Enter customer address: ";
	getline(cin, newAccount.address);
	cout << "Enter city: ";
	getline(cin, newAccount.city);
	cout << "Enter state: ";
	getline(cin, newAccount.state);
	cout << "Enter ZIP code: ";
	getline(cin, newAccount.zipCode);
	cout << "Enter telephone: ";
	getline(cin, newAccount.phone);
	cout << "Enter account balance: ";
	cin >> newAccount.balance;
	
	//Loop makes sure balance is not negative
	while (newAccount.balance < 0) {
		cout << "Balance cannot be negative.\nEnter account balance: ";
		cin >> newAccount.balance;
	}
	
	cout << "Enter date of last payment: ";
	getline(cin, newAccount.lastPayment);
	getline(cin, newAccount.lastPayment);
	
	return newAccount;
	
} //addNewAccount

//Function that displays the details of one customerAccount struct
void displayAccount(customerAccount customer) {
	
	cout << "\nCustomer Name: " << customer.name << endl;
	cout << "Customer Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "ZIP Code: " << customer.zipCode << endl;
	cout << "Telephone: " << customer.phone << endl;
	cout << "Account Balance: " << customer.balance << endl;
	cout << "Date of Last Payment: " << customer.lastPayment << endl;
	
} //displayAccount

//Function that edits fields of an existing customer account
void editAccount(customerAccount &customer) {
	
	char confirmChange; //Variable used to check if user wants to change data field or not
	
	cout << "Press y to change customer name: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new customer name: ";
		getline(cin, customer.name);
		getline(cin, customer.name);
	}
	cout << "Press y to change customer's address: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new address: ";
		getline(cin, customer.address);
		getline(cin, customer.address);
	}
	cout << "Press y to change customer's city: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new city: ";
		getline(cin, customer.city);
		getline(cin, customer.city);
	}
	cout << "Press y to change customer's state: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new state: ";
		getline(cin, customer.state);
		getline(cin, customer.state);
	}
	cout << "Press y to change customer's ZIP code: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new ZIP code: ";
		getline(cin, customer.zipCode);
		getline(cin, customer.zipCode);
	}
	cout << "Press y to change customer's telephone: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new telephone: ";
		getline(cin, customer.phone);
		getline(cin, customer.phone);
	}
	cout << "Press y to change account balance: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter new account balance: ";
		cin >> customer.balance;
	}
	cout << "Press y to change date of last payment: ";
	cin >> confirmChange;
	if (confirmChange == 'Y' || confirmChange == 'y') {
		cout << "Enter date of last payment: ";
		getline(cin, customer.lastPayment);
		getline(cin, customer.lastPayment);
	}
	
} //editAccount
