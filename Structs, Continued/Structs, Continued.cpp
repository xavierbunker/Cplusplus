// Structs, Continued.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct student 
{
	string fname[10], lname[10];
	double grosspay, otpay, otwage, othours, hoursworked, hourlywage;

	void setpay()
	{
		if (hoursworked > 40)
		{
			otwage = hourlywage * 1.5;
			othours = hoursworked - 40; // remove the first 40 hours
			otpay = otwage * othours;
			grosspay* otpay + (40 * hourlywage);

		}
		else
		{
			grosspay = hourlywage * hoursworked;
		}
	}

	void getData()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << "Enter your first name: ";
			cin >> fname[a];

			cout << "Enter your last name: ";
			cin >> lname[a];

		}
	}
	void output()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << fname[a] << " " << lname[a] << endl;
		}
	}

};



int main()
{
	student atu;
	// atu is now the object of my struct

	atu.getData();
	atu.output();
}
