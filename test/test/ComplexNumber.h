#pragma once
#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>
#include <cmath>
//#include "power.h"
using namespace std;

// A global constant for the value of Pi
const double PI = 3.14;

/**
* This class represents a complex number. It provides methods
* for arithmetic operations on complex numbers.
*/
class ComplexNumber {
private:
	double real;		// The real part of the number
	double imaginary;	// The imaginary part of the number
	double magnitude;	 // The magnitude of complex number in polar notation
	double theta;		 // The argument of the complex number in polar notation
public:

	// The default constructor creates a complex number equal to zero
	ComplexNumber();

	// The parametrized constructor creates a complex number using parameters
	ComplexNumber(double arg1, double arg2, bool polar);

	// This operator overload adds this number with another and returns the result
	ComplexNumber operator+(const ComplexNumber& other) const;

	// This operator overload subtracts the other number from this and returns the result
	ComplexNumber operator-(const ComplexNumber& other) const;

	// This operator overload multiplies this number with the other and returns the result
	ComplexNumber operator*(const ComplexNumber& other) const;

	// This operator overload divides this number with the other and returns the result
	ComplexNumber operator/(const ComplexNumber& other) const;

	// This function takes the conjugate of the number and returns the result
	// It does not change the data in this object
	ComplexNumber conjugate() const;

	// This function prints the number to stream in a properly formated way
	void printRectangular(ostream& out) const;

	// This function prints the number to stream in a properly formated way
	void printPolar(ostream& out) const;

	// Getters

	double getImaginary() const;

	double getReal() const;

	double getMagnitude() const;

	double getTheta() const;

};

#endif
