#include <iostream>
#include "power.c"
#include "trig.h"
using namespace std;

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

double cos(double x)
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
        sum += pow(-1, n) * pow(x, 2 * n)/factorial(2 * n);
    }
    return sum;
}

double arcsin(double x)
{
  double sum = 0;
    //int n = 0;
  for (int n = 0; n <= 20; n++)
  {
      //sum += ((-1, n + 1) * pow(x, 2*n - 1))/factorial(2*n - 1);
      //sum += factorial(2 * n)/(((pow(2, n)*factorial(n))*((pow(2, n)*factorial(n)))))*((2*n) + 1);
      sum += pow(x, 2*n + 1)*(factorial(2*n)/(pow(2, 2*n)*(factorial(n)*(factorial(n)))*(2*n + 1)));
  }
  return sum;
}

double arccos(double x)
{
  double sum = 0;
    //int n = 0;
  for (int n = 0; n <= 20; n++)
  {
      //sum += ((-1, n + 1) * pow(x, 2*n - 1))/factorial(2*n - 1);
      //sum += factorial(2 * n)/(((pow(2, n)*factorial(n))*((pow(2, n)*factorial(n)))))*((2*n) + 1);
      sum += ((factorial(2*n))/((pow(2, 2*n))*(factorial(n)))*((pow(x, 2*n +1))/(2*n+1)));
  }
  return sum;
}

double arctan(double x)
{
  double sum = 0;
    //int n = 0;
  for (int n = 0; n <= 20; n++)
  {
      //sum += ((-1, n + 1) * pow(x, 2*n - 1))/factorial(2*n - 1);
      //sum += factorial(2 * n)/(((pow(2, n)*factorial(n))*((pow(2, n)*factorial(n)))))*((2*n) + 1);
      sum += (pow(x, 2*n + 1))*((pow(-1, n))/(2*n + 1));
  }
  return sum;
}

