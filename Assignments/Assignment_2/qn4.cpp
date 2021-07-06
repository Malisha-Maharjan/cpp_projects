#include <iostream>

using namespace std;

int main()
{
    int num1, num2, operation;

    cout << "num1: ";
    cin >> num1;

    cout << "num2: ";
    cin >> num2;

    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl
        << "2. Subtraction" << endl
        << "3. Division" << endl
        << "4. Multiplication" << endl;
    cin >> operation;

    switch (operation)
    {
        case 1 :
        int sum;
        sum = num1 + num2;
        cout << num1 << "+" << num2 << "=" << sum << endl;
        break;

        case 2 :
        int sub;
        sub = num1 - num2;
        cout << num1 << " - " << num2 << " = " << sub << endl;
        break;

        case 3 :
        float quot; 
        quot = num1 / num2;
        cout << num1 << "/" << num2 << "=" << quot << endl;
        break;

        case 4 :
        int multi;
        multi = num1 * num2;
        cout << num1 << "*" << num2 << "=" << multi << endl;
        break;
    }

    return 0;
}