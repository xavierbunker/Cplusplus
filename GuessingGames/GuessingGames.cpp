// Name: Xavier Bunker
// Date: 3/15/2022
// Title: Guessing Game
// This code is a guess game that lets you pick the range intill you get get it wrong

//Header
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num, correct_num, guess, numTries, intE;
	numTries = 0;
	intE = 0;
	cout << "Welcome To The Guessing Game!!" << endl << endl;
	cout << "This came will let you pick your range and then let you guess the number 10 times!!" << endl << endl;
	cout << "Please pick your Range: ";
	cin >> num;

	srand(time(0));
	correct_num = rand() % num + 1; //Random Numbers and Let's the person pick the number

	//A Do/While loop
	//do {

		do
		{
			cout << "\n Please Pick A Number: ";
			cin >> guess; //User guess number

			if (correct_num < guess) // If the number is too big
			{
				cout << "\n The Number is to Big" << endl << endl;
			}
			else if (correct_num > guess) // If the number is to small
			{
				cout << "\n The Number is to Little" << endl << endl;
			}
			else if (correct_num == guess) //Number that is equal to the guess
			{
				cout << "\n You guess right" << endl;
				numTries = 9;
				intE = 100;
			}
			numTries++;
		} while (numTries <= 9); //end the game after 10 tries.

		if (intE != 100)
		{
			cout << "You Lose" << endl;
		}
		else
		{
			cout << "You WIN!!!" << endl;
		}
		//cout << "Try Again" << endl;

	//}while (numTries <=9);
}

