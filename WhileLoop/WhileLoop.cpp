// Name:Xavier L. Bunker
// Date: 3/3/2020
// Title: While Loop
// Descript: A while Loop That can go from 100 to 0

#include <iostream> //Header
using namespace std;

int main()
{
	int counter;

	counter = 100;

	while (counter >= 0) //Tell the code to stop when hitting 0
	{
		cout << counter << " "; // to display the numbers
		counter--; //will keep taking away 1 form 100
	}
	cout << endl;
}
