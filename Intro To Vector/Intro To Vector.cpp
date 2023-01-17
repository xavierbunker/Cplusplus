//
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int GetNumber()
{

}

void getData(vector<string>& fName, vector<string>& lName, vector<string>& major, ifstream& iFile)
{
    string temp;
    while(!iFile.eof())
    {
        getline(iFile, temp);
        fName.push_back(temp);

        getline(iFile, temp);
        lName.push_back(temp);

        getline(iFile, temp);
        major.push_back(temp);

    }
}

int main()
{
    vector<string> fname, lname, major;

    string temp;
}

