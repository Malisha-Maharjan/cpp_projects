#include <iostream>

using namespace std;

class Vector
{
    private:
        float ax, ay, az;
    public:

    void getData()
    {
        cout << "Enter x component: ";
        cin  >> ax;

        cout << "Enter y component: ";
        cin >> ay;

        cout << "Enter z component: ";
        cin >> az;
    }

    Vector operator +(Vector other)
    {
        Vector temp;

        temp.ax = ax + other.ax;
        temp.ay = ay + other.ay;
        temp.az = az + other.az;

        return temp;
    }

    void displayData()
    {
        cout << "Sum: " <<ax << "ax + " << ay << "ay + " << az << "az" << endl;
    }
};

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