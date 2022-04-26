// Name: Xavier Bunker
// Data: 4/19/2022
// Title: Wind Chill
// Program Description: This code is taking the data to find the wind chill

// Header
#include <iostream>
// Math Header
#include <cmath>

using namespace std;

//Void Fuction that is not in the main
void WindChill();

// main code
int main()
{
    WindChill();
}
//Everything outside the fuction
void WindChill()
{
    // Varablies 
    double W;
    int V;
    int T;
    double x;
    double y;

    cout << "What is the Temperature: ";
    cin >> T;
    cout << "F" << endl;

    cout << "What is the wind speed: ";
    cin >> V;
    cout << "Miles per hour" << endl;

    x = pow(T, 0.16);
    y = pow(V, 0.16);

    W = 35.74 + 0.6215 * x - 35.75 * V + 0.4275 * T * y;

    cout << "The wind chill is: " << W << endl;
}
