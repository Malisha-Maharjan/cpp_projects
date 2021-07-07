//overloaded function takes one parameter

#include <iostream>

using namespace std;

class Distance
{
    private:
    int feet, inch;

    public:

    Distance() //constructor.
    {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    friend Distance operator +(Distance& d1, Distance& d2); //friend function.

    void display()
    {
        cout << feet << "'" << inch << endl;
    }

};

Distance operator +(Distance& d1, Distance& d2)
{
    Distance temp;

    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;

    return temp;
}

int main()
{
    Distance d1 = Distance(10, 2);
    Distance d2 = Distance(20,4);

    Distance d3 = d1 + d2;

    d3.display();

    return 0;
}