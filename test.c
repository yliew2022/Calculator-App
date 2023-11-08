#include "trigonometry.h"
#include "ComplexNumber.h"
#include "sort.h"
#include "Matrix.c"
#include "combinatrix.c"
#include "stats.c"
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    double choice;
    cout << "Please select an option:\n1 - Trig\n2 - Complex\n3 - Matrix\n4 - Combinatrix\n5 - Stats and Financing\n";
            //"1 - Trig\n";
            //"2 - Complex\n";
            //"3 - Matrix\n";
            //"4 - Combinatrix\n";
            //"5 - Stats and Financing\n";
    cin >> choice;
    if (choice == 1)
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
            cout << "The result is " << sine(x)/cos(x) << "\n";
            break;
        }
        case 4: {
            cout << "Please enter a degree: ";
            cin >> x;
            cout << "The result is " << 1/cos(x) << "\n";
            break;
        }
        case 5: {
            cout << "Please enter a degree: ";
            cin >> x;
            cout << "The result is " << 1/sine(x) << "\n";
            break;
        }
        case 6: {
            cout << "Please enter a degree: ";
            cin >> x;
            cout << "The result is " << 1/(sine(x)/cos(x)) << "\n";
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
            cout << "The result is " << (pi/2) - arcsin(x) << "\n";
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
            cout << "Thank you\n";
            break;
    }
    }
    }
        }
    if (choice == 2)
    {
        int number;
        double a;
        double b;
        cout << "Please select an option: \n1 - Multiplication\n2 - Addition\n3 - Subtraction\n4 - Division\n5 - Conjugate\n6 - Polar to Rectangular\n7 - Rectangular to Polar\n";
        cin >> number;
        if (number > 0 && number <= 7)
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

                break;
            }
            case 6: {
                cout << "Please enter polar(r and angle(theta)) to be converted to rectangular: ";
                cin >> a;
                cin >> b;
                double conva;
                conva = a*cos(b);
                double convb;
                convb = a*sine(b);
                cout << "The answer is " << a << " +i(" << b << ")" << endl;
                break;
            }
            case 7: {
                cout << "Please enter rectangular(x, y) to be converted to polar:";
                cin >> a;
                cin >> b;
                cout << "The answer is " << a << "*(cos(" << b << ")+isin(" << b << "))" << endl;
                break;
            }
            }
        }
    }
    if (choice == 3)
    {
        int number;
        double a;
        double b;
        cout << "Please select an option: \n1 - Addition\n2 - Subtraction\n3 - Transpose\n4 - Inverse\n5 - Determinant\n6 - Multiplication\n";
        cin >> number;
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
                    cout << "Enter elements of matrix A : ";
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            cin >> A[i][j];
                        cout << "Enter elements of matrix B : ";
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                            cin >> B[i][j];		
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            C[i][j] = A[i][j] + B[i][j];
                    cout << "Sum of matrices\n";
                    for (i = 0; i < r1; i++)
                    {    for (j = 0; j < c1; j++)
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
                    cout << "Enter elements of matrix A : ";
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            cin >> A[i][j];
                        cout << "Enter elements of matrix B : ";
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                            cin >> B[i][j];		
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            C[i][j] = A[i][j] - B[i][j];
                    cout << "Sum of matrices\n";
                    for (i = 0; i < r1; i++)
                    {    for (j = 0; j < c1; j++)
                            cout << C[i][j] << "  ";	
                        cout << "\n";
                    }
                break;
            }
            case 3: {
                    int r1, c1, i, j, A[4][4],C[4][4];
                    cout << "Enter rows and column of matrix A(max 4x4) : ";
                    cin >> r1 >> c1;
                    cout << "Enter elements of matrix A : ";
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            cin >> A[i][j];
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++) {
                            C[j][i] = A[i][j];	
                        }
                    cout << "Transpoe of matrix\n";
                    for (i = 0; i < c1; i++)
                    {    for (j = 0; j < r1; j++)
                            cout << C[i][j] << "  ";	
                        cout << "\n";
                    }
                break;
            }
            case 4: {
                #define SIZE 10
                float a[SIZE][SIZE], x[SIZE], ratio;
                int i,j,k,n;
                cout<<"Enter the order (Ex. 3 for 3x3): ";
                cin>>n;
                cout<<"Enter each number from left to right one at a time: " << endl;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        cout<<"a["<< i<<"]"<< j<<"]= ";
                        cin>>a[i][j];
                    }
                }
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(i==j)
                        {
                                a[i][j+n] = 1;
                        }
                        else
                        {
                                a[i][j+n] = 0;
                        }
                    }
                }
		 for(i=1;i<=n;i++)
		 {
			  if(a[i][i] == 0.0)
			  {
				   cout<<"Please try again";
				   exit(0);
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=2*n;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
			   	a[i][j] = a[i][j]/a[i][i];
			  }
		 }
		 cout<< endl<<"Inverse of Matrix: "<< endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
			   	cout<< a[i][j]<<"\t";
			  }
			  cout<< endl;
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
                    cout<<"The entered matrix is:" << endl;
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < n; j++)
                        cout << matrix[i][j] << " ";
                        cout<<endl;
                    }
                    cout<<"Determinant of matrix: "<< determinant(matrix, n);
                    break;
                    }
            case 6: {
                    int r1, c1, r2, c2, i, j, k, A[4][4], B[4][4], C[4][4];
                    cout << "Enter rows and column of matrix A(max 4x4) : ";
                    cin >> r1 >> c1;
                    cout << "Enter rows and column of matrix B(max 4x4) : ";
                    cin >> r2 >> c2; 
                    if ((r1!= c1) && (r2 != c2))
                    {
                        cout << "Must be the same dimensions";
                        exit(0);
                    }	
                    cout << "Enter elements of matrix A: ";
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c1; j++)
                            cin >> A[i][j];
                    cout << "Enter elements of matrix B :";
                    for (i = 0; i < r2; i++)
                        for (j = 0; j < c2; j++)
                    for(i = 0; i < r1; i++)
                        for(j = 0; j < c2; j++)
                        {
                            C[i][j] = 0;
                        }
                    for (i = 0; i < r1; i++)
                        for (j = 0; j < c2; j++)
                            for(k = 0; k < c1; k++)
                            {
                                C[i][j] += A[i][k] * B[k][j];
                            }
                    cout << "Multiplication of matrices\n";
                    for (i = 0; i < r1; i++)
                    {   for (j = 0; j < c2; j++)
                       
                            cout << C[i][j] << "  ";	
                        cout << "\n";
                    }
                    break;
            }
        }
    
    }
}
    if (choice == 4)
    {
        int number;
        cout << "Please select an option: \n1 - Combination\n2 - Permutation\n3 - Factorial\n4 - Fibonnaci Series\n5 - Pascal's Triangle\n6 - Arithmetic Sequence\n7 - Arithmetic Series\n8 - Geometric Sequence\n9 - Geometric series\n10 - gcd\n11 - Prime Numbers\n12 - Perfect Numbers\n";
        cin >> number;
        if (number > 0 && number <= 12)
        {
            switch(number) {
                case 1: {
                    int n, k, combination;
                    cout << "Enter n : ";
                    cin >> n;
                    cout << "Enter k : ";
                    cin >> k;
                    combination = factorial(n) / (factorial(k) * factorial(n-k));
                    cout << "\nCombination : " << combination;
                    //return 0;
                    break;
                }
                case 2: {
                    int n, k, permutation;
                    cout << "Enter n : ";
                    cin >> n;
                    cout << "Enter k : ";
                    cin >> k;
                    permutation = factorial(n) / factorial(n-k);
                    cout << "Permutation: " << permutation;
                    //return 0;
                    break;
                }
                case 3: {
                    int n;
                    cout << "Please enter a number: ";
                    cin >> n;
                    cout << "The result is: " << factorial(n);
                    break;
                }
                case 4: {
                    int n, term1 = 0, term2 = 1, after = 0;

                    cout << "Enter the series of numbers: ";
                    cin >> n;

                    cout << "The fibonacci series is: ";
                    int i;
                    for (i = 1; i <= n; i++){
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
                    for (int term = 1; term <= n; term++) {
                        cout << a + (term - 1) * d << " ";
                    }
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
                    cout << "The result is: " << sumSeries(a, d, n);
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
                    int sum = 0, temp = a;
                
                    for (int i = 1; i < n; i++)
                    {
                        sum = sum + temp;
                        temp = temp * d;
                        cout << temp << " ";
                    }
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
                    cout << "The result is: " << geoSum(a, d, n);
                    break;
                }
                case 10: {
                    int num1, num2;
                    cout << "Enter two numbers: ";
                    cin >> num1 >> num2;
                    while (num1 != num2) {
                        if (num1 > num2)
                            num1 -= num2;
                        else
                            num2 -= num1;
                    }
                    cout << "GCD is: " << num1;
                    break;
                }
                case 11: {
                    int x, n;
                    bool checkprime = true;

                    cout << "Enter a number(Positive): ";
                    cin >> n;

                    if ( n == 0 or n == 1) {
                        checkprime = false;
                    }
                    for (x = 2; x <= n/2; x++) {
                        if (n % x == 0) {
                            checkprime = false;
                            break;
                        }
                    }
                    if (checkprime)
                        cout << n << " is prime";
                    else
                        cout << n << " is not a prime";
                    break;
                }
                case 12: {
                    int num, x, i = 0;

                    cout << "Enter a number: ";
                    cin >> num;

                    for (x = 1; x < num; x++)
                    {
                        if (num % x == 0)
                        {
                            i = i + x;
                        }
                    }
                    if (num == i)
                        cout << num << " is a perfect number";
                    else
                        cout << num << " is not a perfect number";
                    break;
                }
        }
    }
}
    if (choice == 5)
    {
        int number;
        cout << "Please select an option: \n1 - Mean\n2 - Median\n3 - Mode\n4 - Standard deviation\n5 - Variance\n6 - Simple Interest\n7 - Compound Interest\n8 - APR Financing\n";
        cin >> number;
        if (number > 0 && number <= 8)
        {
            switch(number) {
                case 1: {
                    //float values[] = {};
                    //cout << "Enter the values: ";
                    //cin >> values;
                    //cout << "Mean is: " << mean(values, sizeof(values));
                    float data_set[] = {};
                    int number;
                    cout << "Enter the number of elments: ";
                    cin >> number;
                    for (int i = 0; i < number; i++) {
                        cout << "Enter the value for value #" << i << ": ";
                        cin >> data_set[i];
                    }
                    cout << "Mean: " << mean(data_set, number);
                    break;
                }
                case 2: {
                    int a[] = {};
                    int number;
                    cout << "Enter the number of elments: ";
                    cin >> number;
                    int i;
                    for (int i = 0; i < number; i++) {
                        cout << "Enter the value(from least to most) for value #" << i << ": ";
                        cin >> a[i];
                    }
                    //int n = sizeof(a)/sizeof(a[0]);
                    cout << "Median: " << median(a, number);
                    break;
                }
                case 3: {
                    
                }
}
}
}
}
