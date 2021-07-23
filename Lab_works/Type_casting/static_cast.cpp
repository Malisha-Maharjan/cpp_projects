#include <iostream>

using namespace std;

int main()
{
    int i;
    float f = 1.4444;
    i = f;

    cout << "Value of float: " << f << endl;
    cout << "Value of converted integer: " << i << endl;

    i = static_cast<int>(f);   //converting float type data type into integer(type casting.)
    cout << "value of i: " << i << endl;
}