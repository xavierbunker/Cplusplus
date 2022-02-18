// Your Name: Xavier  L. Bunker
// Date: 2/15/2022
// Program Title: Choose a shape 
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double PI = 3.14159265359;

int main()
{

	// Variable declaration

	int choice;
	double rectangleArea, circleArea, triangleArea;
	double length, width;
	double r;

	//Program title and description for the user

	cout << "MENU TEMPLATE with IF ELSE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1" << endl;
	cout << "2 - task #2" << endl;
	cout << "3 - task #3" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations
	rectangleArea = width * length;
	circleArea = PI * r * r;

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}
