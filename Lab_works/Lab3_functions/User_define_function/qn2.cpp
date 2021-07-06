#include <iostream>

using namespace std;

void area(float length, float breadth); //with arguments

int main()
{
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area(length, breadth);

    return 0;
}

void area(float length, float breadth)
{
    float ans;
    ans = (1 / 2.0) * length * breadth;
    cout << "Area is " << ans << endl;
}