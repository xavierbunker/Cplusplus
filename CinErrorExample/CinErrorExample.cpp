// Program: cin error examples
// Ch 3: Input/Output

// The purpose of this program is to look at some possible errors
// that might occur if a user enters incorrect input

#include <iostream>

using namespace std;
int main()
{
	int int1, int2;
	double dbl;
	char ch;

	cout << "TESTING INPUT ERRORS" << endl;
	cout << "Tested by: <insert your name here>" << endl;
	cout << "This program is designed to read 2 integer values, followed \n";
	cout << "by a double value, followed by a character value.\n\n";

	/* INPUT FAILURE & FAIL STATE
	An attempt to read invalid data, such as trying to put a letter into an int
	or double, results in input failure. The input stream enters a state called
	the "fail state." Once it enters fail state, all further I/O statements using
	that stream are ignored. However, the program continues to execute with whatever
	values are stored in variables and produces incorrect results.
	*/

	// Run this program several times and purposely provide wrong data types
	// to see what kind of output is produced.
	cout << "Input, separated by spaces: ";
	cin >> int1 >> int2 >> dbl >> ch;

	// Output
	cout << "Integer 1: " << int1 << endl;
	cout << "Integer 2: " << int2 << endl;
	cout << "Double:    " << dbl << endl;
	cout << "Character: " << ch << endl;
}
