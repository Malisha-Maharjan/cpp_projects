#include <iostream>

using namespace std;

class Base
{
    int x;

    public:

    virtual void fun() = 0;

    int getX()
    {
        return x;
    }
};

class Derived: public Base
{
    int y;

    public:
    void fun()
    {
        cout << "Derived fun called." << endl;
    }
};

int main()
{
    // Base b;
    // b.fun(); pure virtual function banako wala class ko object banauna mildaina.
    //pure virtual function body empty hunxa because implementation body nai thahudaina.
    //hamle k kaam garni vanera base class wala function ma thahudaina tesaile pure abstract function banako.

    Derived d;
    d.fun();
    return 0;
}