#include <iostream>
#include "arctan.h"
using namespace std;

//const double conversion = 0.0174541787;

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

