#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name [20];
    char copy[20];

    cout << "Enter your name: ";
    cin >> name;

    strcpy(copy, name);

    cout << "Name: " << copy << endl;

}