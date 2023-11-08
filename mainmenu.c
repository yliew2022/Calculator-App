#include "trigonometry.h"
#include "ComplexNumber.h"
#include <stdio.h>
#include <iostream>
using namespace std;

#define pi = 3.1415926535897932384650288;

int exit(void);

int main(void)
{
    //void(*displayMenu[6])(void) = { trigonometry, ExponentialsAndLog, Complex, Matrix, Combinatrix, StatsAndFinance};
    void(*displayMenu[1])(void) = { trigonometry.h };
    size_t option;

    cout << "Please select an option:" << endl;

    cout << "0 - Trigonometry",
            "1 - Exponentials and Logarithim",
            "2 - Complex Numbers",
            "3 - Matrix",
            "4 - Combinatrix",
            "5 - Statistics and Financing"
            "6 - Exit";
    scanf("%zu", &option);

    while (option >= 0 && option < 6)
    {
        (*displayMenu[option])();
        cout << "Please select an option:" << endl;

        cout << "0. Trigonometry",
                "1. Exponentials and Logarithim",
                "2. Complex Numbers",
                "3. Matrix",
                "4. Combinatrix",
                "5. Statistics and Financing"
                "6. Exit";
        scanf("%zu", &option);
    }

    if (option == 6)
    {
        exit();
    }
}

int exit(void)
{
    cout << "Thank you for using the calculator.";
    return 0;
}