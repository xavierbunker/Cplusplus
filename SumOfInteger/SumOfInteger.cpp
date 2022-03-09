// Name: Xavier Bunker
// Date: 3/8/2022
// Title: Sum of Integer
// Description: This code show how a while loop works with a do loop in it.

#include <iostream>

using namespace std;

int main()
{
    int numOfint, i, num, sum(0);
    char choice;

    cout << "Practice Sum of Integers! " << endl;

    cout << "This program lets the user enter a certain number "
        << "of integers( 2 to 10 ), with values from 0 to 1000 "
        << "and sum them togther" << endl;
    do
    {
        do
        {
            cout << "How many numbers do you want to add?" << endl;
            cout << "Please choose a number between 2 and 10" << endl;

            cin >> numOfint;

            if (!cin)
            {
                cout << "That is not an Integar! Program Terminating!!!";
                return 1;
            }
            if (numOfint < 2)
            {
                cout << "\n You need at least 2 integer to find the sumation " << endl;
            }
            if (numOfint > 10)
            {
                cout << "This Program can add up to 10 integer, please add"
                    << "a number within the range";
            }
        } while (numOfint < 2 || numOfint > 10);

        sum = 0;

        for (i = 1; i <= numOfint; i++)
        {
            do
            {
                cout << "Enter an integer (In range of 0 to 1000): ";
                cin >> num;

                if (!cin)
                {
                    cout << "\n That's not a integer!! Program Terminating!!!";
                    return 1;
                }
                if (num < 0 || num > 1000)
                {
                    cout << "\n Not a valid Number! Please enter a number"
                        << " The range of 0 to 1000" << endl << endl;
                }
            } while (num < 0 || num > 10000);

            sum += num;
        }

        cout << "The sumation of " << numOfint << " integer values you enter "
            << "is : " << sum << endl;
        cout << "Do you want to pick another integer?(y/n)";
            cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}
