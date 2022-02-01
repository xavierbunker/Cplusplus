#include <iostream>
using namespace std;

int main()
{
	double side;
	double volume;
	double surface;

	cout << "What is The Side Measurement?";
	cin >> side;

		volume = side * side;
		surface = 6 * (side * side);

	cout << "Side = " << side << " inches" << endl;
	cout << "Volume = " << volume << " cubic inches"<< endl;
	cout << "Surface Area = " << surface << " sq. inches" << endl;

	return 0;
}
