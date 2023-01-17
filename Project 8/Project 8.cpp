// Name: Xavier  L. Bunker
// Date: 10/27/2022
// Title: Project 8
// Description: This code will ask for both parent and student information by the user to enter after each question that displays.

#include <iostream>
#include <string>
#include <vector>
#include "person.h"

using namespace std;


class student : public person
{
public:

	void studentinfo()
	{
		cout << "Welcome Student" << endl;
		cout << endl;
	}
	void studentname()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << "Please Enter Your First Name: " << endl;
			cin >> fname[a];

			cout << endl;

			cout << "Please Enter Your Last Name: " << endl;
			cin >> lname[a];
			cin.ignore();
		}
	}
	void gpa()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << endl;

			cout << "Please Enter Your Current GPA: " << endl;
			cin >> cgpa[a];
		}
	}
	void major()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << endl;

			cout << "Please Enter Your Major: " << endl;
			getline(cin,cmajor[a]);
		}

	}
	void credithours()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << endl;

			cout << "Please Enter Your Credit Hours: " << endl;
			cin >> credittime[a];
		}
	}
	void gradutionyear()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << endl;

			cout << "Please Enter Your Gradution Year: " << endl;
			cin >> gyear[a];
		}
	}
	void displaystudent()
	{
		for (int a = 0; a <= 2; a++)
		{
			cout << endl;

			cout << "Student Name: " << fname[a] << " " << lname[a] << endl;
			cout << "Student GPA: " << cgpa[a] << endl;
			cout << "Student Major: " << cmajor[a] << endl;
			cout << "Student Credit Hours: " << credittime[a] << endl;
			cout << "Student Gradution Year: " << gyear[a] << endl;
		}

	}
private:
	double cgpa[10], credittime[10], gyear[10];
	string cmajor[100];
};

int main()
{
	student ATU;

	ATU.info();
	ATU.name();
	ATU.addressinfo();
	ATU.phonenumber();
	ATU.display();
	ATU.studentinfo();
	ATU.studentname();
	ATU.major();
	ATU.credithours();
	ATU.gpa();
	ATU.gradutionyear();
	ATU.displaystudent();
}


