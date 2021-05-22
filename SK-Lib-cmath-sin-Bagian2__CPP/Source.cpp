#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified for Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double x = 0.439203, result;

	result = sin(x);
	cout << "sin(x) = " << result << endl;

	double xDegrees = 90.0;

	// converting degrees to radians
	x = xDegrees * 3.14159 / 180;
	result = sin(x);

	cout << "sin(x) = " << result << endl;

	_getch();
	return 0;
}