#include <iostream>

using namespace std;

class Base
{
    public:
    Base()
    {
        cout << "Base Class Construtor." << endl;
    }

    virtual ~Base()
    {
        cout << "Base Class Destructor." << endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout << "Derived class constructor." << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor." << endl;
    }

};


int main()
{
    Base* base;

    base = new Derived();

    delete base;
    return 0;
}