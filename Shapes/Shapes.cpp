// Your Name: Xavier  L. Bunker
// Date: 2/15/2022
// Program Title: Choose a Shape 
// Program Description: This code is to help you pick a number that 
// will send you to ur choice to find the area of the shape you pick.

// Headers Library

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
// Numbers That Does Not Change

const double PI = 3.14159265359;
const double HALF = 0.5;

int main()
{

	// Variable declaration

	int choice;
	double rectangleArea, circleArea, triangleArea;
	double length, width;
	double r;
	double b, h;

	// Program title and description for the user

	cout << "Shape Code \n" << endl; //User See Title 

	cout << "This Code Helps You Find The Area Of A Shape Of Your Choice" << endl << endl; // User See What it Can Do

	// User input
	// User Gets To Pick There Task

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1 : Rectangle Area" << endl;
	cout << "2 - task #2 : Circle Area" << endl;
	cout << "3 - task #3 : Triangle Area" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Output to the screen
	// Outputs What The User Picks

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;
		cout << "Please Enter Width Number: " << endl; // User Input
		cin >> width;
		cout << "Please Enter Length Number: " << endl; // User Input
		cin >> length;

		rectangleArea = width * length; // The Math

		cout << "Rectangle Area: " << rectangleArea << endl; // What The User Wants To See
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl; 
		cout << "PLease Enter Radius Number: " << endl; // User Input
		cin >> r;

		circleArea = PI * r * r; // The Math

		cout << "Circle Area: " << circleArea << endl; // What The User Wants To See
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
		cout << "Please Enter Base Number: " << endl; // User Input
		cin >> b;
		cout << "Please Enter Height Number: " << endl; // User Input
		cin >> h;

		triangleArea = HALF * b * h; // The Math

		cout << "Triangle Area: " << triangleArea << endl; // What The User Wants To See
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}
