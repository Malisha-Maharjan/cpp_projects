#include <iostream>

using namespace std;

int main()
{
    int number[5];

    cout << "Enter any five numbers: ";
    int i = 0;
    do
    {
        cin >> number[i];
        i++;
    } while (i < 5);

    cout << "The entered positive number are: " << endl;

    for(i = 0; i < 5; i++)
    {
        if (number[i] > 0)
        {
            cout << number[i] << endl;
        }
    }
    return 0;
}