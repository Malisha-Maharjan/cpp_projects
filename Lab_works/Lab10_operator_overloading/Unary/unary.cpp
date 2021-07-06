#include <iostream>

using namespace std;

class unary
{
    int a, b, c;

    public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    //return type operator op() yeta op vaneko jun vayeni operator ko symbol lekhni
    //unary operator ma single operand hunxa. "a++" ma a vaneko operand "++" vaneko operator;

    void operator -()
    {
        a = -a;
        b = -b;
        c = -c;
    }

    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main()
{
    unary u;

    u.getdata(-1, 2, -3);
    u.display();

    -u; //calling unary operator.
    u.display();
    
    return 0;
}