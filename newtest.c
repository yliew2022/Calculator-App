#include <iostream>
#include "sin.c"
#include "cos.c"

using namespace std;

int main()
{
    double x;
    cout << "Please enter a number: " << endl;
    cin >> x;
    cout << "The result is " << sine(x);
    
}