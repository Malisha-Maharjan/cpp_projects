#include <iostream>

using namespace std;

template <class T1, class T2>
void display(T1 n1, T2 n2)
{
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
}

int main()
{
    display(22.2, 2); //equivalent to display<float, int>(float, int)

    display("a", 2.2);
}