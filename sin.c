#include <iostream>
#include "sin.h"
using namespace std;

//const double pi = 3.1415926535897932384650288;

double sine(double x)
{
    double sum = 0;
    if(x > 360){
        x -= int( x / 360 ) * 360;
        x *= pi / 180.0;
    }
    else
        x *= pi / 180.0;
    
    //int n = 0;
    for (int n = 0; n <= 20; n++)
    {
        //sum += ((-1, n + 1) * pow(x, 2*n - 1))/factorial(2*n - 1);
        sum += pow(-1, n) * pow(x, 2 * n + 1)/factorial(2 * n + 1);
    }
    return sum;
}

