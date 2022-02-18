// Xavier L. Bunker
// 2/15/2022
// Summer Job Program
// Program Description: This program is to get the total wage. You'll enter your payrate and enter the hours you've worked.

#include <iostream>															//Declare the correct header files...
#include <string>

using namespace std;

// Declare the correct named constants...
const double TAX_PERCENTAGE = 0.15;
const double SHOP_PERCENTAGE = 0.20;
const double ENT_PERCENTAGE = 0.10; 													// 10% tax
const double SAV_PERCENTAGE = 0.25;
const double REM_PERCENTAGE = 0.30;

int main()
{

	// Variable declaration...
	double hours;
	// Use the correct datatypes to declare the variables... Do not change the variable names.
	string firstName, lastName;
	double hoursWorked, payrate, wage;
	double totalTax, totalShopping, totalEntertainment, totalSavings, totalRemainder;

	//Program title and prompts for the user that I would like to print on the console...

	cout << "Welcome to my program. I can help you calculate your total wages, and the" 
		<< "amount after taxes, shopping, entertainment, savingsand remainder..." << endl;

		// Prompt user for inputs and save them in the declared variables...

	cout << "Please enter your first name: ";                      // Prompt user for first name
	cin >> firstName;                                    	 			// store name in firstName
	cout << "Please enter you last name: ";                    // Prompt user for last name
	cin  >> lastName;                                 				// store name in lastName
	cout << "Please enter your payrate: $";                       // Prompt user for pay rate
	cin >> payrate;                                 				// store value in payrate
	cout << "And, please enter how many hours you've worked: ";   // Prompt user for number of hours
	cin >> hours;

	// Calculate and store the values in their respective variables...

	wage = payrate * hours;
	totalTax = wage * TAX_PERCENTAGE;
	totalShopping = wage * SHOP_PERCENTAGE;
	totalEntertainment = wage * ENT_PERCENTAGE;
	totalSavings = wage * SAV_PERCENTAGE;
	totalRemainder = wage * REM_PERCENTAGE;

	// Output the final results to the console, displaying the values of each variable here...

	    cout << "First Name:        " << firstName << endl;
		cout << "Last Name:         " << lastName  << endl;
		cout << "Wage:              " << wage      << endl;
		cout << "Taxes:             " << totalTax  << endl;
		cout << "Shopping:          " << totalShopping << endl;
		cout << "Entertainment:     " << totalEntertainment << endl;
		cout << "Savings:           " << totalSavings << endl;
		cout << "Remainder:         " << totalRemainder << endl;

	// Please outut the rest of the values here...

	return 0;

}
