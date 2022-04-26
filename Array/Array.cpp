// Name: Xavier L. Bunker
// Date: 4/5/2022
// Title: Array
// Program Description: This program shows examples of the
// usage of arrays in programming........

#include <iostream>

using namespace std;

int main()
{
    //Declare an array....
    int num[5];

    //Delcaring Variable............
    int maxIndex;
    int minIndex;
    int sum;
    double average;

    cout << "Title Array Example: " << endl;
    cout << "This program shows examples of the usage " <<
        "of arrays in programming...." << endl;

    //Getting integers from user to initalize the array......................

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Value " << i + 1 << " : ";
        cin >> num[i];

    }

    // Printing out the array to check inputs.....

    for (int i = 0; i < 5; i++)
    {
        cout << "num[" << i << "] = " << num[i] << endl;
    }

    cout << endl;

    // Find the largest value inside the array..............

    maxIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (num[maxIndex] < num[i])
        {
            maxIndex = i;
        }
    }

    cout << "Largest Value: " << num[maxIndex] << endl;

    // Find the Smallest Value inside the array........

    minIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (num[minIndex] > num[i])
        {
            minIndex = i;
        }
    }
    cout << "Smallest Value: " << num[minIndex] << endl;

    // Find the sum of the array num......
    sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }

    average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

