#include <iostream>
#include <iomanip>
#include "combinatrix.h"
#include "power.h"
using namespace std;

long long int combinations(int n, int k)
{
    long long int combinations = factorial(n) / (factorial(k) * factorial(n - k));
    return combinations;
}

double permutations(int n, int k)
{
    double permutations = factorial(n) / factorial(n - k);
    return permutations;
}

int fibonnaci(int n)
{
    int term1 = 0, term2 = 1, after = 0;

    int i;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            cout << term1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << term2 << ", ";
            continue;
        }
        after = term1 + term2;
        term1 = term2;
        term2 = after;

        cout << after << ", ";
    }
    return 0;
}
float sumSeries(float a, float d, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a + d;
    }
    return sum;
}

long pascal(long n, long r) {
    long numb = 1, i;
    for (i = n; i > r; i--)
        numb *= i;
    return long(numb / factorial(n - r));
}
void genPascalsTriangle(long n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++)
            cout << setw(3) << " ";
        for (int j = 0; j < (i + 1); j++)
            cout << setw(3) << pascal(i, j) << setw(3) << " ";
        cout << endl;
    }
}

float geoSum(float a, float d, int n)
{
    float sum = 0, temp = a;
    for (int i = 1; i < n; i++)
    {
        sum = sum + temp;
        temp = temp * d;
    }
    return sum;
}

double GCD(int num1, int num2)
{
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}


bool checkPerfect(int n)
{

    int sum = 1;


    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }

    if (sum == n && n != 1)
        return true;

    return false;
}
