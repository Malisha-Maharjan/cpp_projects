#include <iostream>

using namespace std;

//template function
template <class T>
T Large(T n1, T n2)
{
    return (n1 > n2) ? n1: n2;
}

int main()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;

    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << Large(i1, i2) << " is larger." <<endl;

    cout << "Enter two floating-point numbers: ";
    cin >> f1 >> f2;
    cout << Large(f1, f2) << " is larger." <<endl;

    cout << "Enter two characters: ";
    cin >> c1 >> c2;
    cout << Large(c1, c2) << " is larger." <<endl;

    return 0;
}

//yo template le chai jun sukai data type vayeni if functions haru le
//eutai kaam garni ho vani single function lai define garna dinxa.
