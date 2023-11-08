#include <iomanip>
#include <iostream>
#include "power.h"
#include "trig.h"
#include "ComplexNumber.h"
#include "matrix.h"
#include "combinatrix.h"
#include "stats.h"
using namespace std;

int main()
{
    double choice;
    cout << "\nPlease select an option : \n1 - Trig\n2 - Complex\n3 - Matrix\n4 - Combinatrix\n5 - Stats and Financing\n6 - Exit\n";
    cin >> choice;
    if (!cin.fail()) {


        while (choice == 1)
        {
            double x;
            int number;
            cout << "1 - Sin\n";
            cout << "2 - Cos\n";
            cout << "3 - Tan\n";
            cout << "4 - Sec\n";
            cout << "5 - Csc\n";
            cout << "6 - Cot\n";
            cout << "7 - Arcsin(exact decimal)\n";
            cout << "8 - Arccos(exact decimal)\n";
            cout << "9 - Arctan(exact decimal)\n";
            cout << "10 - Conversion of degrees to radians(exact)\n";
            cout << "11 - Exit\n";
            cin >> number;
            if (!cin.fail()) {


                if (number > 0 && number <= 11)
                {
                    switch (number) {
                    case 1: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << sine(x) << "\n";
                        break;
                    }
                    case 2: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << cos(x) << "\n";
                        break;
                    }
                    case 3: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << sine(x) / cos(x) << "\n";
                        break;
                    }
                    case 4: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << 1 / cos(x) << "\n";
                        break;
                    }
                    case 5: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << 1 / sine(x) << "\n";
                        break;
                    }
                    case 6: {
                        cout << "Please enter a degree: ";
                        cin >> x;
                        cout << "The result is " << 1 / (sine(x) / cos(x)) << "\n";
                        break;
                    }
                    case 7: {
                        cout << "Please enter a radian(exact): ";
                        cin >> x;
                        cout << "The result is " << arcsin(x) << "\n";
                        break;
                    }
                    case 8: {
                        cout << "Please enter a radian(exact): ";
                        cin >> x;
                        cout << "The result is " << (pi / 2) - arcsin(x) << "\n";
                        break;
                    }
                    case 9: {
                        cout << "Please enter a radian(exact): ";
                        cin >> x;
                        cout << "The result is " << arctan(x) << "\n";
                        break;
                    }
                    case 10: {
                        cout << "Please enter a degree to convert to radian(exact): ";
                        cin >> x;
                        cout << "The conversion is " << conversion * x << "\n";
                        break;
                    }
                    case 11: {
                        cout << "\nThank you!\n";
                        cout << "\n Created by Yi Yang Liew and Mohammed Hamitou\n";
                        return 0;
                    }
                    }
                }
            }
                else {
                    return 0;
                }
        }
        while (choice == 2)
        {
            int number;
            double a;
            double b;
            cout << "\nPlease select an option: \n1 - Multiplication\n2 - Addition\n3 - Subtraction\n4 - Division\n5 - Conjugate\n6 - Polar to Rectangular\n7 - Rectangular to Polar\n8 - Exit\n";
            cin >> number;
            if (!cin.fail()) {


                if (number > 0 && number <= 8)
                {
                    switch (number) {
                    case 1: {
                        cout << "Please enter two numbers to be multiplied: ";
                        cin >> a;
                        cin >> b;
                        cout << "The answer is " << a * b;
                        break;
                    }
                    case 2: {
                        cout << "Please enter two numbers to be added: ";
                        cin >> a;
                        cin >> b;
                        cout << "The answer is " << a + b;
                        break;
                    }
                    case 3: {
                        cout << "Please enter two numbers to be subtracted: ";
                        cin >> a;
                        cin >> b;
                        cout << "The answer is " << a - b;
                        break;
                    }
                    case 4: {
                        cout << "Please enter two numbers to be divided: ";
                        cin >> a;
                        cin >> b;
                        cout << "The answer is " << a / b;
                        break;
                    }
                    case 5: {
                        cout << "Enter numbers in the form (number1) + or - (number2)i: ";
                        cin >> a;
                        cin >> b;
                        ComplexNumber num1(a, b, false);
                        cout << "Conjugate num1 = ";
                        num1.conjugate().printRectangular(cout);
                        cout << endl;
                        break;
                    }
                    case 6: {
                        cout << "Please enter polar(r and angle(theta)) to be converted to rectangular: ";
                        cin >> a;
                        cin >> b;
                        //ComplexNumber num1(a, b, false);
                        cout << "Polar rectangular is: ";
                        cout << "(" << a * cos(b) << ", " << a * sin(b) << ")";
                        cout << endl;
                        break;
                    }
                    case 7: {
                        cout << "Please enter rectangular(x, y) to be converted to polar: ";
                        cin >> a;
                        cin >> b;
                        //ComplexNumber num1(a, b, false);
                        cout << "The polar is: ";
                        //num1.printPolar(cout);
                        cout << "(" << sqrt(pow(a, 2) + pow(b, 2)) << ", " << arctan(b / a) << ")";
                        cout << endl;
                        break;
                    }
                    case 8: {
                        cout << "\nThank you!\n";
                        cout << "\n Created by Yi Yang Liew and Mohammed Hamitou\n";
                        return 0;
                    }
                    }
                }
            }
            else {
                return 0;
            }
        }
        while (choice == 3)
        {
            int number;
            double a;
            double b;
            cout << "\nPlease select an option : \n1 - Addition\n2 - Subtraction\n3 - Transpose\n4 - Inverse\n5 - Determinant\n6 - Multiplication\n7 - Exit\n";
            cin >> number;
            if (!cin.fail()) {


                if (number > 0 && number <= 7)
                {
                    switch (number) {
                    case 1: {

                        int r1, c1, r2, c2, i, j, A[4][4], B[4][4], C[4][4];
                        cout << "Enter rows and column of matrix A(max 4x4) : ";
                        cin >> r1 >> c1;
                        cout << "Enter rows and column of matrix B(max 4x4) : ";
                        cin >> r2 >> c2;
                        if ((r1 != r2) && (c1 != c2))
                        {
                            cout << "Must be the same dimensions";
                            exit(0);
                        }
                        cout << "Enter elements of matrix A : \n";
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                cin >> A[i][j];
                        cout << "Enter elements of matrix B : \n";
                        for (i = 0; i < r2; i++)
                            for (j = 0; j < c2; j++)
                                cin >> B[i][j];
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                C[i][j] = A[i][j] + B[i][j];
                        cout << "Sum of matrices\n";
                        for (i = 0; i < r1; i++)
                        {
                            for (j = 0; j < c1; j++)
                                cout << C[i][j] << "  ";
                            cout << "\n";
                        }
                        break;
                    }
                    case 2: {
                        int r1, c1, r2, c2, i, j, A[4][4], B[4][4], C[4][4];
                        cout << "Enter rows and column of matrix A(max 4x4) : ";
                        cin >> r1 >> c1;
                        cout << "Enter rows and column of matrix B(max 4x4) : ";
                        cin >> r2 >> c2;
                        if ((r1 != r2) && (c1 != c2))
                        {
                            cout << "Must be the same dimensions";
                            exit(0);
                        }
                        cout << "Enter elements of matrix A : \n";
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                cin >> A[i][j];
                        cout << "Enter elements of matrix B : \n";
                        for (i = 0; i < r2; i++)
                            for (j = 0; j < c2; j++)
                                cin >> B[i][j];
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                C[i][j] = A[i][j] - B[i][j];
                        cout << "Subtraction of matrices\n";
                        for (i = 0; i < r1; i++)
                        {
                            for (j = 0; j < c1; j++)
                                cout << C[i][j] << "  ";
                            cout << "\n";
                        }
                        break;
                    }
                    case 3: {
                        int r1, c1, i, j, A[4][4], C[4][4];
                        cout << "Enter rows and column of matrix A(max 4x4) : ";
                        cin >> r1 >> c1;
                        cout << "Enter elements of matrix A : \n";
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                cin >> A[i][j];
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++) {
                                C[j][i] = A[i][j];
                            }
                        cout << "Transpoe of matrix\n";
                        for (i = 0; i < c1; i++)
                        {
                            for (j = 0; j < r1; j++)
                                cout << C[i][j] << "  ";
                            cout << "\n";
                        }
                        break;
                    }
                    case 4: {
#define SIZE 10
                        float a[SIZE][SIZE], x[SIZE], ratio;
                        int i, j, k, n;
                        cout << "Enter the order (Ex. 3 for 3x3): ";
                        cin >> n;
                        cout << "Enter each number from left to right one at a time: \n" << endl;
                        for (i = 1; i <= n; i++)
                        {
                            for (j = 1; j <= n; j++)
                            {
                                cout << "a[" << i << "]" << j << "]= ";
                                cin >> a[i][j];
                            }
                        }
                        for (i = 1; i <= n; i++)
                        {
                            for (j = 1; j <= n; j++)
                            {
                                if (i == j)
                                {
                                    a[i][j + n] = 1;
                                }
                                else
                                {
                                    a[i][j + n] = 0;
                                }
                            }
                        }
                        for (i = 1; i <= n; i++)
                        {
                            if (a[i][i] == 0.0)
                            {
                                cout << "Please try again";
                                exit(0);
                            }
                            for (j = 1; j <= n; j++)
                            {
                                if (i != j)
                                {
                                    ratio = a[j][i] / a[i][i];
                                    for (k = 1; k <= 2 * n; k++)
                                    {
                                        a[j][k] = a[j][k] - ratio * a[i][k];
                                    }
                                }
                            }
                        }
                        for (i = 1; i <= n; i++)
                        {
                            for (j = n + 1; j <= 2 * n; j++)
                            {
                                a[i][j] = a[i][j] / a[i][i];
                            }
                        }
                        cout << endl << "Inverse of Matrix: " << endl;
                        for (i = 1; i <= n; i++)
                        {
                            for (j = n + 1; j <= 2 * n; j++)
                            {
                                cout << a[i][j] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case 5: {
                        int n, i, j;
                        int matrix[4][4];
                        cout << "Enter order (Ex. 3 for 3x3): \n";
                        cin >> n;
                        cout << "Enter the elements of matrix A: \n";
                        for (i = 0; i < n; i++)
                            for (j = 0; j < n; j++)
                                cin >> matrix[i][j];
                        cout << "The entered matrix is:" << endl;
                        for (i = 0; i < n; i++) {
                            for (j = 0; j < n; j++)
                                cout << matrix[i][j] << " ";
                            cout << endl;
                        }
                        cout << "Determinant of matrix: " << determinant(matrix, n);
                        break;
                    }
                    case 6: {
                        int r1, c1, r2, c2, i, j, k, A[4][4], B[4][4], C[4][4];
                        cout << "Enter rows and column of matrix A(max 4x4) : ";
                        cin >> r1 >> c1;
                        cout << "Enter rows and column of matrix B(max 4x4) : ";
                        cin >> r2 >> c2;
                        if ((r1 != c1) && (r2 != c2))
                        {
                            cout << "Must be the same dimensions";
                            exit(0);
                        }
                        cout << "Enter elements of matrix A: \n";
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c1; j++)
                                cin >> A[i][j];
                            cout << "Enter elements of matrix B : \n";
                            for (i = 0; i < r2; i++)
                                for (j = 0; j < c2; j++)
                                    cin >> B[i][j];
                                for (i = 0; i < r1; i++)
                                    for (j = 0; j < c2; j++)
                                    {
                                        C[i][j] = 0;
                                    }
                        for (i = 0; i < r1; i++)
                            for (j = 0; j < c2; j++)
                                for (k = 0; k < c1; k++)
                                {
                                    C[i][j] += A[i][k] * B[k][j];
                                }
                        cout << "Multiplication of matrices:\n";
                        for (i = 0; i < r1; i++)
                        {
                            for (j = 0; j < c2; j++)

                                cout << C[i][j] << "  ";
                            cout << "\n";
                        }
                        break;
                    }
                    case 7: {
                        cout << "\nThank you!\n";
                        cout << "\n Created by Yi Yang Liew and Mohammed Hamitou\n";
                        return 0;
                    }
                    }

                }
            }
            else {
                return 0;
            }
        }
        while (choice == 4)
        {
            int number;
            cout << "\nPlease select an option : \n1 - Combination\n2 - Permutation\n3 - Factorial\n4 - Fibonnaci Series\n5 - Pascal's Triangle\n6 - Arithmetic Sequence\n7 - Arithmetic Series\n8 - Geometric Sequence\n9 - Geometric series\n10 - gcd\n11 - Prime Numbers\n12 - Perfect Numbers\n13 - Exit\n";
            cin >> number;
            if (!cin.fail()) {


                if (number > 0 && number <= 13)
                {
                    switch (number) {
                    case 1: {
                        int n, k;
                        cout << "Enter n : ";
                        cin >> n;
                        cout << "Enter k : ";
                        cin >> k;
                        cout << "\nCombination : " << combinations(n, k) << "\n";
                        break;
                    }
                    case 2: {
                        int n, k;
                        cout << "Enter n : ";
                        cin >> n;
                        cout << "Enter k : ";
                        cin >> k;
                        cout << "\nPermutation: " << permutations(n, k) << "\n";
                        break;
                    }
                    case 3: {
                        int n;
                        cout << "Please enter a number: ";
                        cin >> n;
                        cout << "\nThe result is: " << factorial(n) << "\n";
                        break;
                    }
                    case 4: {
                        int n;
                        cout << "Enter the series of numbers: ";
                        cin >> n;

                        cout << "\nThe fibonacci series is: ";
                        cout << fibonnaci(n) << "\n";
                        break;
                    }
                    case 5: {
                        int n;
                        cout << "Enter value of N: "; cin >> n;
                        genPascalsTriangle(n);
                        break;
                    }
                    case 6: {
                        int n, a, d;
                        cout << "Enter the first value: ";
                        cin >> a;
                        cout << "Enter the nth value: ";
                        cin >> n;
                        cout << "Enter the common difference: ";
                        cin >> d;
                        cout << "\nThe result is: ";
                        for (int term = 1; term <= n; term++) {
                            cout << a + (term - 1) * d << " ";
                        }
                        cout << "\n";
                        break;
                    }
                    case 7: {
                        int n, a, d;
                        cout << "Enter the first value: ";
                        cin >> a;
                        cout << "Enter the nth value: ";
                        cin >> n;
                        cout << "Enter the common difference: ";
                        cin >> d;
                        cout << "\nThe result is: " << sumSeries(a, d, n) << "\n";
                        break;
                    }
                    case 8: {
                        int a, d, n;
                        cout << "Enter the first value: ";
                        cin >> a;
                        cout << "Enter the nth value: ";
                        cin >> n;
                        cout << "Enter the ratio: ";
                        cin >> d;
                        cout << "\nThe result is: ";
                        int sum = 0, temp = a;

                        for (int i = 1; i < n; i++)
                        {
                            sum = sum + temp;
                            temp = temp * d;
                            cout << temp << " ";
                        }
                        cout << "\n";
                        break;
                    }
                    case 9: {
                        int a, d, n;
                        cout << "Enter the first value: ";
                        cin >> a;
                        cout << "Enter the nth value: ";
                        cin >> n;
                        cout << "Enter the ratio: ";
                        cin >> d;
                        cout << "\nThe result is: " << geoSum(a, d, n) << "\n";
                        break;
                    }
                    case 10: {
                        int num1, num2;
                        cout << "Enter two numbers: ";
                        cin >> num1 >> num2;
                        cout << "\nGCD is: " << GCD(num1, num2) << "\n";
                        break;
                    }
                    case 11: {
                        int x, n;
                        bool checkprime = true;
                        cout << "Enter a number(Positive): ";
                        cin >> n;
                        cout << "\n";
                        if (n == 0 || n == 1) {
                            checkprime = false;
                        }
                        for (x = 2; x <= n / 2; x++) {
                            if (n % x == 0) {
                                checkprime = false;
                                break;
                            }
                        }
                        if (checkprime)
                            cout << n << " is prime\n";
                        else
                            cout << n << " is not a prime\n";
                        break;
                    }
                    case 12: {
                        int num, x = 1, i = 0;

                        cout << "Enter a number: ";
                        cin >> num;
                        cout << "\n";
                        if (checkPerfect(num))
                            cout << num << " is a perfect number\n";
                        else
                            cout << num << " is not a perfect number\n";
                        break;
                    }
                    
                    case 13: {
                        cout << "\nThank you!\n";
                        cout << "\n Created by Yi Yang Liew and Mohammed Hamitou\n";
                        return 0;
                    }
                    }
                }
            }
            else {
                return 0;
            }
        }
        while (choice == 5)
        {
            int number;
            cout << "\nPlease select an option : \n1 - Mean\n2 - Median\n3 - Mode\n4 - Standard deviation\n5 - Variance\n6 - Simple Interest\n7 - Compound Interest\n8 - APR Financing\n9 - Exit\n";
            cin >> number;
            if (!cin.fail()) {


                if (number > 0 && number <= 9)
                {
                    switch (number) {
                    case 1: {
                        float data_set[50] = {};
                        int number;
                        cout << "Enter the number of elments: ";
                        cin >> number;
                        for (int i = 0; i < number; i++) {
                            cout << "Enter the value for value #" << i << ": ";
                            cin >> data_set[i];
                        }
                        cout << "\nMean: " << mean(data_set, number) << "\n";
                        break;
                    }
                    case 2: {
                        int i;
                        int a[50];
                        int number;
                        cout << "Enter the number of elments: ";
                        cin >> number;
                        if (number > 50)
                            cout << "Please try again";
                        exit;
                        for (int i = 0; i < number; i++) {
                            cout << "Enter the value for value #" << i << ": ";
                            cin >> a[i];
                        }
                        int n = sizeof(a) / sizeof(number);
                        cout << "\nMedian: " << median(a, number) << "\n";
                        break;
                    }
                    case 3: {
                        int i;
                        float a[50];
                        int number;
                        cout << "Enter the number of elments: ";
                        cin >> number;
                        for (int i = 0; i < number; i++) {
                            cout << "Enter the value for value #" << i << ": ";
                            cin >> a[i];
                        }
                        cout << "\nMode is: " << mode(a, number) << "\n";
                        break;
                    }
                    case 4: {
                        int i;
                        float a[50];
                        float number;
                        cout << "Enter the number of elments: ";
                        cin >> number;
                        for (int i = 0; i < number; i++) {
                            cout << "Enter the value for value #" << i << ": ";
                            cin >> a[i];
                        }
                        cout << "\nThe standard deviation is: " << standardDeviation(a, number) << "\n";
                        break;
                    }
                    case 5: {
                        int i;
                        float a[50];
                        float size;
                        cout << "Enter the number of elments: ";
                        cin >> size;
                        for (int i = 0; i < size; i++) {
                            cout << "Enter the value for value #" << i << ": ";
                            cin >> a[i];
                        }
                        cout << "\nThe variance is: " << variance(a, size) << "\n";
                        break;
                    }
                    case 6: {
                        float p;
                        float t;
                        float r;
                        cout << "Please enter a principal amount: ";
                        cin >> p;
                        cout << "Please enter a time period: ";
                        cin >> t;
                        cout << "Please enter a rate(per year): ";
                        cin >> r;
                        cout << "\nThe result is: " << simpleInterest(p, t, r) << "\n";
                        break;
                    }
                    case 7: {
                        float p;
                        float t;
                        float r;
                        cout << "Please enter a principal amount: ";
                        cin >> p;
                        cout << "Please enter a time period(years): ";
                        cin >> t;
                        cout << "Please enter a rate(per year): ";
                        cin >> r;
                        cout << "\nThe result is: " << compoundInterest(p, t, r) << "\n";
                        break;
                    }
                    case 8: {
                        float p;
                        float t;
                        float r;
                        float e;
                        cout << "Please enter a principal amount: ";
                        cin >> p;
                        cout << "Please enter a time period(years): ";
                        cin >> t;
                        cout << "Please enter a rate(per year): ";
                        cin >> r;
                        cout << "Please enter the fee: ";
                        cin >> e;
                        cout << "\nThe APR is: " << APR(p, t, r, e) << "% \n";
                        break;
                    }
                    case 9: {
                        cout << "\nThank you!\n";
                        cout << "\n Created by Yi Yang Liew and Mohammed Hamitou\n";
                        return 0;
                    }
                    }
                }
            }
            else {
            return 0;
            }
        }
    }

    else {
        return 0;
    }
}