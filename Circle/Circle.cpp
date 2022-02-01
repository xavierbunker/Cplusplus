// Xavier Bunker
//

#include <iostream>

using namespace std;

int main()
{
    double pi;
    double r;
    double circumference;
    double area;

    cout << "Hello World; This Program is to Solve Area and Circumference of a Circle!!" << endl;
    cout << "What is the Raduis Measurement? ";
    cin >> r;

    pi = 3.14159265359;

    circumference = 2 * pi * r;
    area = pi * (r * r);

   
    cout << "Raduis = " << r << endl;
    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;
    cout << "Thank You For Stoping By!!!" << endl;

    return 0;
}