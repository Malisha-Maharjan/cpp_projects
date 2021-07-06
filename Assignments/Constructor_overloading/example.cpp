#include <iostream>

using namespace std;

class overloading
{
    public:
        double sum;
        //Here, overloading is the overloading constructor.
        overloading(int a, int b, int c)
        {
            sum = a + b + c;
        }

        overloading(int a, double b, double c)
        {
            sum = a + b + c;
        }

        double getSum()
        {
            return sum;
        }
};

int main()
{
    overloading o1(2, 3, 4);        //Creating object and this calls the constructor that takes integers as parameter.
    overloading o2(2, 2.5, 3.5);    //Creating object which calls the constructor that takes double and interger data type as parameter.

    cout << "2 + 3 + 4 = " << o1.getSum() << endl;
    cout << "2 + 2.5 + 3.5 = " << o2.getSum() << endl;

    return 0;
}