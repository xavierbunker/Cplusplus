// Name: Xavier L. Bunker
// Date: 3/8/2022
// Title: Shapes With Loops
// Descpritson: The User Can Pick What shape they want to do.This code will restart when the get done with the shape.

#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
    int choice;
    double length, width, rectArea;
    double radius, circleArea;
    double height, base, trigArea;
    char answer;

    cout << "Welcome to Shape With Loops!\n";

    cout << "Out loops will help you to end or repeat this program";

    do
    {
        do
        {
            cout << "Please choose the corresponding number for the shape area"
                << "you wish to calculate from the options below: " << endl;
            cout << "1 - Rectangle Area " << endl;
            cout << "2 - Circle Area " << endl;
            cout << "3 - Triangle Area " << endl;
            cout << "4 - End the program " << endl;

            cout << "Please enter a choice from the menu here(1, 2, 3,and 4)";
            cin >> choice;

            if (choice == 4)
            {
                cout << "You Have Successfully ended the program!";
                return 1;
            }
            if (!cin || choice < 1 || choice > 3)
            {
                cout << "Invalid Menu Option! Please Try Again!" << endl;
                cin.clear();
                cin.ignore(100, '\n');
            }
        } while (!cin || choice < 1 || choice > 3);

        if (choice == 1)
        {
            cout << "Performing operation #1 : Rectangle Area" << endl;
            cout << "Please enter the length: ";
            cin >> length;

            cout << "Please Enter the Width: ";
            cin >> width;

            rectArea = length * width;

            cout << "The Area of your rectangle is: " << rectArea << " sq inch" << endl;
        }
        else if (choice == 2)
        {
            cout << "Performing operation #2 : Circle Area" << endl;
            cout << "Please enter the radius: ";
            cin >> radius;

            circleArea = PI * radius * radius;

            cout << "\n The Area of your circle is: " << circleArea << " sq inch" << endl;
        }
        else if (choice == 3)
        {
            cout << "Performing operation #3 : Triangle Area" << endl;
            cout << "Please enter the base: ";
            cin >> base;

            cout << "Please enter the Height: ";
            cin >> height;

            trigArea = 0.5 * base * height;

            cout << "\n The Area of your Triangle is: " << trigArea << " sq inch" << endl;
        }
        else
        {
            cout << "Input Error, Program Terminating.." << endl;
            return 1;
        }
        cout << "Would you like to find the area of another shape??(Y/N)";
        cin >> answer;

        system("cls");
    } while (answer == 'y' || answer == 'Y');
}

