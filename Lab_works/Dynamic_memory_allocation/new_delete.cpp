#include <iostream>

using namespace std;

int main()
{
    //declaring pointer variables
    int* pointInt;
    float* pointFloat;

    //Dynamically allocating memoery
    pointInt = new int;
    pointFloat = new float;

    cout << "address assigned to pointInt is " << pointInt << endl;
    cout << "address assigned to pointFloat is " << pointFloat << endl;

    //Assigning value
    *pointFloat = 22.22;
    *pointInt = 1;

    cout << "value assigned to pointInt is " << *pointInt << endl;
    cout << "value assigned to pointFloat is " << *pointFloat << endl;

    delete pointInt;
    delete pointFloat;
}