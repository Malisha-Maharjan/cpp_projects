#include <iostream>

using namespace std;

class room{

    public://'public' is access specifier that used to define if the member of the class can be accessed outside it or not.
        double length; //here these attributes can be accessed globally.
        double height;
        double breadth;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }

};

int main()
{
    //object created
    room room1;

    room1.length =2.4;
    room1.breadth = 3.5;
    room1.height = 4;

    cout << "The area is " << room1.calculateArea() << endl;
    cout << "The volume is " << room1.calculateVolume() << endl;

    return 0;
}