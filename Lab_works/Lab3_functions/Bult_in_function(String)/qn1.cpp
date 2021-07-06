#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name [20];

    cout << "Enter your name: ";
    cin >> name;

    int len;
    len = strlen(name);

    cout << "length: " << len << endl;

    return 0;
}