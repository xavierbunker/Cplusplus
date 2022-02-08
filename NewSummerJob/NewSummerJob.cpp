// Name: Xavier L. Bunker
// Date: 2-1-2022
// Program Title: Budget Machine
// Program Description: This Code will help you budget when you have a job in the summer.

#include <iostream> // Header File
#include <string>   // Header File
#include <iomanip> // Header File

using namespace std;

//Constant Variable
const double taxPercent = 0.15;

int main()
{
    //Double Variable
    double weeklywage, wage, hours, tax, shopping, entertainment, saving, remainder;
    double shoppingPercent, entertainmentPercent, savingsPercent;
    //String Variable
    string name;

    //Tell The User What is Doing
    cout << "Welcome to the Budget Machine" << endl;

    //Input User Information
    cout << "What is Your Name: ";
    getline(cin, name);

    cout << "What is Your Hourly Pay: $";
    cin >> wage;

    cout << "Please Enter Hours Worked this Week: ";
    cin >> hours;

    cout << "PLease Enter The Shopping Percent: ";
    cin >> shoppingPercent;

    cout << "Please Enter The Entertainment Percent: ";
    cin >> entertainmentPercent;

    cout << "Please Enter The Savings Percent: ";
    cin >> savingsPercent;


    //Formulas
    weeklywage = hours * wage;
    tax = weeklywage * taxPercent;
    shopping = weeklywage * (shoppingPercent/100);
    entertainment = weeklywage * (entertainmentPercent/100);
    saving = weeklywage * (savingsPercent/100);
    remainder = weeklywage - (saving + entertainment + shopping + tax);

    cout << fixed << showpoint << setprecision(2);

    //Clears User Information
    system("cls");

    //Output
    cout << setw(28) << left << "Name:" << setw(10) << right << name << endl;
    cout << setw(20) << left << "Weekly Wage:" << setw(10) << right << "$ " << weeklywage << endl;
    cout << setw(20) << left << "Tax:" << setw(10) << right << "$ " <<  tax << endl;
    cout << setw(20) << left << "Shopping:" << setw(10) << right << "$ " << shopping << endl;
    cout << setw(20) << left << "Entertainment:" << setw(10) << right << "$ " << entertainment << endl;
    cout << setw(20) << left << "Savings:" << setw(10) << right << "$ " << saving << endl;
    cout << setw(20) << left << "Remainder:" << setw(10) << right << "$ " << remainder << endl;

    return 0;
}
