#include <iostream>

using namespace std;

int main()
{
    int number,sum = 0;
    int i = 1;
    cout << "Enter a number: ";
    cin >> number;

    while(i <= number)
    {
        sum += i;
        i++;
    }

    cout << "The sum of " << number << " natural numbers is " << sum << endl;
    return 0;
}