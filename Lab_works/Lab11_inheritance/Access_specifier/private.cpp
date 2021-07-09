//private member function, attributes cannot be access by the 
// object. Those can only be inside the class and friend class and function.

#include <iostream>

using namespace std;

class Circle
{
    private:
        double radius;

    public:
        double compute_area()
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle obj;

    //the 2 line codes below is incorrect as we cannot access the attribute which is declare private.
    //obj.radius = 10;
    //cout << "Radius is: " << obj.radius << endl;
    cout << "Area: " << obj.compute_area();

    return 0;
}