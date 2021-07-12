#include <iostream>

using namespace std;

class Parent1
{
    public:
    void display()
    {
        cout << "This is parent class." << endl;
    }
};

class Child1: public virtual Parent1
{
    public:
    void display1()
    {
        cout << "This is the chlid one." << endl;
    }
};

class Child2: public virtual Parent1
{
    public:
    void display2()
    {
        cout << "This is the chlid two." << endl;
    }
};

 class Child3: public Child1, public Child2
{
    public:
    void display3()
    {
        cout << "This is the chlid three." << endl;
    }
};

int main()
{
    Child3 obj1;

    obj1.display3();

    return 0;
}