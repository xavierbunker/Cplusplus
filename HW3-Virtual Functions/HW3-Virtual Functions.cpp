// Name: Xavier
// Date: 11/27/22
// Title: HW3
// Description: This override the other function

#include <iostream>
#include <string>

using namespace std;

//What is a virtual function?
// It Overriden the other class fuction
//

//What is the purpose of a virtual function?
// It ensure that you are calling the right function

//Write about a real world situation where you would need to use a virtual function in a program
//When you are wrighting a big code that need to use the same function

class word {
public:
    virtual void output()
    {
        cout << "Hello World" << endl;
    }

};
class speak : public word {
public:
    void output()
    {
        cout << "Hello Teacher" << endl;
    }
};

void cool(word& h)
{
    h.output();
}


int main()
{
    word hello;
    speak hi;

    cool(hello);
    cool(hi);
}
