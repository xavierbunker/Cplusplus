#pragma once


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class person
{
public:
	void info()
	{
		cout << "Welcome Parent's to the Parent Teacher Conference" << endl;
		cout << endl;
	}

	void name()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter Your First Name: " << endl;
			cin >> fname[a];

			cout << endl;

			cout << "Please Enter Your Last Name: " << endl;
			cin >> lname[a];
			cin.ignore();
		}
	}
	void addressinfo()
	{		
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter Your House Number & Street Name: " << endl;
			getline(cin,street[a]);

			cout << endl;

			cout << "Please Enter Your City Name: " << endl;
			cin >> city[a];


			cout << endl;

			cout << "Please Enter Your State Name: " << endl;
			cin >> state[a];

			cout << endl;

			cout << "Please Enter Your Zip Code: " << endl;
			cin >> zip[a];
			cin.ignore();
		}
	}
	void phonenumber()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter Your Phone Number: " << endl;
			getline(cin,PhoneNo[a]);
		}
	}
	void display()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Parent Name: " << fname[a] << " " << lname[a] << endl;
			cout << "Parent Address: " << street[a] << ", " << zip[a] << ", " << city[a] << ", " << state[a] << endl;
			cout << "Parent Phone Number: " << PhoneNo[a] << endl;

			cout << endl;
		}

	}
private:

	string street[100], PhoneNo[100];
	string city[10], state[10];
	double zip[10];

protected:
	string fname[10], lname[10];

};