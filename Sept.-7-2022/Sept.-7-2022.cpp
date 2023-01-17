// 
// 
// 
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void fileCheck(ifstream& iFile, string text)
{
    if (!iFile.is_open())
    {
        cout << text << "file not found" << endl;
        exit(1);
    }
}


void SortData(string name1[], string name2[], int counter)
{
    string temp;

    for (int a = 0; a <= counter; a++)
    {
        for (int b = 0; b <= counter-1; b++)
        {
            if (name1[b] > name1[b + 1])
            {
                temp = name1[b];
                name1[b] = name1[b + 1];
                name1[b + 1] = temp;

                temp = name2[b];
                name2[b] = name2[b + 1];
                name2[b + 1] = temp;
            }
        }
    }
}

int getData(ifstream& iFile, string name[])
{
    int counter = 0;

    while (!iFile.eof())
    {
        iFile >> name[counter];
        counter++;
    }
    return counter;
}
void OutData(int counter, string name1[], string name2[])
{
    for (int a = 0; a < counter; a++)
    {
        cout << name1[a] << " " << name2[a] << endl;
    }
    cout << endl;
}
int main()
{
    int counter = 0;

    ifstream iFile1, iFile2;

    iFile1.open("FirstName.txt");
    iFile2.open("LastName.txt");

    fileCheck(iFile1,"FirstName.txt" );
    fileCheck(iFile2, "LastName.txt");

    string name1[100], name2[100];

    counter = getData(iFile1, name1);
    counter = getData(iFile2, name2);
    

    int choice = 0;
    while (choice != 3)
    {
        cout << "1. Sort By First Name" << endl;
        cout << "2. Sort By Last Name" << endl;
        cout << "3. Neither (Good-Bye)" << endl;
        cout << endl;
        cout << "You have selected: ";
        cin >> choice;
        cout << endl;
       

        if (choice == 1)
        {
            SortData(name1, name2, counter);
            OutData(counter, name1, name2);
        }
        if (choice == 2)
        {
            SortData(name2, name1, counter);
            OutData(counter, name2, name1);
        }
        if (choice == 3)
        {
            cout << "Good-Bye" << endl;
        }
    }
}