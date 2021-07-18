#include <iostream>

using namespace std;

class Shape
{
    protected:

    int width;
    int height;

    public:

    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }

    virtual void area()
    {
        cout << "Parent class area" << endl;
    }
};

class Rectangle : public Shape
{
    public: 

    Rectangle(int a, int b)
    {
        width = a;
        height = b;
    }

    void area()
    {
        cout << "Area of rectangle" << width * height << endl;
    }
};

class Triangle : public Shape 
{
    public:

    Triangle(int a, int b)
    {
        width = a;
        height = b;
    }

    void area()
    {
        cout << "Area of thr triangle" << (width * height) / 2 << endl;
    }
};

int main()
{
    Shape *shape;
    Rectangle rectangle(1, 2);
    Triangle triangle(1, 2);

    shape = &rectangle;
    shape->area();

    shape = &triangle;
    shape->area();

    return 0;
}