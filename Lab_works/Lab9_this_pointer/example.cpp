//This pointer carries the address of the object.
//'This' is the pointer that points the object with which the member function is associated.

#include <iostream>

using namespace std;

class mobile
{
    int m = 10;
    public:

    void display()
    {
        cout << "value of m: " << m << endl;
        cout << "this-> m: " << this->m << endl;
    }
};

int main()
{
    mobile m1, m2;

    m1.display();
    m2.display();

    return 0;
}
