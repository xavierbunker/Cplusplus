// Name: Xavier Bunker
// Date: 8/26/2022
// Program Description: This code is to get rid of the HTML tags 
//form the line and leaving the text behind that does not have the HTML tags

//Libearys
#include <iostream>
#include<string>

using namespace std;

//Functions
string UserInput();
string Cleaner(string Name);
string Update(string CleanName);

int main()
{
    string Name;
  
    Name = UserInput();
    
    string CleanName;

    CleanName = Cleaner(Name);

    Update(CleanName);

    return 0;
    
}
string UserInput()
{
    //User Enters THe HTML Code
    string Input;
    cout << "Enter HTML Code: ";
    getline(cin, Input);

    return Input;

}
string Cleaner(string Name) // Use the input from the other fuction
{
    //Clean the HTML Tags Form The Words
    for (int a = 0; a < Name.length(); a++)
    {
        if (Name[a] == '<')
        {
            for (int b = a; b < Name.length(); b++)
            {
                if (Name[b] == '>')
                {
                    Name.erase(a, b - a + 1);
                    a--;
                    break;
                    

                }
            }
        }
   }
    return Name; // Return the String Back
}
string Update(string CleanName)
{
    cout << "Updated Text: " << CleanName << endl; //Show Update Text
    return CleanName; //Return The String
}