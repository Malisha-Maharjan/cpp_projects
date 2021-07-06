#include <iostream>

using namespace std;

class room{

    private://'private' is access specifier that used to define if the member of the class can be accessed outside it or not.
        double length; //here these attributes can be accessed locally.
        double height;
        double breadth;

    public: // The attriutes and the member of the class can be accessed globally.

    void setArea(double l , double h, double b)
    {
        length = l;
        height = h;
        breadth = b;
    }

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

    room1.setArea(2,4,5);
    cout << "The area is " << room1.calculateArea() << endl;
    cout << "The volume is " << room1.calculateVolume() << endl;

    return 0;
}