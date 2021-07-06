#include<iostream>

using namespace std;

class binary
{
    private:
    int num1, num2;

    public:
    binary()
    {
        int num1 = 0,
            num2 = 0;
    }

    binary(int x, int y)
    {
        num1 = x;
        num2 = y;
    }

    binary operator +(binary bin)
    {
        binary temp;

        cout << "Value of temp num1 inside overloading function " << temp.num1 << endl;
        cout << "Value of temp num1 inside overloading function " << temp.num1 << endl;

        cout << "Value of bin num1 inside overloading function " << bin.num1 << endl;
        cout << "Value of bin num1 inside overloading function " << bin.num1 << endl;

        temp.num1 = num1 + bin.num1;
        temp.num2 = num2 + bin.num2;

        return temp;
    }

    void display();

};
 
void binary::display()
{
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
}

int main()
{
    binary b1, b2, b3;
    b1 = binary(10, 20);
    b2 = binary(30, 40);

    b3 = b1 + b2;

    b1.display();

    b2.display();
    
    b3.display();

    return 0;
}