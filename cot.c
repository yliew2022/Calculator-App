#include <iostream>
#include "cot.h"

using namespace std;

// Cotangent is 1/tan


int main()
{
    double x;
    cout << "Please enter a degree: " << endl;
    cin >> x;
    cout << "The value is " << 1/(sine(x)/cos(x)) << endl;
}