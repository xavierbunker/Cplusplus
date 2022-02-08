// Manipulator practice
// Ch 3: Input/Output
// The purpose of this program is to practice using the some of the manipulators
// covered in Ch 3: fixed, showpoint, setprecision, setw

#include <iostream>
#include <string>
#include <iomanip> // needed to use manipulators

using namespace std;

int main()
{
	// Variable declarations
	string name1, name2;
	double score1, score2;

	// Program title and description
	cout << "MANIPULATOR PRACTICE" << endl;
	cout << "Program modified by : <INSERT YOUR NAME HERE>" << endl;
	cout << "The purpose of this program is to practice using the some of the\n";
	cout << "manipulators covered in Ch 3: fixed, showpoint, setprecision, setw"
		<< endl << endl;

	// User directions
	cout << "You will be asked to enter 2 first names and a score for each.\n";
	cout << "Then you will determine how to print the results in a \n";
	cout << "column format." << endl << endl;

	// Collect user input
	cout << "Enter first name for student #1: ";
	cin >> name1;
	cout << "Enter score for student #1: ";
	cin >> score1;

	cout << "Enter first name for student #2: ";
	cin >> name2;
	cout << "Enter score for student #2: ";
	cin >> score2;

	// Instructions for output:
	// Determine how to print the results in columns
	// Use column headings to label each column
	// Determine appropriate alignment for each column
	// Determine which manipulators are needed to control numerical output

	// Output results
	cout << fixed << showpoint << setprecision(1);


	cout << "Name:" << setw(5) << right <<"Score:" << endl;
	cout << setw(15) << left <<name1 << setw(5) << right << score1 << endl;
	cout << setw(15) << left << name2 << setw(5) << right << score2;

	return 0;
}
