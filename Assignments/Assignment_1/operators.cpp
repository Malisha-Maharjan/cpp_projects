#include <iostream>

using namespace std;

int main()
{
    
    int a,b; 

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    //****** Arithmetic operators ******

    int sum;
    sum = a + b;  //'+' is an arithmetic operator and '=' is assignment operators.

    int sub;
    sub = a - b; //'-' is an arithmetic operator

    int multi;
    multi = a * b; //'*' is an arithmetic operator
    
    cout << "Sum: " << sum << endl;
    cout << "Sub: " << sub << endl;
    cout << "Multiply: " << multi << endl;

    //**** Relational operators ******
    // '>=', '<=', '>', '<' are the relational operator.

    if (a > b)
    {
        cout << "The Greatest number is: " << a << endl;
    }
    else if (a < b)
    {
        cout << "The Greatest number is: " << b << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    //******** Logical operators *******
    // and(&&), or(||), not(!) are the logical operators.

    if (a >= b && a % b == 0)  //'==' is equality operator
    {
        cout << b << " is the factor of " << a << endl;
    }
    else {
        cout << b << " is not the factor of " << a << endl;
    }

    return 0;
}