//Name: Xavier L. Bunker
//Date: 2/12/2022
//Title: Grade List Program 2
//Description: To get you an average test score & compare peoples tests score with a For Loop

#include <iostream> // Header
#include <fstream> // Header
#include <string> // Header
#include <iomanip> // Header

//Const Int
const int NO_OF_TEST = 3;
const int NUM_OF_STUDENTS = 3;

using namespace std;

int main()
{
	// Variable
	string lname, fname;
	double test, test2, test3;
	double average;
	int studentNum;


	// File Stream Variable
	ifstream inData;
	ofstream outData;

	//Opening The Files
	inData.open("raw_scores.txt");
	outData.open("grades_formatted.txt");

	//Use ShowPoint
	outData << fixed << showpoint << setprecision(1);

	// So this wont repeat in the code. It will display once
	outData << setw(15) << left << "Name" << setw(10) << right << "Test 1" << setw(10) << right << "Test 2" << setw(10) << right << "Test 3" << setw(11) << right << "Test Avg." << endl;
	
	// Loop
	for (studentNum = 1; studentNum <= NUM_OF_STUDENTS; studentNum++)
	{
		// Read the file Data
		inData >> fname >> lname;
		inData >> test >> test2 >> test3;

		// Cal.
		average = (test + test2 + test3) / NO_OF_TEST;

		// Display Infromation
		outData << setw(10) << left << fname << lname << setw(9) << right << test << setw(10) << right << test2 << setw(10) << right << test3 << setw(10) << right << average << endl;

	}
	return 0;

}

