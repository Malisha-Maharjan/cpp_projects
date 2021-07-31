#include<iostream>

using namespace std;

int main()
{
    int x = 10;

    cout << "Before try" << endl;
    try 
    {
        cout << "Inside try" << endl;
        if(x < 0)
        {
            throw x;
            cout << "After throw" << endl;
        }
    }
    catch(int x)
    {
        cout << "Exception Caught. Int type" << endl;
    }

    catch(float x)
    {
        cout << "Expection Caight. Float type" << endl;
    }

    cout << "After catch" << endl;

    return 0;
}