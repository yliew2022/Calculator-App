#include <iostream>
#include "trigonometry.h"
using namespace std;

int main()
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