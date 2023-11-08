#include <iostream>
#include "arcsin.c"
using namespace std;

//const double conversion = 0.0174541787;

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

