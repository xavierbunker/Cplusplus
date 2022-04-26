// Name: Xavier Bunker
// Date: 4/14/2022
// Title: 
// Program Description:

#include <iostream>

using namespace std;

//Delcaring Constant
const int ARRAY_SIZE = 8;

//Fuction declartion
void sortData(int datalist[]);

int main()
{
    // Print the unsorted array......................
    int list[ARRAY_SIZE] = { 16, 30 , 24, 7, 63, 45, 5, 55 };

    cout << "Selection Sort Examples" << endl << endl;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << list[i] << endl;
    }
    cout << endl;
   
    sortData(list);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << list[i] << endl;
        
    }
    return 0;
}
void sortData(int datalist[])
{
    int smallestIndex;
    int temp;

    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        // Store the location of the smallest index
        smallestIndex = i;

        for (int currentLocation = i + 1; currentLocation < ARRAY_SIZE; currentLocation++)
        {
            if (datalist[currentLocation] < datalist[smallestIndex])
                //if the current laction is less than the
                //smallest value
            {
                smallestIndex = currentLocation;
            }
        }
        //Swap two element in the array
        temp = datalist[smallestIndex];
        datalist[smallestIndex] = datalist[i];
        datalist[i] = temp;
    }
}
