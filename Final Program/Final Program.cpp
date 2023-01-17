// Name: Xavier Bunker
// Date: 11/29/2022
// Title: Final Program
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;



class Movie : virtual public person 
{
public:

	void getdata()
	{
		while (!ifile.eof())
		{
			getline(ifile, temp);
			clean(temp);
			name.push_back(temp);

			if (temp == fmovie)
			{
				cout << "Found Your Favorite Movie: "<< fmovie << endl;
				cout << "You Are Amazing" << endl;
				cout << endl;
			}

			getline(ifile, temp);
			year.push_back(temp);

			getline(ifile, temp);
			gross.push_back(temp);

			
		}
		
	}

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

};	

int main()
{
	Movie info;
	info.userinput();
	info.filecheck();
	info.getdata();
	info.menu();

}

