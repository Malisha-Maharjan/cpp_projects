#include <iostream>

using namespace std;

float area();

int main()
{
    float ans;
    ans = area();
    cout << "The area is " << ans << endl;

    return 0;
}

float area()
{
    float length, breadth;
    float ans;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    ans = (1 / 2.0) * length * breadth;

    return ans;
}