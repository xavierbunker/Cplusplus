// Name: Xavier l. Bunker
// Date: 8/22/2022
// Program Description: Intro to Arrays

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    /*
    Arrays: in programing 1, you used variables. They can store 1 value at a time.
    an array, can store mutiple values at a time. This is a big advantage over

    An array is similar in concept to a textbook.

    A textbook has a title
    A textbook has page numbers
    A textbook has content on each page

    page number: 0      1      2
    string name[] = {"Iron Man", "Hulk", "Thor"};

    side note: arrays always start at 0. Please make peace with this

    cout << name{2} << endl;
Hulk
    string name [50];
    I am allocating 50 pages within my array. This iss does not mean I need to use it all 
    It is just making space for it is needed

    int classAttendance[40];
    */
    const int ARRAY_SIZE = 50;

    string name[ARRAY_SIZE];

    // create an input file variable called ifile
    ifstream iFile;

    // create an output file variabler called oFile
    ofstream oFile;

    //
    iFile.open("input.txt");

    //
    oFile.open("output.txt");

    //
    if (!iFile.is_open())
    {
        cout << "Input file not found " << endl;
        exit(1); // exit the program with error
    }

    //
    //
    
    //

    //
    //
    int counter = 0;
    //

    while (!iFile.eof()) //
    {
        //

        getline(iFile, name[counter]);
        //
        //
        //
        counter++;
    }

    //
    //

    for (int a = 0; a < counter; a++) // why is a less than counter?
    {
        cout << "Name: " << name[a] << endl;
        oFile << "Name: " << name[a] << endl;
    }

    cout << endl << endl;


    for (int a = counter - 1; a >= 0; a--) // why is a less than counter?
    {
        cout << "Name: " << name[a] << endl;
        oFile << "Name: " << name[a] << endl;
    }
    // counter is 1 above the actual number of records read into the array.

    iFile.close();
    oFile.close();
}


