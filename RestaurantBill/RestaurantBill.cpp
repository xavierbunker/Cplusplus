// Your Name: Xavier L. Bunker
// Date: 1/25/2022
// Program Title: RestaurantBill
// Program Description: To know the cost of there bill plus tip.

#include <iostream> //Header Files
#include <string> //Header Files


using namespace std;

const double TAX_PERCENTAGE = 0.09;// Named constants

int main()
{
    // Variable declaration
	double foodBill, tip, totalBill, finalTax; 

	// Program title and description for the user
	cout << "Welcome to the Bill Calculator!" << endl;

	// User Input for bill value, tip...
	cout << "Please enter your food bill amount(In Dollars) ";
	cin >> foodBill;
	cout << "Thanks! What tip value would you like to choose?" << endl;

	// Inputs the tip values....
	cout << "For 10% Tip $ " << foodBill * 0.1 << endl;
	cout << "For 15% Tip $ " << foodBill * 0.15 << endl;
	cout << "For 20% Tip $ " << foodBill * 0.2 << endl;
	cout << "Choose a tip value: $ ";

	cin >> tip;

	// Calculations
	finalTax = foodBill * TAX_PERCENTAGE;
	totalBill = tip + foodBill + finalTax;

	// Output to the screen
	cout << "Your food bill is $ " << foodBill << endl;
	cout << "Tip.............. $ " << tip << endl;
	cout << "Tax.............. $ " << finalTax << endl;
	cout << "Total ........... $ " << totalBill << endl;

	return 0;
}