#include <iostream>

using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout << "Base: " << endl;
    }
};

class Derived: public Base
{
    public:
    void print()
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    Base *bptr, base;
    Derived *dptr, derived;

    bptr = &derived;

    dptr = dynamic_cast<Derived *>(bptr);
    dptr -> print();


    return 0;
}

//Dyanamic casting:: Syntax: dynamic_cast<>
//Runtime ma cast hunxa.(polymorphism.)
//It needs at least one virtual function.
//if the case is successfull