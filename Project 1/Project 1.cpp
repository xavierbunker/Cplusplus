// Name: Xavier l. Bunker
// Date: 8/22/2022
// Program Description: The Code Will Show You A List Of Class That Is Saved To The
//Input file And Then List It In The OutPut File And Also Show It Backward Also

// List of Library
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

//Setting a Consten
const int ARRAY_SIZE = 50;

string name[ARRAY_SIZE];

//List Function
void File(ifstream &iFile, ofstream & oFile);
void FileChecker(ifstream &iFile);
void Read(int & counter, ifstream & iFile);
void List(int & counter, ofstream & oFile);
void Space();
void BackWordList(int & counter, ofstream& oFile);
void Close(ifstream& iFile, ofstream& oFile);

int main()
{
	// create an input file variable called ifile
	ifstream iFile;

	// create an output file variabler called oFile
	ofstream oFile;

	File(iFile, oFile); //Call Back At The Files
	
	FileChecker(iFile); // Check the to see if the file is there

	int counter = 0;

	Read(counter, iFile); //Read the file

	List(counter, oFile); //List the file

	Space(); // Puts a space

	BackWordList(counter, oFile); // List the names backword

	Close(iFile, oFile); // Close File

}
void File(ifstream & iFile , ofstream & oFile) // File Fuction
{
	// Associate an input file with iFile
	iFile.open("input.txt");
	// Associte an output  file with oFile
	oFile.open("output.txt");
}

void FileChecker(ifstream & iFile) // FileChecker Fuction
{
	// Esure the input file was found
	if (!iFile.is_open())
	{
		cout << "Input file not found " << endl;
		exit(1);// Exit the program with error
	}
}

void Read(int & counter, ifstream& iFile ) //REad Fuction
{
	while (!iFile.eof()) // This will keep reading data wntil the end of the file is reached
	{
		// Read in my class names from the input file and store them inside of array
		getline(iFile, name[counter]);

		counter++;
	}
}

void List(int & counter, ofstream& oFile) //List Fuction
{
	// List The Information In Array
	for (int a = 0; a < counter; a++)
	{
		cout << "Name: " << name[a] << endl;
		oFile << "Name: " << name[a] << endl;
	}
}

void Space() // Space Fuctions
{
	// Space Inbetween The List And The BackWord List
	cout << endl << endl;
}

void BackWordList(int & counter, ofstream& oFile) //Backward Fuction
{
	// List The Class Backword
	for (int a = counter - 1; a >= 0; a--)
	{
		cout << "Name: " << name[a] << endl; //List It Backwords
		oFile << "Name: " << name[a] << endl;
	}
}

void Close(ifstream& iFile, ofstream& oFile) //Close Fuction
{
	iFile.close();
	oFile.close();
}