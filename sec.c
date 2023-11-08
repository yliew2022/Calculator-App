#include <iostream>
#include "sec.h"

using namespace std;

// Secant is 1/cos

int main()
{
    double x;
    cout << "Please enter a degree: " << endl;
    cin >> x;
    cout << "The value is " << 1/cos(x) << endl;
}