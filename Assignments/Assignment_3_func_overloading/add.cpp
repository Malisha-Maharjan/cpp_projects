#include <iostream>

using namespace std;

void add(int num1, int num2);
void add(int num1, double num3, double num4);
void add(int num2, double num4);

int main()
{
    add(5, 6);
    add(1, 2.5, 2.5);
    add(1, 4.5);
    
    return 0;
}

void add(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

void add(int num1, double num3, double num4)
{
    cout << num1 + num3 + num4 << endl;
}

void add(int num2, double num4)
{
    cout << num2 + num4 << endl;
}