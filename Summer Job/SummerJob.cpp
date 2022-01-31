// Name: Xavier L. Bunker
// Date: 1-30-2022
// Program Title: Budget Machine
// Program Description: This Code will help you budget when you have a job in the summer.

#include <iostream> // Header File
#include <string>   // Header File

using namespace std;

//Constant Variable
const double taxPercent = 0.15;
const double shoppingPercent = 0.20;
const double entertainmentPercent = 0.10;
const double savingsPercent = 0.25;
const double remainderPercent = 0.30;

int main()
{
    //Double Variable
    double weeklywage, wage, hours, tax, shopping, entertainment, saving, remainder;
    //String Variable
    string namef, namel;

    //Tell The User What is Doing
    cout << "Welcome to the Budget Machine" << endl;

    //Input User Information
    cout << "What is Your First Name: ";
    cin >> namef;

    cout << "What is Your Last Name: ";
    cin >> namel;

    cout << "What is Your Hourly Pay: $";
    cin >> wage;

    cout << "Please Enter Hours Worked this Week: ";
    cin >> hours;

    //Formulas
    weeklywage = hours * wage;
    tax = weeklywage * taxPercent;
    shopping = weeklywage * shoppingPercent;
    entertainment = weeklywage * entertainmentPercent;
    saving = weeklywage * savingsPercent;
    remainder = weeklywage - (saving + entertainment + shopping + tax);

    //Output
    cout << "\n" << "Name:          " << namef << " " << namel << endl;
    cout << "Weekly Wage:   $" << weeklywage << endl;
    cout << "Tax:           $" << tax << endl;
    cout << "\n" << "Shopping:      $" << shopping << endl;
    cout << "Entertainment: $" << entertainment << endl;
    cout << "Savings:       $" << saving << endl;
    cout << "\n" << "Remainder:     $" << remainder << endl;

    return 0;
}