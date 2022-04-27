//Name: Xavier L. Bunker
//Date: 4/26/22
//Title: Sales Array
//Description: A program that uses an array to store sales for a week (7 days) and uses functions to perform several of the program’s features. 

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//constant declarations
const int ARRAY_SIZE = 7;

//Function declarations
void printDailySales(double array[ARRAY_SIZE]);
double findTotal(double array[ARRAY_SIZE]);
double findMax(double array[ARRAY_SIZE]);
double findMin(double array[ARRAY_SIZE]);

int main()
{
    //variables 

    double salesArray[ARRAY_SIZE];
    ifstream inFile;

    //opening input file

    inFile.open("daily_sales.txt");

    //checking to make sure the file was found

    if (inFile)
    {
        cout << "Input file was found." << endl << endl;
    }
    else
    {
        cout << "Input file was found." << endl;
        return 1;
    }

    //declares the data from the file as salesArray

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        inFile >> salesArray[i];
    }

    //program title/description
    cout << "Saxy Shirts Daily Sales!" << endl << endl;
    cout << "In the table below, you will see calculated data of the past week's sales; A total of sales by the" << endl
        << "end of the week. Below this table will be two lines containing the highest daily sales, as well as" << endl
        << "the lowest daily sales..." << endl << endl;


    //moves salesArray data between functions to determine print layout and max/min sales

    printDailySales(salesArray);
    findTotal(salesArray);
    findMax(salesArray);
    findMin(salesArray);

    //closing input file

    inFile.close();

    return 0;
}


void printDailySales(double array[ARRAY_SIZE])
{
    //variables

    int days = 1;

    //daily sales printed to the screen

    cout << "Daily Sales Entered:" << endl;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << setw(5) << left << "Day #" << days << ":" << setw(1) << "   $" << array[i] << endl;
        days++;
    }

}

double findTotal(double array[ARRAY_SIZE])
{
    //variables

    double total = 0;

    //adding up each day to determine total sales amount
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        total = total + array[i];
    }
    //total sales printed to the screen

    cout << "Total Sales: $" << total << endl;

    return 0;
}

double findMax(double array[ARRAY_SIZE])
{
    //variables

    int max = 0;

    //determines which sales value from the week is the largest

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[max] < array[i])
        {
            max = i;
        }
    }

    //prints out highest daily sales

    cout << "Highest Daily Sales: $" << array[max] << endl;

    return 0;
}

double findMin(double array[ARRAY_SIZE])
{
    //variables

    int min = 0;

    //determines which sales value from the week is the smallest

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[min] > array[i])
        {
            min = i;
        }
    }

    //prints out lowest daily sales

    cout << "Lowest Daily Sales: $" << array[min] << endl;

    return 0;
}
