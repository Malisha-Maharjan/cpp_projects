//overloaded function takes two parameter

#include <iostream>

using namespace std;

class Distance
{
    private:
    int feet, inch;

    public:
    //parameterized
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    //overloadind +operator to perform addition
    Distance(int feet, int inch)
    {
        this->feet = feet;
        this-> inch = inch;
    }

    Distance operator +(Distance& d2)
    {
        Distance d3;

        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;

        return d3;
    }

    void result()
    {
        cout << feet << "'" << inch << endl;
    }
};

int main()
{
    Distance d1 = Distance(40, 10);
    Distance d2 = Distance(50,20);

    Distance d3 = d1 + d2;

    d3.result();
}