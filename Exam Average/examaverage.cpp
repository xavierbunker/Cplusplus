// Name: Xavier L. Bunker
// Date: 1-30-2022
// Program Title: Exam Average
// Program Description: Taking 5 user test scores and
//      then outputting an average score

#include <string>   // Header File
#include <iostream> // Header File

using namespace std;

int main()
{
    // Declare Variables
    double test1, test2, test3, test4, test5;
    double average;

    // Program Title and Description for the user
    cout << "\n"
         << "Welcome to the Exam Average Calculator!" << endl;

    cout << "     (Please List 5 Exam Scores)" << endl;

    // User Input for Exam Average
    cout << "\n"
         << "Please Enter Your First Test Score: ";
    cin >> test1;

    cout << "Please Enter Your Second Test Score: ";
    cin >> test2;

    cout << "Please Enter Your Third Test Score: ";
    cin >> test3;

    cout << "Please Enter Your Fourth Test Score: ";
    cin >> test4;

    cout << "Please Enter Your Fifth Test Score: ";
    cin >> test5;

    // Average Formula Calculation
    average = (test1 + test2 + test3 + test4 + test5) / 5;

    // Output Information
    cout << "\n"
         << "Your First Test Score: " << test1 << "%" << endl;
    cout << "Your Second Test Score: " << test2 << "%" << endl;
    cout << "Your Third Test Score: " << test3 << "%" << endl;
    cout << "Your Fourth Test Score: " << test4 << "%" << endl;
    cout << "Your Fifth Test Score: " << test5 << "%" << endl;
    cout << "\n"
         << "Your Average Test Score is " << average << "%" << endl;

    //Program Exit - Return Code 0 - Successful
    return 0;
}