#include <iostream>

using namespace std;

void area()
{
    float length, breadth, ans;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;
    ans = (1 / 2.0) * length * breadth;
    cout << "Area is " << ans << endl;
}

int main()
{
    area();
    return 0;
}