#include "ComplexNumber.h"
#include "trig.h"
// The default constructor creates a complex number equal to zero
ComplexNumber::ComplexNumber() {
this->real = 0;
this->imaginary = 0;
this->magnitude = 0;
this->theta = 0;
}
// The parametrized constructor creates a complex number using parameters
ComplexNumber::ComplexNumber(double arg1, double arg2, bool polar) {
if (!polar) {
this->real = arg1;
this->imaginary = arg2;
// Saving polar version as well
// magnitude = square root of sum of squares of real and imaginary parts
this->magnitude = pow(pow(this->real, 2) + pow(this->imaginary, 2), 0.5);
if (this->real == 0) {
if (this->imaginary < 0) {
this->theta = PI / 2;
}
else if (this->imaginary > 0) {
this->theta = (3.0 * PI) / 2.0;
}
else {
this->theta = 0;
}
}
else {
// theta = atan of (imaginary part / real part)
this->theta = arctan(this->imaginary / this->real);
}
}
else {
this->magnitude = arg1;
this->theta = arg2;
// Saving rectangular version as well
this->real = this->magnitude * cos(this->theta);
this->imaginary = this->magnitude * sine(this->theta);
}
}
// This operator overload adds this number with another and returns the result
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
return ComplexNumber(this->real + other.real,
this->imaginary + other.imaginary, false);
}
// This operator overload subtracts the other number from this and returns the result
ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
return ComplexNumber(this->real - other.real,
this->imaginary - other.imaginary, false);
}
// This operator overload multiplies this number with the other and returns the result
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
return ComplexNumber(
(this->real * other.real) - (this->imaginary * other.imaginary)
,
(this->real * other.imaginary) + (this->imaginary * other.real)
, false
);
}
// This operator overload divides this number with the other and returns the result
ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
// Finding and storing the conjugate of denominator
ComplexNumber denomConjugate = other.conjugate();
// Multiplying numerator with conjugate to find new numerator
ComplexNumber newNumerator = (*this) * denomConjugate;
// Multiplying denominator with conjugate to find new denominator
ComplexNumber newDenominator = other * denomConjugate;
// The new denominator should be a real number now so dividing with it
return ComplexNumber(newNumerator.getReal() / newDenominator.real,
newNumerator.getImaginary() / newDenominator.real, false);
}
// This function takes the conjugate of the number and returns the result
// It does not change the data in this object
ComplexNumber ComplexNumber::conjugate() const {
return ComplexNumber(this->real, this->imaginary * -1, false);
}
// This function prints the number to stream in a properly formated way
void ComplexNumber::printRectangular(ostream& out) const {
out << this->real << " ";
if (this->imaginary < 0) {
out << "- ";
out << this->imaginary * -1;
out << "i";
}
else if (this->imaginary > 0) {
out << "+ ";
out << this->imaginary;
out << "i";
}
}
// This function prints the number to stream in a properly formated way
void ComplexNumber::printPolar(ostream& out) const {
out << this->magnitude;
out << "(cos(";
out << this->theta;
out << ") + isin(";
out << this->theta;
out << ")";
}
// Getters
double ComplexNumber::getImaginary() const {
return this->imaginary;
}
double ComplexNumber::getReal() const {
return this->real;
}
double ComplexNumber::getMagnitude() const {
return this->magnitude;
}
double ComplexNumber::getTheta() const {
return this->theta;
}