/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 11.11: Monthly Budget
* 04/27/2021
* This program includes a structure that holds data fields part of a monthly budget.
* The program passes one such structure to a function where the user enters the amounts
* spent in one month for each budget category. The program then passes the structure to
* another function that displays a report showing the amount over or under in each budget
* category, as well as the total amount over or under for the entire budget.
*/

#include <iostream>
#include <iomanip>

#define FORMAT setw(6) << fixed << setprecision(2) << right //Used for formatting in displayReport

using namespace std;

//Defining structure for a monthly budget
struct monthlyBudget {
	double housing;
	double utilities;
	double household;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;
};

//Function prototypes
void getSpentAmounts(monthlyBudget&);
void displayReport(monthlyBudget);

//Constant variables that hold budget amounts
const double HOUSING = 500;
const double UTILITIES = 150;
const double HOUSEHOLD = 65;
const double TRANSPORTATION = 50;
const double FOOD = 250;
const double MEDICAL = 30;
const double INSURANCE = 100;
const double ENTERTAINMENT = 150;
const double CLOTHING = 75;
const double MISC = 50;
const double BUDGET_SUM = HOUSING+UTILITIES+HOUSEHOLD+TRANSPORTATION+FOOD+MEDICAL+INSURANCE+ENTERTAINMENT+CLOTHING+MISC;

int main () {
	
	monthlyBudget budget; //Creating a new budget struct
	
	getSpentAmounts(budget); //Getting amounts spent in the month
	
	displayReport(budget); //Display report
	
	return 0;
} //main

//Function that gets amounts spent for each budget category from user input
void getSpentAmounts(monthlyBudget &budget) {
	
	cout << "Enter the amount spent on housing: ";
	cin >> budget.housing;
	cout << "Enter the amount spent on utilities: ";
	cin >> budget.utilities;
	cout << "Enter the amount spent on household expenses: ";
	cin >> budget.household;
	cout << "Enter the amount spent on transportation: ";
	cin >> budget.transportation;
	cout << "Enter the amount spent on food: ";
	cin >> budget.food;
	cout << "Enter the amount spent on medical expenses: ";
	cin >> budget.medical;
	cout << "Enter the amount spent on insurance: ";
	cin >> budget.insurance;
	cout << "Enter the amount spent on entertainment: ";
	cin >> budget.entertainment;
	cout << "Enter the amount spent on clothing: ";
	cin >> budget.clothing;
	cout << "Enter the amount spent on miscellaneous expenses: ";
	cin >> budget.misc;
	
} //getSpentAmounts

//Function that displays report regarding this month's budget
void displayReport(monthlyBudget budget) {
	
	double fieldsSum; //Variable that holds sum of all expenses for the month
	
	//Display budget
	cout << "\nCategory\tBudgeted\tSpent\tOver(-)/Under";
	cout << "\n-------------------------------------------------------";
	cout << "\nHousing\t\t  " << FORMAT << HOUSING << "\t" << FORMAT << budget.housing << "\t\t" << FORMAT << HOUSING - budget.housing;
	cout << "\nUtilities\t  " << FORMAT << UTILITIES << "\t" << FORMAT << budget.utilities << "\t\t" << FORMAT << UTILITIES - budget.utilities;
	cout << "\nHousehold\t  " << FORMAT << HOUSEHOLD << "\t" << FORMAT << budget.household << "\t\t" << FORMAT << HOUSEHOLD - budget.household;
	cout << "\nTransportation\t  " << FORMAT << TRANSPORTATION << "\t" << FORMAT << budget.transportation << "\t\t" << FORMAT << TRANSPORTATION - budget.transportation;
	cout << "\nFood\t\t  " << FORMAT << FOOD << "\t" << FORMAT << budget.food << "\t\t" << FORMAT << FOOD - budget.food;
	cout << "\nMedical\t\t  " << FORMAT << MEDICAL << "\t" << FORMAT << budget.medical << "\t\t" << FORMAT << MEDICAL - budget.medical;
	cout << "\nInsurance\t  " << FORMAT << INSURANCE << "\t" << FORMAT << budget.insurance << "\t\t" << FORMAT << INSURANCE - budget.insurance;
	cout << "\nEntertainment\t  " << FORMAT << ENTERTAINMENT << "\t" << FORMAT << budget.entertainment << "\t\t" << FORMAT << ENTERTAINMENT - budget.entertainment;
	cout << "\nClothing\t  " << FORMAT << CLOTHING << "\t" << FORMAT << budget.clothing << "\t\t" << FORMAT << CLOTHING - budget.clothing;
	cout << "\nMiscellaneous\t  " << FORMAT << MISC << "\t" << FORMAT << budget.misc << "\t\t" << FORMAT << MISC - budget.misc;
	
	//Calculating fieldsSum
	fieldsSum = budget.housing + budget.utilities + budget.household + budget.transportation + budget.food + budget.medical + budget.insurance + 
				budget.entertainment + budget.clothing + budget.misc;
	
	//If under budget
	if (fieldsSum < BUDGET_SUM) {
		cout << "\nFor this month, you are under budget by $" << FORMAT << BUDGET_SUM - fieldsSum;
	}
	//If over budget
	else if (fieldsSum > BUDGET_SUM) {
		cout << "\nFor this month, you are over budget by $" << FORMAT << fieldsSum - BUDGET_SUM;
	}
	//If neither under or over budget
	else {
		cout << "\nFor this month, you are neither under budget or over budget";
	}
	
} //displayReport
