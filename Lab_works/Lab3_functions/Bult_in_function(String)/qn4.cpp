#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name1[20];
    char name2[20];

    cout << "Enter name1: ";
    cin >> name1;

    cout << "Enter name2: ";
    cin >> name2;

    if(strcmp(name1, name2) <= 0)
    {
        cout << "1. " << name1 << endl;
        cout << "2. " << name2 << endl;
    }
    else
    {
        cout << "1. " << name2 << endl;
        cout << "2. " << name1 << endl;
    }
    
    return 0;
}