#include <iostream>

using namespace std;

class Parent
{
    public:
    void print()
    {
        cout << "This is the parent class." << endl;
    }
};

class Child: public Parent
{
    public:
    void print()
    {
        cout << "This is the child class." << endl;
    }
};

int main()
{
    Child c;
    c.print(); //yesle child class lai call garxa.
    c.Parent:: print(); //yesle chai parent class lai call garxa.
}
