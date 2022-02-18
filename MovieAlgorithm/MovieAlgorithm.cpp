//***************************************************************************************************************************
// Author: D.S. Malik
//
// Program: Movie Tickets Sale
// This program determines the money to be donated to a
// charity. It prompts the user to input the movie name, adult
// ticket price, child ticket price, number of adult tickets
//sold, number of child tickets sold, and percentage of the
//gross amount to be donated to the charity.
//****************************************************************************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//Declare the variables
	string movieName;
	double adultTicketPrice;
	double childTicketPrice;
	int noOfAdultTicketsSold;
	int noOfChildTicketsSold;
	double percentDonation;
	double grossAmount;
	double amountDonated;
	double netSaleAmount;

	//Set the output of the floating-point numbers to two decimal 
	//places in a fixed decimal format with a decimal point and trailing 
	//zeros. Include the header file iomanip.
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the movie name: "; //Prompt the user to enter a movie name
	getline(cin, movieName); //Input (read) the movie name. Because the name of a movie might contain more than one word (and, therefore, might contain blanks), the program uses the function getline to input the movie name.
	cout << endl;

	
	cout << "Enter the price of an adult ticket: ";//Prompt the user to enter the price of an adult ticket.
	cin >> adultTicketPrice; //Input (read) the price of an adult ticket
	cout << endl;

	cout << "Enter the price of a child ticket: "; //Prompt the user to enter the price of a child ticket
	cin >> childTicketPrice; //Input (read) the price of a child ticket
	cout << endl;

	cout << "Enter the number of adult tickets " //Prompt the user to enter the number of adult tickets sold.
		<< "sold: "; 
	cin >> noOfAdultTicketsSold; //Input (read) the number of adult tickets sold
	cout << endl;

	cout << "Enter the number of child tickets " //Prompt the user to enter the number of child tickets sold.
		<< "sold: ";
	cin >> noOfChildTicketsSold; //Input (read) the number of child tickets sold.
	cout << endl;

	cout << "Enter the percentage of donation: "; //Prompt the user to enter the percentage of the gross amount donated.
	cin >> percentDonation; //Input (read) the percentage of the gross amount donated.
	cout << endl << endl;

	//Calculate the gross amount.
	grossAmount = adultTicketPrice * noOfAdultTicketsSold +
		childTicketPrice * noOfChildTicketsSold;

	//Calculate the amount donated.
	amountDonated = grossAmount * percentDonation / 100;

	//Calculate the net sale amount.
	netSaleAmount = grossAmount - amountDonated;

	//Output the results.
	cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"
		<< "_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
	cout << setfill('.') << left << setw(35) << "Movie Name: "
		<< right << " " << movieName << endl;
	cout << left << setw(35) << "Number of Tickets Sold: "
		<< setfill(' ') << right << setw(10)
		<< noOfAdultTicketsSold + noOfChildTicketsSold
		<< endl;
	cout << setfill('.') << left << setw(35)
		<< "Gross Amount: "
		<< setfill(' ') << right << " $"
		<< setw(8) << grossAmount << endl;
	cout << setfill('.') << left << setw(35)
		<< "Percentage of Gross Amount Donated: "
		<< setfill(' ') << right
		<< setw(9) << percentDonation << '%' << endl;
	cout << setfill('.') << left << setw(35)
		<< "Amount Donated: "
		<< setfill(' ') << right << " $"
		<< setw(8) << amountDonated << endl;
	cout << setfill('.') << left << setw(35) << "Net sale: "
		<< setfill(' ') << right << " $"
		<< setw(8) << netSaleAmount << endl;

	return 0;
}