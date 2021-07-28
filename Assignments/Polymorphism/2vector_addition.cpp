#include <iostream>

using namespace std;

class Vector
{
    private:
        float ax, ay, az;
    public:

    friend Vector operator +(Vector a, Vector b);

    void getData()
    {
        cout << "Enter x component: ";
        cin  >> ax;

        cout << "Enter y component: ";
        cin >> ay;

        cout << "Enter z component: ";
        cin >> az;
    }

    void displayData()
    {
        cout << "Sum: " <<ax << "ax + " << ay << "ay + " << az << "az" << endl;
    }
};

Vector operator +(Vector a, Vector b)
{
    Vector temp;

    temp.ax = a.ax + b.ax;
    temp.ay = a.ay + b.ay;
    temp.az = a.az + b.az;

    return temp;
}

int main()
{
    Vector v1;
    v1.getData();

    Vector v2;
    v2.getData();

    Vector sum;
    sum = v1 + v2;

    sum.displayData();

    return 0;
}