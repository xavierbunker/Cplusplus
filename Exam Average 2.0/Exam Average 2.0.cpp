//Name: Xavier L. Bunker
//Date: 2/12/2022
//Title: Exam Average Program
//Description: To get you an average test score

#include <iostream>
#include <fstream>
#include <string>

const int NO_OF_TEST = 3;

using namespace std;

int main()
{
	// Variable

	//User 1
	string lname, fname;
	double test, test2, test3;
	double average;

	// File Stream Variable
	ifstream inData;
	ofstream outData;

	//Opening The Files
	inData.open("test_score.txt");
	outData.open("result.txt");

	//Read The Data
	inData >> fname >> lname;
	inData >> test >> test2 >> test3;

	//Calculate Average
	average = (test + test2 + test3) / NO_OF_TEST;

	//Output

	//Write Program Title
	outData << "Exam Average Program" << endl << endl;
	outData << "To Find Average of 3 Test Score" << endl << endl;

	outData << "Name: " << fname << " " << lname << endl;

	outData << "Test 1: " << test << endl;
	outData << "Test 2: " << test2 << endl;
	outData << "Test 3: " << test3 << endl;

	outData << "Average Test Score: " << average << endl;
	return 0;

}

