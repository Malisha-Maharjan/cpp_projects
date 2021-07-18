#include <iostream>

using namespace std;

class Animal
{
    public:

    Animal()
    {
        cout << "Hi!! i am constructor::your abstract class constructor" << endl;
    }

    virtual void sound() = 0;

    void display()
    {
        cout << "Hi i am an animal." << endl;
    }
    
};

class Dog : public Animal
{
    public:
    void sound()
    {
        cout << "BARK ... BARK ..." << endl;
    }
};

int main()
{
    Animal *a;
    Dog b;
    b.sound();
    a->display();
    return 0;
}

//hamle abstract class ko constructor banauna milxa.
//abstract class lai hamle tala derived class ma inherite gareko xa.
//tesaile hamle derived class ko object baunda kheri nai abstract class ko constructor invoke hunxa.