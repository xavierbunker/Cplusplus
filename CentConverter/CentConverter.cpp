// 
//

//Header
#include <iostream>

using namespace std;

//Declaring The Constants
const int quarter = 25;
const int dime = 10;
const int nickel = 5;

int main()
{
	//Variable
	int quarterAmount, dimeAmount, nickelAmount;
	int quarterTotal, dimeTotal, nickelTotal;
	int coinTotal;

	//Program Title
	cout << "Welcome to my program!! I can help see you how much you have in quarters,!!" 
		<< " dimes, nickels ,and the sum of it all together" << endl;

	// Prompt user for inputs and save them in the declared variables...

	cout << "Please enter how many quarters you have: ";                    // Prompt user for Quarter Amount
	cin >> quarterAmount;                                    	// store user in quarterAmount
	cout << "Please enter how many dimes you have:    ";                      // Prompt user for Dime Amount
	cin >> dimeAmount;                                 			// store name in dimeAmount
	cout << "Please enter how many nickels you have:  ";                       // Prompt user for Nickel Amount
	cin >> nickelAmount;                                         // store value in nickelAmount
	
	//Math
	quarterTotal = quarterAmount * quarter;
	dimeTotal = dimeAmount * dime;
	nickelTotal = nickelAmount * nickel;
	coinTotal = quarterTotal + dimeTotal + nickelTotal;

	//Output
	cout << "Quarter Total:      " << quarterTotal << endl;
	cout << "Dime Total:         " << dimeTotal << endl;
	cout << "Nickel Total:       " << nickelTotal << endl;
	cout << "All Together Total: " << coinTotal << endl;
	
	
	return 0;
}

