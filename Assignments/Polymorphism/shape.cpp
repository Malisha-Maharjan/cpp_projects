#include <iostream>

using namespace std;

class Shape {
    protected:
    double length, breadth;

    public:
    void getData(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    virtual void displayArea() = 0;
};

class Triangle : public Shape {
    public:
    void displayArea()
    {
        cout << "Area of triangle: " << 0.5 * (length * breadth) << endl;
    }
};

class Rectangle : public Shape {
    public:
    void displayArea()
    {
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};

int main()
{
    Triangle triangle;
    triangle.getData(3, 4);

    Rectangle rectangle;
    rectangle.getData(2, 4);

    triangle.displayArea();
    rectangle.displayArea();

    return 0;
}