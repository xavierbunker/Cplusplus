// Name: Xavier L. Bunker
// Date: 1/25/2022
// Program Title: Earnings
// Program Description:

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    double payrate, hours, earnings;
    string name, lname;

    cout << "Welcome To Your Paystub!!" << endl;

    cout << "Please Enter Your First Name: ";
    cin >> name;

    cout << "Please Enter Your Last Name: ";
    cin >> lname;

    cout << "Please Enter Your Payrate: $";
    cin >> payrate;

    cout << "Please Enter Your Hours Worked: ";
    cin >> hours;

    earnings = hours * payrate;

    cout << "Name:         " << name << " " << lname << endl;
    cout << "Payrate:     $" << payrate << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Earnings:    $" << earnings << endl;


    return 0;
}
