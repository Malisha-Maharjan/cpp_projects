//Write a program finding area of square, rectangle, triangle. Use function overloading technique

#include <iostream>
#include<math.h>

using namespace std;

class Area
{
    private:
        float a, b, c;
    
    public:
    Area()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    
    float areaOf(float a)
    {
        return a * a;
    }

    float areaOf(float a, float b)
    {
        return a * b;
    }

    float areaOf(float a, float b, float c)
    {
        float s;

        s = (a + b + c) / 2;

        return sqrt(s * (s-a) * (s - b) * (s - c));
    }
};

int main()
{
    Area area;
    float a, b, c;
    int choice;
    
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;

    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            cout << "Length: ";
            cin >> a;
            cout << "Area of square: " << area.areaOf(a) << endl;
            break;
        }

        case 2:
        {
            cout << "Length: ";
            cin >> a;

            cout << "Breadth: ";
            cin >> b;

            cout << "Area of rectangle: " << area.areaOf(a, b) << endl;
            break; 
        }

        case 3:
        {
            cout << "Side a: ";
            cin >> a;

            cout << "Side b: ";
            cin >> b;

            cout << "Side c: ";
            cin >> c;

            cout << "Area of triangle: " << area.areaOf(a, b, c) << endl;
            break;
        }
    }    
}