// Name: Xavier L. Bunker
// Date: 4/26/2022
// Program: Parallel Array
// Program Description: The Example of Parallel Array

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const int ARRAY_SIZE = 5;

int main()
{
	// VAriable Declaration
	string name[ARRAY_SIZE];
	int age[ARRAY_SIZE];

	// Program Title and Description for the user
	cout << "Parallel Array Exxample " << endl << endl;

	cout << "This program shows the example of parallel array " << endl
		<< "Only hold data of one type. So, if you want to store something" << endl
		<< "like names and ages you must store then in different " << endl << endl

		<< "This program will ask for 5 names and their corresponding " << endl
		<< "ages and then output the results in culmuns." << endl << endl;

	// User Input
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter a name: ";
		getline(cin, name[i]);

		cout << "Enter the age: ";
		cin >> age[i];

		cin.ignore(); // ignores the new line character after age before beginning of the the next 
	}
	// Output for the solution
	// Print the Headlines
	system("cls");
	cout << setw(20) << left << "Name" << setw(4) << right << "Age" << endl;

	//Print names and ages

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << setw(20) << left << name[i] << setw(4) << right << age[i] << endl;

	}

	return 0;
}
