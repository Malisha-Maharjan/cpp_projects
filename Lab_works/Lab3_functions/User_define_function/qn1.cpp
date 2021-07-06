#include <iostream>

using namespace std;

float area(float length, float breadth)
{
    float ans;
    ans = (1 / 2.0) * length * breadth;
    return ans;
}

int main()
{
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    float ans;
    
    ans = area(length, breadth);
    cout << "The area is " << ans << endl;

    return 0;
}