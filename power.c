#include "power.h"

long long int factorial(int n)
{
    if (n<=1) return 1;
    else return n*factorial(n-1);
}

double exp(double x)
{
    double sum=1;
    for(int i=1; i<50;++i)
    {
        sum+=pow(x,i)/factorial(i);
    }
    return sum;
}

double ln(double x)
{
    double sum=0;
    for(int i=1; i<50;++i)
    {
        sum+=pow(x-1,i)*pow(-1,i-1)/i;
    }
    return sum;
}


double pow(double x, double y)
{
    int b; float f;
    b=(int)y;
    f=y-b;

   if (x==0) return 0;
   else if (x==1 || y==0) return 1;

   else if (f==0)
    return pow_int(x,y);
   else
    return pow_int(x,b)*pow_frac(x,f);
}

double pow_int(double x, int n)
{
    if (x==0) return 0;
    else if(x==1 || n==0) return 1;
    else
    {
       double product =1;
        for(int i=1;i <=n; ++i)
            product*=x;
        return product;
    }
}

double pow_frac(double x, double f)
{
    double c;
    c=ln(x);
    return exp(f*c);
}

double log(double x)
{
 return ln(x)/ln(10);
}

