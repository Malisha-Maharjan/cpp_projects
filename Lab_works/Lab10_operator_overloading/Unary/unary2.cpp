#include <iostream>

using namespace std;

class unary
{
    private:
    int num;

    public:
    void getNum()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    unary operator ++() 
    {
        unary result;
        result.num = ++num;
        return result; //object lai return gareko.
    }

    void display()
    {
        cout << "Result: " << num << endl; 
    }
};

int main()
{
    unary obj1, result;

    obj1.getNum();
    result = ++obj1;
    result.display();
}