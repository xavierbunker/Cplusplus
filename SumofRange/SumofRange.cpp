// Name: Xavier Bunker
// Date: 3/15/2022
// Title: Sum Of Range
// Description: Give a range in between the user two points.

#include <iostream> //Header

using namespace std;


int main()
{
	//Declaring Variables
	int choice1, choice2 ,sum=0; 

	//Telling User What The Code is and doing
	cout << "Welcome to Sum of Range Code" << endl << endl;
	cout << "This Code Will Help Add A Sum Togther When You Pick A Number In Set Range" << endl << endl;

	//The user pick starting range
	cout << "Please Pick The Beginning Number of the Range" << endl << endl;
	cout << "Start of Range: ";
	cin >> choice1;

	//The user pick ending range
	cout << "\n Please Pick The Ending Number of the Range" << endl << endl;
	cout << "End of Range: ";
	cin >> choice2;

	//For loop
	for (int count = choice1; count <= choice2; count++)
	{
		sum = sum + count;
	}
	//Clear the info above
	system("cls");

	// Show user data
	cout << "Beginning Range: " << choice1 << endl << endl;
	cout << "Ending Range: " << choice2 << endl << endl;
	cout << "The Range Is: " << sum << endl << endl;
	return 0;
}
