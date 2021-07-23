#include <iostream>

using namespace std;

int main()
{
    int i = 100;

    cout << "Address of i: " << &i << endl;

    int *p;

    //i = p; cannot assign int to int*,interger to pointer conversion.
    //syntax: reinterpret_cast<target_type>(expression)
    p = reinterpret_cast<int *>(i); //decimal value into hexadecimal value convert hunxa.

    cout << "Value of p: " << p << endl;

    return 0;
}

//yesma integer lai pointer ma convert garda type casting garda
//integer value lai hexadecimal ma convert gardini raixa.
//hexadecimal le hamro address lai represent garxa.