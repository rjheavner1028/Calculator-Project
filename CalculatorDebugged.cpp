/*
 * Calculator.cpp
 *
 *  Date: 9/4/2023
 *  Author: Robert Heavner
 */

#include <iostream>

using namespace std;

int main() // Changed void to int for main()
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer = 'Y';  // Fixed

    while (answer == 'Y' || answer == 'y')  // 'Y'
    {
        cout << "Enter expression" << endl;
        cin >> op1 >> operation >> op2;  // Corrected

        if (operation == '+')  // Removed semicolon
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;

        if (operation == '-')  // Removed semicolon and fixed operator
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;

        if (operation == '*')  // Corrected symbol
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;

        if (operation == '/')  // Corrected symbol
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }

    return 0;  // Added return statement
}
