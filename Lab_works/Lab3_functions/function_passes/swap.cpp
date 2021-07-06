#include <iostream>

using namespace std;

void swapByPassingValue(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    //The values of variable will be changed locally.
    //Therefore, the changed value cannot be accessed from the main function.

    // cout << "After calling function with values " << endl;
    // cout << "num1 = " << num1;
    // cout << "num2 = " << num2;
}

void swapByReference(int &num1, int &num2)  //instead of values, the memory address of the variable is passed as arguments.
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    //This change in values of the variables can be accessed from the main function.
}

int main()
{
    int num1 = 1;
    int num2 =2;

    cout << "Before calling function" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swapByPassingValue(num1, num2);

    cout << "After calling function with values " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swapByReference(num1, num2);

    cout << "After calling function with reference " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}