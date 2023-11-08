#include <iostream>
using namespace std;

const double pi = 3.1415926535897932384650288;

double sin(double x)
{
  double signpn = 1;
  if (x < 0){
    signpn = -1.0;
    x = -x;
  }
  if (x > 360) 
  x -= int( x / 360 ) * 360;
  x *= pi / 180.0;
  double startnum = 0;
  double term = x;
  int n = 1;
  while (startnum + term != startnum)
  {
    startnum += term;
    n += 2;
    term *= -x * x / n / (n-1);
  }

  return signpn * startnum;
}
