#include <iostream>

using namespace std;

//if the class name and the method defined inside the class have same name then, it is a constructor.

class construct
{
    public:
        int a,b;

        //default constructor
        construct()
        {
            a = 10;
            b = 20;
        }
};

int main()
{
    //default constructor is automatically called when object is created.
    construct c;

    cout << "a: " << c.a << endl
         << "b: " << c.b << endl;
    
    return 0;
}