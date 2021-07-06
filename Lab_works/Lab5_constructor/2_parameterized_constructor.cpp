//Parameterized Constructor is the constructor that takes a parameter when the object is created.

#include <iostream>

using namespace std;

class parameter
{
    public:
        int sum, sub;

        parameter(int x, int y)
        {
            sum = x + y;
            sub = x - y;
        }

        int getSum()
        {
            return sum;
        }

        int getSub()
        {
            return sub;
        }
};

int main()
{
    parameter p(20, 10); //creating an objects and parameterized constructed is called.

    cout << "Sum: " << p.getSum() << endl
         << "Sub: " << p.getSub() << endl;
    return 0;
}