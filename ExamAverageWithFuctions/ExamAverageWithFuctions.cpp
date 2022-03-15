// Name:
// Date:
// Title:
//

#include <iostream>

using namespace std;

const int NO_OF_TEST = 3;

void testAverage();

double average(double x, double y, double z);

int main()
{
	cout << "Exam Average Program" << endl << endl;
	cout << "To Find Average of 3 Test Score" << endl << endl;

	testAverage();

	return 0;
}

void testAverage()
{
	double test, test2, test3;
	double aver;

	cout << "Please Enter Your First Test Score: ";
	cin >> test;

	cout << "Please Enter Your Second Test Score: ";
	cin >> test2;

	cout << "Please Enter Your Third Test Score: ";
	cin >> test3;

	aver = average(test, test2, test3);

	cout << "Test 1: " << test << endl;
	cout << "Test 2: " << test2 << endl;
	cout << "Test 3: " << test3 << endl;

	cout << "Average Test Score: " << aver << endl;
}

double average(double x, double y, double z)
{
	return (x + y + z) / NO_OF_TEST;
}