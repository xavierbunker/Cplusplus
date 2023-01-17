// Name: Xavier Bunker
// Date: 8/26/2022
// Program Description:

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string text = "<html><p>Hello There</p><html>";
 
    for (int a = 0; a < text.length(); a++)
    {
        if (text[a] == '<')
        {
            for (int b = 4; b < text.length(); b++)
            {
                if (text[b] == '>')
                {

                }
            }
        }
    }
        
  
}

