// Name: Xavier Bunker
// Date: 4/19/2022
// Title: Convert Time
// Program Description: This code is using and if else statment to help you convert the time to the notation you want.

#include <iostream>// Headers

using namespace std;

int main()
{
    //Variables
    int Answer;
    int Hours;
    int Minutes;
    int Time3;
    int Time4;
    int Time5;
    int Time6;

    cout << "Welcome to the Time Coverter" << endl << endl;

    cout << "The Code will help you covert from 12-Hour notation to 24-Hour notation or 24-Hour notation to 12-Hour notation." << endl << endl;

    cout << "Please pick '12' if you want to covert to 12-Hour Notation or Pick '24' if you want to convert to 24-Hour Notation" << endl << endl;
    cin >> Answer;

    //if Statment
    // If the Answer equals 12 then it will run under the if statment
    if (Answer == 12)
    {
        cout << "You Choose to covert 24-Hour into 12-Hour notation" << endl;
        cout << "Please enter the 24-Hour Notation by spliting it up by 2 numbers" << endl;
        cout << "Hours( '__'-- ) : ";
        cin >> Hours;
        cout << "Minutes( --'__' ) : ";
        cin >> Minutes;

        Time3 = Hours - 12;

        cout << Time3 << ":" << Minutes << endl;
        
    }
    //else if Statment
    // If the answer equals 24 then it would run this statment
    else if (Answer == 24)
    {
        cout << "You Choose to covert 12-Hour into 24-Hour notation" << endl;
        cout << "Please enter the 12-Hour Notation by spliting it up by 2 numbers" << endl;
        cout << "Hours( '__' : -- ) : ";
        cin >> Time4;
        cout << "Minutes( -- : '__' ) : ";
        cin >> Time5;

        Time6 = Time4 + 12;

        cout << Time6 << ":" << Time5 <<" Night" << endl;
        cout << Time4 << ":" << Time5 << " Morning" << endl;
    }
    // else statment
    // If it does not equal those numbers then it will run this statment
    else
    {
        cout << "Please Try Again" << endl;
    }
}