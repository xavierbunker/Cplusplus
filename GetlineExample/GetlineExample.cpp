// Using Getline
// Ch 3: Input/Output
// The purpose of this program is to compare cin and getline
// cin only allows us to capture single words; it does not allow spaces as input
// getline allows us to capture an entire line of text until a newline character is reached

/* Example of using multi-line comments and more useful info about getline vs cin . . .

	getline will take an entire line of text, space included, and save those
	values into the variable

	getline only works for string values

	cin will automatically push the next output down 1 line

	This is fine, most of the time. But, when using getline, it will pick up
	that newline character and use it as its input. We can overcome this
	problem by ignoring the newline character.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	// Variable declarations
	string name, major;
	int year;

	// Program title and description
	cout << "CIN VS GETLINE PRACTICE" << endl;
	cout << "This program will allow you to practice when to use cin and when to use getline." << endl << endl;

	// Prompt and get user input
	cout << "Enter your full name: ";
	getline(cin, name);

	cout << "Enter the year you started college: ";
	cin >> year;	// cin pushes a newline character into the input stream,
					// which would be collected by the getline below

	cin.ignore();	// this will ignore the newline character pushed out by
					// the cin above; we ONLY use cin.ignore when we have a
					// cin directly above a getline

	cout << "Enter your major: ";
	getline(cin, major);

	// ASSIGNMENT: add to this program
	/*
	In addition to the information already being collected above, also
	get a student's anticipated graduation year, GPA,
	and favorite class - in that order.
	Determine which datatype would be best to use for each.
	Determine whether to use cin or getline to collect the data.
	Also determine where you need to use cin.ignore().
	Output all of the data collected to the screen in the order shown below.
	*/

	system("cls"); // used to clear the screen before printing output

	// Output
	cout << "Name: " << name << endl;
	cout << "Major: " << major << endl;
	cout << "Year began college: " << year << endl;
	cout << "Anticipated graduation year: " << endl; // insert variable
	cout << "GPA: " << endl; // insert variable
	cout << "Favorite class: " << endl; // insert variable

	return 0;
}