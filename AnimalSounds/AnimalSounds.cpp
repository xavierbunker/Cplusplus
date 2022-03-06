/* Enter your name: Xavier Bunker
Enter Date: 3/1/2022
Program Description: User picks an animal so the code will tell them the animal sounds
*/

//DECLARE THE CORRECT HEADER FILES HERE...
#include <iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    // Declaring the required variables to help store values...

    double choice; // ENTER THE CORRECT VARIABLE DATATYPE HERE...
    // DECLARE THE OUTPUT FILE VARIABLE HERE...
    //OPEN THE FILE "animalSound.txt" TO PUT OUR RESULTS IN HERE...
    ostream outData;
    outData ("animalsound.txt");
    cout << "\n Welcome to my Animal Sound Program!\n"
        << " I will print out the correct animal sound in a file for you!\n\n";
    cout << "Animal Sounds" << endl << endl;
    cout << "1. Pig (1)" << endl;
    cout << "2. Dog (2)" << endl;
    cout << "3. Cow (3)" << endl << endl;
    cout << "Your choice: ";
    cin >> choice;

    // The switch case structure begins here to check for the input and output the correct animal sounds...
    switch (choice)
    //WRITE A SWITCH STATEMENT WITH THE EXPRESSION 'choice' HERE...
    {
        // REFER TO THE CORRECT USER PROMPT AND INSERT POSSIBLE CASES HERE...
        // PRINT THE FOLLOWING ANIMAL SOUND IN THE FILE YOU CREATED...
    case (choice = 1):
        outData << "Pigs go Oink Oink!" << endl;

        // REFER TO THE CORRECT USER PROMPT AND INSERT POSSIBLE CASES HERE...
        // PRINT THE FOLLOWING ANIMAL SOUND IN THE FILE YOU CREATED...
    case (choice = 2):
        outData << "Dogs bark really loud sometimes! Woof woof!! " << endl;

        // REFER TO THE CORRECT USER PROMPT AND INSERT POSSIBLE CASES HERE...
        //PRINT THE FOLLOWING ANIMAL SOUND IN THE FILE YOU CREATED...
     case (choice = 3)
       outData << "Cows go moo!!" << endl;

        // ADD THE CORRECT STATEMENT TO HANDLE A WRONG INPUT GIVES AN OUTPUT
        //ON THE CONSOLE AND BREAKS THE EXECUTION...
     case (choice <= 4):
         "ERROR: Invalid input...";

    }
    // CLOSE YOUR FILE HERE...

    return 0;
}