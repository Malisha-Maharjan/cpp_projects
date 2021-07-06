#include <iostream>

using namespace std;

void functionFirst(int a)
{
    cout << "Value of a before altering is " << a << endl;

    a = 5;
    cout << "Value of a after altering is " << a << endl;
}

void functionReference(int &b)
{
    b = 20;

    cout << "Value of b is " << b << endl; 
}

int main()
{
    int a = 1;
    int b = 2;

    functionFirst(a);
    functionReference(b);

    cout << "Value of a in main " << a << endl;
    cout << "Value of b in main " << b << endl;

    return 0;
}