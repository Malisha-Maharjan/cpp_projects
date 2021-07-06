#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name [20];
    char surname[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your surnname: ";
    cin >> surname;

    cout << "Full name: " << strcat(name, surname) << endl;
    return 0;
}

