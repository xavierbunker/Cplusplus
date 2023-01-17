#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class person
{
public:
	void filecheck()
	{
		ifile.open("Movie.txt");

		if (!ifile.is_open())

		{
			cout << "!!!! File Not Found !!!!!!" << endl;

			exit(1);

		}
	}

	void userinput()
	{
		cout << "Please Enter First Name: " << endl;
		cin >> fname;

		cout << endl;

		cout << "Please Enter Last Name: " << endl;
		cin >> lname;

		cout << endl;

		cout << "What Is Your Favorite Movie: " << endl;
		cin >> fmovie;

		cout << endl;
	}

	void menu()
	{
		cout << "Welcome To Favorite Movie Sorter Menu " << endl;
		cout << endl;
		cout << "User: " << fname << " " << lname << endl;
		cout << endl;

		cout << "1. Sort By Movie Name" << endl;

		cout << "2. Sort By Year Of Release Data" << endl;

		cout << "3. Sort By Box Office Numbers" << endl;

		cout << "4. Display The Highest Grossing Movie" << endl;

		cout << "5. Display The Lowest Grossing Movie" << endl;

		cout << "6. Neither (Good-Bye)" << endl;

		cout << endl;

		cout << "You have selected: ";

		cin >> choice;

		cout << endl;

		shortdata(choice);
		display();

	}
	void display()
	{
		if (choice == 1)
		{
			cout << "Welcome! This Choice Shorts By Movie Names." << endl;
			cout << endl;

			output();
		}
		if (choice == 2)
		{
			cout << "Welcome! This Choice Shorts By Year Of Release Date." << endl;
			cout << endl;

			output();
		}
		if (choice == 3)
		{
			cout << "Welcome! This Choice Shorts By Box Office Numbers." << endl;
			cout << endl;

			output();
		}
		if (choice == 4)
		{
			cout << "Welcome! This Display Highest Grossing Movie" << endl;
			cout << endl;

			output2();
		}
		if (choice == 5)
		{
			cout << "Welcome! This Lowest Grossing Movie." << endl;
			cout << endl;

			output2();
		}
		if (choice == 6)
		{
			cout << "Thank You For Choosing My Program :)" << endl;
			cout << "            Come Again              " << endl;
			cout << "             GOOD-BYE               " << endl;
			cout << endl;

			menu();
		}
	}
	void output()
	{
		for (int a = 0; a < gross.size(); a++)
		{
			cout << name[a] << " " << year[a] << " " << gross[a] << endl;
		}
		cout << endl;
	}
	void output2()
	{

		cout << name[0] << " " << year[0] << " " << gross[0] << endl;

		cout << endl;
	}
	void shortdata(int choice)
	{

		for (int a = 0; a < name.size(); a++)
		{
			for (int b = 0; b < name.size() - 1; b++)
			{
				if (choice == 1)
				{
					if (name[b] > name[b + 1])
						swap(b);
				}
				else if (choice == 2)
				{
					if (year[b] > year[b + 1])
						swap(b);
				}
				else if (choice == 3)
				{
					if (gross[b] < gross[b + 1])
						swap(b);
				}
				else if (choice == 4)
				{
					if (gross[b] < gross[b + 1])
						swap(b);
				}
				else if (choice == 5)
				{
					if (gross[b] > gross[b + 1])
						swap(b);
				}
			}
		}
	}
	void swap(int b)
	{
		temp = name[b];
		name[b] = name[b + 1];
		name[b + 1] = temp;

		temp = year[b];
		year[b] = year[b + 1];
		year[b + 1] = temp;

		temp = gross[b];
		gross[b] = gross[b + 1];
		gross[b + 1] = temp;
	}
protected:
	ifstream ifile;
	vector<string> name, gross, year;
	string temp;
	int choice = 0;
	string fname, lname, fmovie;

};
