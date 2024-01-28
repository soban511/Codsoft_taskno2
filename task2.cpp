#include <iostream>
#include <conio.h>
#include <iomanip>
#include <limits>
using namespace std;

double add (double a, double b)
{
    return a + b;
}

double subtract (double a, double b)
{
    return a - b;
}

double multiply (double a, double b)
{
    return a * b;
}

double divide (double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else 
    {
        cout << setw (88) << "Error! Can't divide a number with zero." << endl;
        return numeric_limits <double> :: quiet_NaN ();
    }
}

double power (double a, double b)
{
    if (b == 1)
        return a;
    return a * power (a, --b);
}

double factorial (double a)
{
    if (a > -1)
    {
        if (a == 1 || a == 0)
            return 1;
        return a * factorial (a - 1);
    }
    else
    {
        cout << setw (95) << "Error! Can't calculate factorial of negative values." << endl;
        return numeric_limits <double> :: quiet_NaN ();
    }
}

double percent (double a, double b)
{
    return (a / b) * 100;
}

void calculator ()
{
    char choice;
    double a = 0, b = 0;
    bool flag = true;

    system ("cls");
    cout << endl << endl;
    cout << setw (100) << "==============================================================" << endl;
    cout << setw (100) << "                   Welcome to my Calculator                   " << endl;
    cout << setw (100) << "        Press corresponding key for specific operation        " << endl;
    cout << setw (100) << "==============================================================" << endl;
    cout << setw (100) << "                                                              " << endl;
    cout << setw (100) << "                    1. (+) for Addition                       " << endl;
    cout << setw (100) << "                    2. (-) for Subtraction                    " << endl;
    cout << setw (100) << "                    3. (*) for Multiplication                 " << endl;
    cout << setw (100) << "                    4. (/) for Division                       " << endl;
    cout << setw (100) << "                    5. (^) for Power                          " << endl;
    cout << setw (100) << "                    6. (!) for Factorial                      " << endl;
    cout << setw (100) << "                    7. (%) for Percentage                     " << endl;
    cout << setw (100) << "                    8. (esc) for Exit                         " << endl;
    cout << setw (100) << "                                                              " << endl;
    cout << setw (100) << "==============================================================" << endl;

    while (flag)
    {
        cout << setw (100) << "                                                              " << endl;
        cout << setw (77) << "                      Enter your key: ";
        choice = _getch ();

        switch (choice)
        {
            case 27:
            {
                system ("cls");
                cout << endl << endl << endl;
                cout << setw (100) << "==============================================================" << endl;
                cout << setw (100) << "                     Thank You for using.                     " << endl;
                cout << setw (100) << "                        See You Again.                        " << endl;
                cout << setw (100) << "==============================================================" << endl;
                cout << endl << endl << endl;
                flag = false;
                break;
            }

            case 43:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                         (Addition)                           " << endl;
                cout << setw (78) << "                    Enter first number: ";
                cin >> a;
                cout << setw (78) << "                    Enter second number: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << add (a, b) << endl;
                break;
            }

            case 45:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                       (Subtraction)                          " << endl;
                cout << setw (78) << "                    Enter first number: ";
                cin >> a;
                cout << setw (78) << "                    Enter second number: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << subtract (a, b) << endl;
                break;
            }

            case 42:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                      (Multiplication)                        " << endl;
                cout << setw (78) << "                    Enter first number: ";
                cin >> a;
                cout << setw (78) << "                    Enter second number: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << multiply (a, b) << endl;
                break;
            }

            case 47:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                         (Division)                           " << endl;
                cout << setw (76) << "                      Enter Dividend: ";
                cin >> a;
                cout << setw (76) << "                      Enter Divisor: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << divide (a, b) << endl;
                break;
            }

            case 94:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                           (Power)                            " << endl;
                cout << setw (74) << "                      Enter Base: ";
                cin >> a;
                cout << setw (76) << "                      Enter Exponent: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << power (a, b) << endl;
                break;
            }

            case 33:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                         (Factorial)                          " << endl;
                cout << setw (77) << "                     Enter the number: ";
                cin >> a;
                cout << setw (71) << "                     Result: " << factorial (a) << endl;
                break;
            }

            case 37:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                        (Percentage)                          " << endl;
                cout << setw (78) << "                    Enter actual value: ";
                cin >> a;
                cout << setw (78) << "                    Enter total value: ";
                cin >> b;
                cout << setw (71) << "                     Result: " << percent (a, b) << "%" << endl;
                break;
            }

            default:
            {
                cout << setw (100) << "                                                              " << endl;
                cout << setw (100) << "                     Invalid Key Pressed.                     " << endl;
            }
        }
    }
}

int main ()
{
    calculator ();

    return 0;
}