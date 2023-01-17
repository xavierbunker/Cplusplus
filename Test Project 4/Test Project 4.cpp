//
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void fileCheck(ifstream& iFile, string text)
{
    if (!iFile.is_open())
    {
        cout << text << " file not found" << endl;

        exit(1);
    }
}


void getData(vector<string>& fName, vector<string>& lName, vector<string>& major,
    vector<string>& advisorname, vector<float>& GPA, vector<string>& tnumber, vector<string>& gyears,
    vector<float>& chours, vector<string>& hard, vector<string>& easy, ifstream& iFile)
{
    string temp;
    float tempa;

    while (!iFile.eof())
    {
        getline(iFile, temp);
        fName.push_back(temp);

        getline(iFile, temp);
        lName.push_back(temp);

        getline(iFile, temp);
        major.push_back(temp);

        getline(iFile, temp);
        advisorname.push_back(temp);

        iFile >> tempa;
        GPA.push_back(tempa);
        iFile.ignore();

        getline(iFile, temp);
        tnumber.push_back(temp);

        getline(iFile, temp);
        gyears.push_back(temp);

        iFile >> tempa;
        chours.push_back(tempa);
        iFile.ignore();

        getline(iFile, temp);
        hard.push_back(temp);

        getline(iFile, temp);
        easy.push_back(temp);

    }
}

void OutData(vector<string>& fName, vector<string>& lName, vector<string>& major, vector<string>& advisorname, vector<float>& GPA, vector<string>& tnumber,
    vector<string>& gyears, vector<float>& chours, vector<string>& hard, vector<string>& easy, ofstream& oFile)
{
    string temp;
    float tempa;

    for (float a = 0; a < fName.size(); a++)
    {
        cout << "Name:              " << fName[a] << " " << lName[a] << endl;
        cout << "Major:             " << major[a] << endl;
        cout << "Advisor Name:      " << advisorname[a] << endl;
        cout << "GPA:               " << GPA[a] << endl;
        cout << "T-Number:          " << tnumber[a] << endl;
        cout << "Graduating Year:   " << gyears[a] << endl;
        cout << "Credit Hours:      " << chours[a] << endl;
        cout << "Hard Class:        " << hard[a] << endl;
        cout << "Easy Class:        " << easy[a] << endl;
        cout << endl;

        oFile << "Name:              " << fName[a] << " " << lName[a] << endl;
        oFile << "Major:             " << major[a] << endl;
        oFile << "Advisor Name:      " << advisorname[a] << endl;
        oFile << "GPA:               " << GPA[a] << endl;
        oFile << "T-Number:          " << tnumber[a] << endl;
        oFile << "Graduating Year:   " << gyears[a] << endl;
        oFile << "Credit Hours:      " << chours[a] << endl;
        oFile << "Hard Class:        " << hard[a] << endl;
        oFile << "Easy Class:        " << easy[a] << endl;
        oFile << endl;

    }
}
void SortData1 (vector<string>& fName, vector<string>& lName,vector<float>& GPA, float& GPAsort, ostream& oFile)
{
    string temp;
    GPAsort = 0;
    int position =0;

    for (float a = 0; a < GPA.size()-1; a++)
    {
        if (GPA[a] > GPA[position])
        {
            position = a;
        }
        
    }
    cout << fName[position] << " " << lName[position] << " has the highest GPA with " << GPA[position] << endl;
    oFile << fName[position] << " " << lName[position] << " has the highest GPA with " << GPA[position] << endl;
    
}
void SortData2(vector<string>& fName, vector<string>& lName, vector<float>& chours, float& chourssort, ostream& oFile)
{
    string temp;
    chourssort = 0;
    int position = 0;

    for (float a = 0; a < chours.size() - 1; a++)
    {
        if (chours[a] > chours[position])
        {
            position = a;
        }

    }
    cout << fName[position] << " " << lName[position] << " has the highest credit hours with " << chours[position] << endl;
    oFile << fName[position] << " " << lName[position] << " has the highest credit hours with " << chours[position] << endl;

}

int main()
{
    string temp;
    float GPAsort = 0;
    float chourssort = 0;

    ifstream iFile;
    ofstream oFile;

    iFile.open("list.txt");
    oFile.open("result.txt");

    fileCheck(iFile, "list.txt");

    vector<string> fName, lName, major, advisorname, tnumber, gyear, hard, easy;
    vector<float> GPA, chours;

    getData(fName, lName, major, advisorname, GPA, tnumber, gyear, chours, hard, easy, iFile);

    OutData(fName, lName, major, advisorname, GPA, tnumber, gyear, chours, hard, easy, oFile);

    SortData1(fName, lName, GPA, GPAsort, oFile);

    SortData2(fName, lName,chours,chourssort, oFile);

    iFile.close();
}
