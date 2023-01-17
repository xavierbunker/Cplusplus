//
//
//
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct movie
{
	ifstream ifile;

	string text;

	string temp;

	string year[100], gross[100], name[1000], list[1000];

	int choice[1000];

	void filecheck()
	{

		if (!ifile.is_open())

		{
			cout << text << "!!!! File Not Found !!!!!!" << endl;

			exit(1);

		}
	}
	void menu()
	{
		for (int a = 0; a <= 0; a++)
		{
			while (choice[a] != 4)

			{
				cout << "Welcome To Favorite Movie Sorter Menu " << endl;
				cout << endl;

				cout << "1. Sort By Movie Name" << endl;

				cout << "2. Sort By Year Of Release Data" << endl;

				cout << "3. Sort By Box Office Numbers" << endl;

				cout << "4. Neither (Good-Bye)" << endl;

				cout << endl;

				cout << "You have selected: ";

				cin >> choice[a];

				cout << endl;

				if (choice[a] == 1)
				{
					cout << "Welcome! This Choice Shorts By Movie Names." << endl;
				}
				if (choice[a] == 2)
				{
					cout << "Welcome! This Choice Shorts By Year Of Release Date." << endl;
				}
				if (choice[a] == 3)
				{
					cout << "Welcome! This Choice Shorts By Box Office Numbers." << endl;
				}
				if (choice[a] == 4)
				{
					cout << "Thank You For Choosing My Program :)" << endl;
					cout << "            Come Again              " << endl;
					cout << "             GOOD-BYE               " << endl;
				}

			}

		}
	}
	void getdata()
	{
		while (!ifile.eof())
		{
			ifile >> list[counter];
			counter++;
		}
		//return counter;
	}
	void shortdata()
	{

		for (int a = 0; a <= counter; a++)
		{
			for (int b = 0; b <= counter - 1; b++)
			{
				if (name[b] > name[b + 1])
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
			}
		}
	}

};

int main()
{
	movie info;

	info.ifile.open("Movie.txt");

	info.filecheck();

	info.getdata();

	info.shortdata();

	info.menu();

}
