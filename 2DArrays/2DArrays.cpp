//Name: Xavier L. Bunker
//Date: 4/28/22
//Title: Two Dimentional Array Example
//Description: The example of two dimensional array

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//constants

int main()
{
    //variable declaration
    string name[5];//1 dimensional array to hold the student names
    double test[5][3];//2 dimensional array to hold 3 test scores per student
    int row, col;//counters

    ifstream inFile;

    //open file
    inFile.open("student_data.txt");


    //program title and description for the user
    cout << "Two Dimensional Array Example" << endl << endl

        << "This program utilizes parallel arrays: One being a one dimensional " << endl
        << "array to store student names and the other being a two dementional " << endl
        << "array to store 3 exam scores. The input will be read from an exteranl " << endl
        << "file and then printed on the screen." << endl << endl;

    //Read arrays data from t he file and store in both arrays

    for (row = 0; row < 5; row++)//outer for loop iterate through each row
    {
        inFile >> name[row];

        for (col = 0; col < 3; col++)//inner for loop iterates through each column
        {
            inFile >> test[row][col];
        }
    }

    system("cls");

    //Print table on the screen

    cout << setw(10) << left << "Name" << setw(7) << right << "Test 1" << setw(7) << "Test 2" << setw(7) << "Test 3" << endl;

    //Print data from both arrays

    for (row = 0; row < 5; row++)//start of each row print the name
    {
        cout << setw(10) << left << name[row];
        for (col = 0; col < 3; col++) //print three scores for each student name
        {
            cout << setw(7) << right << test[row][col];
        }
        cout << endl;
    }



    //close the file
    inFile.close();



    return 0;
}
