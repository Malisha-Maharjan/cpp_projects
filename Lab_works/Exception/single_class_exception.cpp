#include <iostream>

using namespace std;

class demo //empty class == exception class.
{

};

int main()
{
    try
    {
        throw demo(); //demo() is nameclass object of type class
    }
    catch(demo d)
    {
        cout << "Caught exception of demo class" << endl;
    }
    
    return 0;
}

/**
 * In the progra, we have declared an empty class.
 * In the try block we are throwing an object of demo class type.
 * The catch blocl catches the object and display. 
*/