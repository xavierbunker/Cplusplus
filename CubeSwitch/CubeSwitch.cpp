// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double SIDE = 6;

int main()
{

	// Variable declaration
	double e, Boxvolume;
	double Surfacearea;
	double OneSurfacearea;

	int choice;

	//Program title and description for the user

	cout << "Cube Switching Code" << endl << endl;
	cout << "You Get To Pick What Getting Solve On A Cube" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1 : Perimeter of one side" << endl;
	cout << "2 - task #2 : Surface area of one side" << endl;
	cout << "3 - task #3 : Surface area of the entire box" << endl;
	cout << "4 - task #4 : Volume of the box" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations

	// Output to the screen

	switch (choice)
	{
	case 1:
		cout << "Perform task #1 : Perimeter of one side" << endl;
		break;
		
	case 2:
		cout << "Perform task #2 : Surface area of one side" << endl;
		cout << "Please Enter the Edge Numer: " << endl;
		cin >> e;

		OneSurfacearea = e * e;

		break;

	case 3:
		cout << "Perform task #3 : Surface area of the entire box" << endl;
		cout << "Please Enter the Edge Numer: " << endl;
		cin >> e;

		Surfacearea = SIDE * (e * e);

		cout << "Surface Area: " << Surfacearea << endl;

		break;

	case 4:
		cout << "Perform task #4 : Volume of the box" << endl;
		cout << "Please Enter the Edge Numer: " << endl;
		cin >> e;

		Boxvolume = e * e * e;

		cout << "Box Volume: " << Boxvolume << endl;

		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}
