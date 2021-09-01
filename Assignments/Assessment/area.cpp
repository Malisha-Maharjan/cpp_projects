#include <iostream>

using namespace std;

class Polygon {
    protected:
    float length, height;

    public:
    virtual float area() = 0;
    Polygon() {
        length = 0;
        height = 0;
    }
    void getData() {
        cout << "Height: ";
        cin >> height;

        cout << "length: ";
        cin >> length;
    }
};

class Rectangle: public Polygon {
    public:
    float area() {
        return height * length;
    }
};

class Triangle: public Polygon {
    public:
    float area() {
        return 0.5 * height * length;
    }
};

int main() {
    Rectangle rectangle;
    Triangle triangle;

    rectangle.getData();
    triangle.getData();

    float area_rec = rectangle.area();
    float area_tri = triangle.area();
    
    return 0;
}