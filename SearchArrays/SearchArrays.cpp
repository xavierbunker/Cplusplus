// SearchArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 7;


int main()
{
   // Delcaring an array
	int list[ARRAY_SIZE] = { 35, 12, 27, 12, 45, 12, 30 };

	int num;

	bool isFound = false;

	int count = 0;

	cout << "We will search the array for you" << endl;

	cout << "What integer would you like to search for: ";
	cin >> num;


	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (list[i] == num)
		{
			isFound = true;
			break;
		}
	}
	if (isFound == true)
	{
		cout << "The number " << num << " is in the list." << endl;
	}
	else
	{
		cout << "The number " << num << " is no found!" << endl;
	}

	//Print number of times (frequency) of a number
	//in the list............

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (list[i] == num)
		{
			count++;
		}
	}
	cout << "The number " << num << " is in the list " <<
		count << " time." << endl;

	//Print the location where the number is found......

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (list[i] == num)
		{
			cout << "list [" << i << "] contains the number " <<
				num << endl;
		}
	}

	return 0;
}