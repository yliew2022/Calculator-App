#include "trigtest.h"
#include "power.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int trigFunctions()
{
    double(*trigMenu[9])(double) = { sine, cos, tan, arcsin, arccos, arctan };
    size_t trigOption;

    cout << "Select an option: ",
            "0 - sine",
            "1 - cos",
            "2 - tan",
            "3 - arcsin",
            "4 - arccos"
            "5 - arctan";
    cin >> trigOption;

    while (trigOption >= 0 && trigOption < 6)
    {
//        (*trigMenu[trigOption])();

        cout << "Select an option: ",
            "0 - sine",
            "1 - cos",
            "2 - tan",
            "3 - arcsin",
            "4 - arccos"
            "5 - arctan";
        cin >> trigOption;
    }
    return trigOption;
}
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
    cout << "Enter a number";
    cin >> x;
    cout << sine(x);
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
    cout << "Enter a number";
    cin >> x;
    cout << cos(x);
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
  cout << "Enter a number";
  cin >> x;
  cout << arcsin(x);
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
  cout << "Enter a number";
  cin >> x;
  cout << arccos(x);
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
  cout << "Enter a number";
  cin >> x;
  cout << arctan(x);
}

