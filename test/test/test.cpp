#include <iostream>
#include "ComplexNumber.h"
using namespace std;

int main() {

	ComplexNumber num1(20, -5, false);
	ComplexNumber num2(num1.getMagnitude(), num1.getTheta(), true);

	// Testing conversion from rectangular to polar and vice versa
	cout << "Testing conversion from rectangular to polar and vice versa: " << endl;
	cout << "num1: ";
	num1.printPolar(cout);
	cout << endl;
	cout << "num2: ";
	num2.printPolar(cout);
	cout << endl;
	cout << "num1: ";
	num1.printRectangular(cout);
	cout << endl;
	cout << "num2: ";
	num2.printRectangular(cout);
	cout << endl;

	// Testing arithmetic operations
	ComplexNumber num3 = num1 + num2;
	ComplexNumber num4 = num3 - num1;
	ComplexNumber num5 = num3 * num1;
	ComplexNumber num6 = num3 / num1;

	cout << "num1 + num2 = num3 = ";
	num3.printRectangular(cout);
	cout << endl;

	cout << "num3 - num1 = num4 = ";
	num4.printRectangular(cout);
	cout << endl;

	cout << "num3 * num1 = num5 = ";
	num5.printRectangular(cout);
	cout << endl;

	cout << "num3 / num1 = num6 = ";
	num6.printRectangular(cout);
	cout << endl;

	cout << "Conjugate num1 = ";
	num1.conjugate().printRectangular(cout);
	cout << endl;


	return 0;
}