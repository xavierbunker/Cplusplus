// Name: Xavier l. Bunker
// Date: 9/14/2022
// Description: TBA

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream iFile;
    iFile.open("input.txt");
    if (!iFile.is_open())
    {
        cout << "Input file not found" << endl;
        exit(1);
    }
    vector<string> fname, lname;
    string tempFN, tempLN;
    while (!iFile.eof())
    {
        iFile >> tempFN;
        iFile >> tempLN;
    }
   //fname.push_back("Xavier");
    //lname.push_back("Bunker");
    //fname.push_back("Alicia");
    //lname.push_back("Crum");
    //fname.push_back("Excalibur");
    //lname.push_back("Bunker");

    cout << "How Many First Name: " << fname.size() << endl;
    cout << "How Many Last Name: " << lname.size() << endl;

    for (int a = 0; a < fname.size(); a++)
    {
        if (fname[a] == "Xavier")
            fname[a] = "Xavier - That Is My Name -";

        cout << fname[a] << " " << lname[a] << endl;
    }

    //fname[0] = "Excalibur";
    //lname[0] = "Bunker";

    //cout << fname[0] << " " << lname[0] << endl;
}
