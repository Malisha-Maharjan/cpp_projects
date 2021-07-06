#include<iostream>

using namespace std;

class box
{
    private:
        double lenght, breadth, height;

    public:

    box(double len, double hgt, double brdth)
    {
        cout << "Constructor is called" << endl;

        lenght = len;
        height = hgt;
        breadth = brdth;
    }

    double volume()
    {
        return lenght * breadth * height;
    }

};

int main()
{
    box box1(1.3, 20, 9);
    box box2(5.0, 4, 8);
    box *prtbox;
    cout << "address of box1 is " << &box1 << endl; //Here, the address of the box1 is printed.

    //pointer is that type of variable that is used carry the address of other variables. 

    prtbox = &box1; //yesma pointer variable ma box1 variable ko address store gareko. 
    //Address bata chai pointer variable le tyo address ma vako value lai point garxa

    //member access operator of pointer = "->".

    cout << "Volume of box1: " << prtbox -> volume() << endl;

    prtbox = &box2;

    cout << "Volume if box2: " << prtbox ->volume() << endl; 

    return 0;
}