//Name: Xavier L. Bunker
//Date: 2/12/2022
//Title: Grade List Program
//Description: To get you an average test score & compare peoples tests score

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

const int NO_OF_TEST = 3;

using namespace std;

int main()
{
	// Variable

	//User 1
	string lname, fname;
	double test, test2, test3;
	double average;

	//User 2
	string lname2, fname2;
	double test4, test5, test6;
	double average2;

	//User 3
	string lname3, fname3;
	double test7, test8, test9;
	double average3;

	// File Stream Variable
	ifstream inData;
	ofstream outData;

	//Opening The Files
	inData.open("raw_scores.txt");
	outData.open("grades_formatted.txt");

	//Read The Data
	inData >> fname >> lname;
	inData >> test >> test2 >> test3;
	inData >> fname2 >> lname2;
	inData >> test4 >> test5 >> test6;
	inData >> fname3 >> lname3;
	inData >> test7 >> test8 >> test9;

	//Calculate Average
	average = (test + test2 + test3) / NO_OF_TEST;
	average2 = (test4 + test5 + test6) / NO_OF_TEST;
	average3 = (test7 + test8 + test9) / NO_OF_TEST;

	//Output

	outData << fixed << showpoint << setprecision(1);

	//Write Program Title
	outData << "Grade List Program" << endl << endl;
	outData << "To get you an average test score & compare peoples tests score" << endl << endl;

	//outData << "Name" << "                   " << "Test 1" << "   " << "Test 2" << "  " << "Test 3" << "   " << "Test Avg." << endl;
	outData << setw(15) << left << "Name" << setw(10) << right << "Test 1" << setw(10) << right << "Test 2" << setw(10) << right << "Test 3" << setw(11) << right << "Test Avg." << endl;

	//outData << fname << " " << lname << "           " << test << "      " << test2 << "      " << test3 << "        " << average << endl;
	outData << setw(10) << left << fname << lname << setw(9) << right << test << setw(10) << right << test2 << setw(10) << right << test3 << setw(10) << right << average << endl;
	outData << setw(7) << left << fname2 << lname2 << setw(14) << right << test4 << setw(10) << right << test5 << setw(10) << right << test6 << setw(10) << right << average2 << endl;
	outData << setw(7) << left << fname3 << lname3 << setw(14) << right << test7 << setw(10) << right << test8 << setw(10) << right << test9 << setw(10) << right << average3 << endl;

	return 0;

}

