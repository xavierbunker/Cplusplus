// Your Name: Xavier L. Bunker
// Date: 2/24/2022
// Program Title: Cube Switching Code
// Program Description: Code that lets user pick the part a cube that want to find information on.

#include <iostream> // Header
#include <string> // Header
#include <iomanip> //Header

using namespace std;

// Named constants
// Number that cant be change by user
const double SIDE = 6;

int main()
{

	// Variable declaration
	// Used to plug in numbers or data that is being stored
	double e, Boxvolume;
	double Surfacearea;
	double OneSurfacearea;
	double onePerimeterSide;

	int choice;

	//Program title and description for the user
	//Tell the user what is going on before the perform the task

	cout << "Cube Switching Code" << endl << endl;
	cout << "You Get To Pick What Getting Solve On A Cube" << endl << endl;

	// User input
	// Ask the user what they want to do and then direct them to it

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1 : Perimeter of one side" << endl;
	cout << "2 - task #2 : Surface area of one side" << endl;
	cout << "3 - task #3 : Surface area of the entire box" << endl;
	cout << "4 - task #4 : Volume of the box" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Output to the screen

	switch (choice)
	{
	case 1:
		cout << "Perform task #1 : Perimeter of one side" << endl; // Tell what the user picked
		cout << "Please Enter the Edge Number: " << endl; // Ask user for input
		cin >> e;

		onePerimeterSide = 4 * e; // Calculations

		cout << "Perimeter Of One Side: " << onePerimeterSide << endl;

		break;
		
	case 2:
		cout << "Perform task #2 : Surface area of one side" << endl; // Tell what the user picked
		cout << "Please Enter the Edge Numer: " << endl; // Ask user for input
		cin >> e;

		OneSurfacearea = e * e; // Calculations

		cout << "Surface Area Of One Side: " << OneSurfacearea << endl;

		break;

	case 3:
		cout << "Perform task #3 : Surface area of the entire box" << endl; // Tell what the user picked
		cout << "Please Enter the Edge Numer: " << endl; // Ask user for input
		cin >> e;

		Surfacearea = SIDE * (e * e); // Calculations

		cout << "Surface Area: " << Surfacearea << endl;

		break;

	case 4:
		cout << "Perform task #4 : Volume of the box" << endl; // Tell what the user picked
		cout << "Please Enter the Edge Numer: " << endl; // Ask user for input
		cin >> e;

		Boxvolume = e * e * e; // Calculations

		cout << "Box Volume: " << Boxvolume << endl;

		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}
