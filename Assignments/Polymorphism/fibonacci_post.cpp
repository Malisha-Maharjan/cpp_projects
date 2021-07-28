//Wap to print fiboncci series using post increament.

#include <iostream>

using namespace std;

class Fibonacci
{
    private:
    int num1, num2;

    public:

    Fibonacci()
    {
        num1 = 0;
        num2 = 1;
    }

    Fibonacci operator ++(int) //this int parameter is the dummy parameter. 
    {
        int temp;
        cout << num1 << "   ";
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
    }
};

int main()
{
    int n;
    cout << "Enter the the nth term position: ";
    cin >> n;
    Fibonacci series;

    for (int i = 0; i < n; i++)
    {
        series++;
    }
    return 0;
}

//To overload post increament parameter there should be int type dummy parameter.
//This dummy parameter is only to distinguish the post and pre increament.