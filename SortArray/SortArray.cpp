// Name: Xavier Bunker
// Date: 4/14/2022
// Title: 
// Program Description:

#include <iostream>

using namespace std;

//Delcaring Constant
const int ARRAY_SIZE = 8;

int main()
{
    //Delcaring Variable
    int list[ARRAY_SIZE] = { 16, 30 , 24, 7, 63, 45, 5, 55 };
    int smallestIndex;
    int temp;

    cout << "Selection Sort Examples" << endl << endl;

    // Print the unsorted array......................
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << list[i] << endl;
    }
    cout << endl;

    // Outer for loop controls current location of the
    // smallest index
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        // Store the location of the smallest index
        smallestIndex = i;

        for (int currentLocation = i + 1; currentLocation < ARRAY_SIZE; currentLocation++ )
        {
            if (list[currentLocation] < list[smallestIndex])
            {
                smallestIndex = currentLocation;
            }
        }
        //Swap two element in the array
        temp = list[smallestIndex];
        list[smallestIndex] = list[i];
        list[i] = temp;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << list[i] << endl;
       
    }
    return 0;
}

