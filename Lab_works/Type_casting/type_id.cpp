#include <iostream>
#include <typeinfo>

using namespace std;

class Animal
{
    public:
    virtual void display()
    {

    }
};

class Cow: public Animal
{

};

class Dog : public Animal
{

};

int main()
{
    int mark, roll;
    float avg;
    char *str;
    Animal *animal;

    Cow cow;
    Dog dog;

    cout << "Type of mark: " << typeid(mark).name() << endl;
    cout << "Type of roll: " << typeid(roll).name() << endl;
    cout << "Type of avg: " << typeid(avg).name() << endl;
    
    cout << "Type of *str: " << typeid(*str).name() << endl;
    cout << "Type of str: " << typeid(str).name() << endl;
    
    cout << "Type of animal: " << typeid(animal).name() << endl;
    cout << "Type of cow: " << typeid(cow).name() << endl;
    cout << "Type of dog: " << typeid(dog).name() << endl;

    cout << "***********************************************" << endl;

    animal = &cow;
    cout << "Type of *animal when pointing to cow: " << typeid(*animal).name() << endl;

    animal = &dog;
    cout << "Type of *animal when pointing to dog: " << typeid(*animal).name() << endl;
    
    return 0;
}