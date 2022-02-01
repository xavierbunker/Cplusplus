#include <iostream>

using namespace std;

int main()
{
	double side;
	double side2;
	double side3;
	double volume;
	double surface;

	side = 6;
	side2 = 6;
	side3 = 6;
	surface = 6 * (side + side2);
	volume = side * side2 * side3;

	cout << "Volume = " << volume << endl;
	cout << "Surface = " << surface << endl;

	return 0;
}