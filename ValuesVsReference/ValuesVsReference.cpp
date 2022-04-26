// ValuesVsReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void ValueFunctionEX(int x);

void ReferenceFunctionEX(int& y);

int main()
{
    int num1, num2;
    cout << "Value vs. Reference Parameters" << endl << endl;

    cout << "Value Parameter" << endl << endl;
    cout << "Enter an Integer: ";
    cin >> num1;

    ValueFunctionEX(num1);

    cout << "Main num1: " << num1 << endl << endl;

    cout << "Reference Parameters" << endl << endl;
    cout << "Enter an Interger: ";
    cin >> num2;

    ReferenceFunctionEX(num2);

    cout << "Main num2: " << num2 << endl << endl;

    return 0;
}
void ValueFunctionEX(int x)
{

    x = x * 2;

    cout << "ValueFunctionEX x: " << x << endl;
}
void ReferenceFunctionEX(int& y)
{
    y = y * 2;

    cout << "ReferenceFunctionEX y: " << y << endl;
}