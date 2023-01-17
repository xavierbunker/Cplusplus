// Name: Xavier Bunker 
// Date: 10/12/2022
// Description: Code That Will Tell You Your PayStub Info With The User Input.
// Title: Project 6

#include <iostream>
#include <string>

using namespace std;

class work
{
private:
	string fname[10], lname[10], jtitle[10], employeeN[10], lowname, highname;
	double  grosspay[1000], otpay[10], otwage[10], othours[10], hoursworked[10], hourlywage[10], deduction[10], tax[10], netpay[1000];
public:
	void getData()
	{
		//Get the data from the user
		//It will Get 3 user input for each thing
		for (int a = 0; a <= 2; a++)
		{
			cout << "Enter Your First Name: ";
			cin >> fname[a];

			cout << "Enter Your Last Name: ";
			cin >> lname[a];

			cin.ignore();

			cout << "Enter Job Title: ";
			getline(cin, jtitle[a]);//Lets Spaces Happen

			cout << "Enter Employee Number: ";
			getline(cin, employeeN[a]);//Lets Spaces Happen

			cout << "Enter Hours Worked: ";
			cin >> hoursworked[a];

			cout << "Enter Hourly Wage: $";
			cin >> hourlywage[a];

			cout << "Number of Deductions Claimed: ";
			cin >> deduction[a];

			cout << endl;

		}
	}
	void setpay()
	{
		//Will get the infromation from user 
		//It will Run This Fuction Three Times To make Sure That a is used 3 times
		for (int a = 0; a <= 2; a++)
		{
			if (hoursworked[a] > 40)
			{
				otwage[a] = hourlywage[a] * 1.5;
				othours[a] = hoursworked[a] - 40; // remove the first 40 hours
				otpay[a] = otwage[a] * othours[a];
				grosspay[a] = otpay[a] + (40 * hourlywage[a]);

			}
			else
			{
				othours[a] = 0;
				otwage[a] = 0;
				otpay[a] = 0;
				grosspay[a] = hourlywage[a] * hoursworked[a];
			}
		}
	}
	void deductiontax()
	{
		//Will get the tax information from the user input
		//It will Run This Fuction Three Times To make Sure That a is used 3 times
		for (int a = 0; a <= 2; a++)
		{
			if (deduction[a] <= 0)
				tax[a] = .30;
			else if (deduction[a] == 1)
				tax[a] = .25;
			else if (deduction[a] == 2)
				tax[a] = .20;
			else if (deduction[a] == 3)
				tax[a] = .15;
			else
				tax[a] = .10;

			tax[a] = tax[a] * grosspay[a];
			netpay[a] = grosspay[a] - tax[a];
		}

	}
	void output()
	{
		//Displays Information
		//It will Run This Fuction Three Times To make Sure That a is used 3 times
		

		for (int a = 0; a <= 2; a++)
		{
			cout << "Name:                 " << fname[a] << " " << lname[a] << endl;
			cout << "Job Title:            " << jtitle[a] << endl;
			cout << "Employee Number:      " << employeeN[a] << endl;
			cout << "Hours Worked:         " << hoursworked[a] << endl;
			cout << "Hourly Wage:         $" << hourlywage[a] << endl;
			cout << "Grosspay:            $" << grosspay[a] << endl;
			if (hoursworked[a] > 40)
			{
				cout << "Overtime Hours:       " << othours[a] << endl;
				cout << "OverTime Wage:       $" << otwage[a] << endl;
				cout << "Overtime Pay:        $" << otpay[a] << endl;
			}
			cout << "Deduction:            " << deduction[a] << endl;
			cout << "Tax:                 $" << tax[a] << endl;
			cout << "NetPay:              $" << netpay[a] << endl;
			cout << endl;

		}
	}
	void outputshort()
	{
		double highpay = netpay[0];

		for (int a = 0; a < netpay[a]; a++)
		{
			if (highpay < netpay[a])
			{
				highpay = netpay[a];
				
			}
			
		}
		
		cout << "Highest Pay: " << highpay << endl;

	}
	void outputlow()
	{
		double lowpay = netpay[0];

		for (int a = 0; a < netpay[a] ; a++)
		{
			if (lowpay > netpay[a])
			{
				netpay[a] = lowpay;

			}
		}
		cout << "Lowest Pay: " << lowpay << endl;
	}

};



int main()
{
	// people is now the object of my OPP
	//OPP is called Work
	work CS;

	//Each of the fuction in the OOP 
	CS.getData();
	CS.setpay();
	CS.deductiontax();
	CS.output();
	CS.outputshort();
	CS.outputlow();
}
