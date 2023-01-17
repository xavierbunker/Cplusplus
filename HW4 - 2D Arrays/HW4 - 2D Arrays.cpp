//
// 
// 
//

#include <iostream>

using namespace std;

class arrayx
{
public:
    void userinput()
    {
        cout << "What is Your Favorite Movie Names: " << endl;

        for (x = 0; x < 2; x++)
        {
            for (e = 0; e < 2; e++)
            {
                
                cin >> fmovie[x][e];
            }
        }
    }
    void display()
    {
        cout << "These Are The Movies You Enter: " << endl;

        for (x = 0; x < 2; x++)
        {
            for (e = 0; e < 2; e++)
            {
                cout << fmovie[x][e]<< " " ;
            }
            cout << endl;
        }
    }
protected:
    string fmovie[2][2];
    int x, e;

};

int main()
{
    arrayx homework;

    homework.userinput();
    homework.display();
}

