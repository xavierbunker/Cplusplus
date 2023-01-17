// Name: Xavier Bunker
// Date: 10/4/2022
// Title: MidTerm
// Discription: The code will short by user choice that they want to see. he code pulls from an input file.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct movie
{
	ifstream ifile;

	vector<string> name, gross, year;
	string temp;
	int choice = 0;

	//Checks to see if the file is there
	void filecheck()
	{
		ifile.open("Movie.txt");

		if (!ifile.is_open())

		{
			cout << "!!!! File Not Found !!!!!!" << endl;

			exit(1);

		}
	}
	//Menu Fuction
	void menu()
	{
				cout << "Welcome To Favorite Movie Sorter Menu " << endl;
				cout << endl;

				cout << "1. Sort By Movie Name" << endl;

				cout << "2. Sort By Year Of Release Data" << endl;

				cout << "3. Sort By Box Office Numbers" << endl;

				cout << "4. Neither (Good-Bye)" << endl;

				cout << endl;

				cout << "You have selected: ";

				cin >> choice;

				cout << endl;

				shortdata(choice);
				display();

				if (choice != 4)
				{
					output();
				}
				
				
			
	}
	//Pulls the data from the file
	void getdata()
	{
		while (!ifile.eof())
		{
			getline(ifile,temp);
			clean(temp);
			name.push_back(temp);

			getline(ifile, temp);
			year.push_back(temp);

			getline(ifile, temp);
			gross.push_back(temp);
		}
	}
	//Short it in order with help from another function
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
			}
		}
	}
	//Swap The Order
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
	//Display The Data
	void output()
	{
		for (int a = 0; a < gross.size(); a++)
		{
			cout << name[a] << " " << year[a] << " "<< gross[a] << endl;
		}
		cout << endl;
	}
	//Display Text For The Selection
	void display()
	{
		if (choice == 1)
		{
			cout << "Welcome! This Choice Shorts By Movie Names." << endl;
			cout << endl;
		}
		if (choice == 2)
		{
			cout << "Welcome! This Choice Shorts By Year Of Release Date." << endl;
			cout << endl;
		}
		if (choice == 3)
		{
			cout << "Welcome! This Choice Shorts By Box Office Numbers." << endl;
			cout << endl;
		}
		if (choice == 4)
		{
			cout << "Thank You For Choosing My Program :)" << endl;
			cout << "            Come Again              " << endl;
			cout << "             GOOD-BYE               " << endl;
		}
	}
	// Cleans Tags
	void clean(string& name)
	{
		for (int a = 0; a < name.length(); a++)
		{
			if (name[a] == '<')
			{
				for (int b = a; b < name.length(); b++)
				{
					if (name[b] == '>')
					{
						name.erase(a, b - a + 1);
						a--;
						break;
					}
				}
			}
		}
	}
	// Close ifile
	void close()
	{
		ifile.close();
	}
};

int main()
{
	movie info;

	info.filecheck();

	info.getdata();

	info.menu();

	info.close();

}
