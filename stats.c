#include <iostream>
#include <Bits.h>
//#include "sort.c"
#include "stats.h"
#include "power.h"
using namespace std;
float mean(float data[], int size) {
 float sum = 0;
 for (int i = 0; i < size; i++) {
 sum += data[i];
 }
 return sum / size;
}
double median(int a[], int n)
{
 if (n % 2 != 0)
 return (double)a[n / 2];
 return double(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
float mode(float arr[], int n)
{
 int max_count = 1;
 int result = arr[0];
 int count = 1;
 for (int i = 1; i < n; i++)
 {
 if (arr[i] == arr[i - 1])
 count++;
 else
 {
 if (count > max_count)
 {
 max_count = count;
 result = arr[i - 1];
 }
 count = 1;
 }
 }
 if (count > max_count)
 {
 max_count = count;
 result = arr[n - 1];
 }
 return result;
}
float standardDeviation(float array[], float n)
{
 return sqrt(variance(array, n));
}
float variance(float data[], float size)
{
 double m = mean(data, size);
 double u = 0;
 for (int i = 0; i < size; i++) {
 u += (data[i] - m) * (data[i] - m);
 }
 return u / size;
}
float simpleInterest(float p, float t, float r)
{
 float i = p * (1 + ((r/100) * t));
 return i;
}
float compoundInterest(float p, float t, float r)
{
 float i = p * pow((1 + r / 100), t);
 return i;
}
float APR(float p, float t, float r, float e)
{
 float z = (p * (1 + (r/100) * t));
 float interest = z - p;
 float closing = e + interest;
 float final = (((closing / p) / (t))) * 100;
 return final;
}