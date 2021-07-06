#include <iostream>

using namespace std;

class first
{
    friend class second; //yeta arko class yo class ko members haru lai access garna pauxa tara yo class le chai paudaina
    private:
    int num1;

    public:

    first()
    {
        int a;

        cout << "num1: ";
        cin >> a;

        num1 = a;
    }
};

class second
{
    private:
    int num2;

    public:

    second()
    {
        int a;

        cout << "num2: ";
        cin >> a;

        num2 = a;
    }

    int sum(first obj1) //yeta sum garna lai arko class ko num lai liyera sum gareko xa.
    {
        return num2 + obj1.num1;
    }
};

int main()
{
    first obj1;
    second obj2;
    cout << "Sum: " << obj2.sum(obj1) << endl; //object is passes as arguments.

    return 0;
}