// Name: Xavier Bunker
// Date: 10/24/2022
// 
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

class menu
{
public:

    menu()
    {
        filechecker(appIn, "app.txt");
        filechecker(desIn, "des.txt");
        filechecker(drinkIn, "drink.txt");
        filechecker(entIn, "ent.txt");

        getdata(appIn, appname, appprice);
        getdata(desIn, desname, desprice);
        getdata(entIn, entname, entprice);
        getdata(drinkIn, drinkname, drinkprice);


    }

    void getdata(ifstream& iFile, vector<string>& name, vector<double>& price)
    {
        string tempS;
        double tempD;

        while (!iFile.eof())
        {
            getline(iFile, tempS);
            name.push_back(tempS);

            iFile >> tempD;
            price.push_back(tempD);

            iFile.ignore();
        }
    }

    void filechecker(ifstream& iFile, string text)
    {
        iFile.open(text);
        if (!iFile.is_open())
        {
            cout << text << "File Not Found" << endl;
            exit(1);
        }
    }

    void menudisplay()
    {
        int choice = 0;

        while (choice != 5)
        {
            system("cls");
            cout << "1. Drink Menu" << endl;
            cout << "2.Dessert Menu" << endl;
            cout << "3.Entree Menu" << endl;
            cout << "4.Appetizer Menu" << endl;
            cout << "5. Checkout" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Enter Selection(9 to Exit):";
            cin >> choice;


                if (choice == 1)
                {
                    output(drinkname, drinkprice);
                }
                else if (choice == 2)
                {
                    output(desname, desprice);
                }
                else if (choice == 3)
                {
                    output(entname, entprice);
                }
                else if (choice == 4)
                {
                    output(appname, appprice);
                }
                else if (choice == 5)
                {
                    tippay(number, percent, taxes);
                    tax(taxes);
                    total(totalafter, taxes, tip, totalamount);
                    checkout(percent,totalamount, number);
                    payment(pay, totalback);
                }
        }
    }
    void output(vector<string>& name, vector<double>& price)
    {
        int choice = 0;
        double item, input2;

        while (choice != 9)
        {
            for (int a = 0; a < name.size(); a++)
            {
                cout << a+1 <<"." << name[a] << endl;
                cout << "Price: " << price[a] << endl;
                cout << endl;
            }
            cout << "Back To Main Menu(9) " << endl;

            cout << "What Do You Want: " << endl;
            cin >> item;
            

            if (item != 9)
            {
                cout << "How Many Do You Want: " << endl;
                cin >> input2;


                subtotal += price[item - 1] * input2;
                cout << endl;
                cout << "Subtotal " << subtotal << endl << endl;
            }
            else
            {
                break;
            }
        }
    }
    void checkout(double & percent, float & totalamount, double & number)
    {
        cout << endl << endl;

        cout << "Subtotal " << subtotal << endl;
       
       cout << "Tip: " << number << "%" << endl;

        cout << "Total: $" << totalamount << endl;
    }
    void tippay(double& percent, double& number, double& taxes)
    {
        cout << "How much do you want to tip(1-99): " << endl;

        cin >> percent;

       number = percent / 100;
        
        tip = number * subtotal;

    }
    void total(float& totalafter, double & taxes, double & tip, float & totalamount)
    {
        totalafter = taxes + subtotal;
        totalamount = totalafter + tip;
    }
    void tax(double & taxes)
    {
       taxes = subtotal * .10;
    }
    void payment(double & pay,float & totalback)
    {
        cout << endl;
        cout << "How much do you want to pay: " << endl;
        cin >> pay;

        cout << endl;

        totalback = pay - totalamount;

        cout << "Money Back:" << totalback << endl;
    }

private:
    vector<string> appname, drinkname, entname, desname;
    vector<double> appprice, drinkprice, entprice, desprice;
    ifstream appIn, desIn, entIn, drinkIn;
    double tip, number, percent, taxes, pay;
    float totalamount, totalafter, totalback;
    double subtotal = 0;
};

int main()
{
    menu TB;

    TB.menudisplay();

    return 0;
}

