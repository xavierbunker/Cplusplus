// Name: Xavier  L. Bunker
// Date: 11/7/2022
// Title: Project 9
// Description: This code will ask for both parent and student and teacher and school information by the user to enter after each question that displays.

#include <iostream>
#include <string>
#include <vector>
#include "person.h"

using namespace std;


class student : virtual public person
{
public:

	void studentinfo()
	{
		cout << "Welcome Student's" << endl;
		cout << "Please Enter Info For The Teacher Conference" << endl;
		cout << endl;
	}
	void studentname()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << "Please Enter Your First Name: " << endl;
			cin >> fname[a];

			cout << endl;

			cout << "Please Enter Your Last Name: " << endl;
			cin >> lname[a];
			cin.ignore();
		}
	}
	void homeroom()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter Your Homeroom Teacher: " << endl;
			getline(cin, hroom[a]);
		}

	}
	void teacherroom()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter The Teacher Name: " << endl;
			cin >> teacher[a];
		}
	}
	void gradeyear()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "What Grade Are You In: " << endl;
			cin >> ygrade[a];
		}
	}
	void displaystudent()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Student Name: " << fname[a] << " " << lname[a] << endl;
			cout << "Student Homeroom Teacher: " << hroom[a] << endl;
			cout << "Teacher That The Student Is Visiting: " << teacher[a] << endl;
			cout << "Student Grade: " << ygrade[a] << " Grade" << endl;
		}

	}
string teacher[100];
private:
	double ygrade[10];
	string hroom[100];
	
};
class Teacher : virtual public person
{
public:

	void teacherinfo()
	{
		cout << endl;
		cout << "Welcome Teachers" << endl;
		cout << "Please Enter Info For The Teacher Conference" << endl;
		cout << endl;
	}
	void teachername()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << "Please Enter Your First Name: " << endl;
			cin >> fname[a];

			cout << endl;

			cout << "Please Enter Your Last Name: " << endl;
			cin >> lname[a];
			cin.ignore();
		}
	}
	void teacherroomnumber()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Please Enter The Room Number: " << endl;
			cin >> teacherroomn[a];
		}
	}
	void studentgrade()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "What is The Student Grade: " << endl;
			getline(cin, sgrade[a]);
		}
	}
	void displayteacher()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "Teacher Name: " << fname[a] << " " << lname[a] << endl;
			cout << "Teacher Room: " << teacherroomn[a] << endl;
			cout << "The Student Grade For The Class: " << sgrade[a] << endl;
		}

	}
	double teacherroomn[100];
private:
	
	string sgrade[10];
};
class School : virtual public student, public Teacher
{
public:

	void schoolinfo()
	{
		cout << "Here is all the school info after you fill out all the info form above" << endl;
		cout << endl;
	}

	void schoolname()
	{
		for (int a = 0; a <= 1; a++)
		{
			cout << endl;

			cout << "School Name: " <<  endl;
			getline(cin, sname[a]);
		}

	}

	void displayschool()
	{
		for (int a = 0; a <= 0; a++)
		{
			cout << endl;

			cout << "School Name:  " << sname[a] << endl;
			cout << "Teacher Name: " << teacher[a] << endl;
			cout << "Teacher Room: " << teacherroomn[a] << endl;
		}

	}
private:
	string sname[10];
};

int main()
{
	School SchoolInfo;

	SchoolInfo.info();
	SchoolInfo.name();
	SchoolInfo.addressinfo();
	SchoolInfo.phonenumber();
	SchoolInfo.display();
	SchoolInfo.studentinfo();
	SchoolInfo.studentname();
	SchoolInfo.homeroom();
	SchoolInfo.gradeyear();
	SchoolInfo.teacherroom();
	SchoolInfo.displaystudent();
	SchoolInfo.teacherinfo();
	SchoolInfo.teachername();
	SchoolInfo.teacherroomnumber();
	SchoolInfo.studentgrade();
	SchoolInfo.displayteacher();
	SchoolInfo.schoolname();
	SchoolInfo.displayschool();
}
