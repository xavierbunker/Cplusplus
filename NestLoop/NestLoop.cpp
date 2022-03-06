// Name: Xavier L. Bunker
// Date: 3/3/2022
// Title: Nest Loop Practice

#include <iostream>

using namespace std;

int main()
{
	// Declaring the loop variables......
	int i, j, rows;

	//Triangle 1 - Draw a triangle with 5 rows

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "Now It's Time To Create Yor Own Triangle!!!";
	//comment
	do
	{
		cout << "Enter Number Of Rows (Between 2 and 20)";
		cin >> rows;
		if (rows < 2 || rows > 20)
		{
			cout << "Invalid Number.";
		}
	} 
	while (rows < 2 || rows>20);
	
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
