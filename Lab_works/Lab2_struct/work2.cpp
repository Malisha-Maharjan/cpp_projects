#include <iostream>

using namespace std;

struct student 
{
    char name[20];
    int roll_number;
    char address[20];
};

int main()
{
    student s[3];

    cout << "Enter the details of 3 student." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> s[i].name;

        cout << "Roll number: ";
        cin >> s[i].roll_number;

        cout << "Address: ";
        cin >> s[i].address;
    }

    cout << endl;
    cout << "The details of 3 student are:" << endl;

    for (int i = 0; i < 3; i++)
    {
        
        cout << "Name: " << s[i].name << endl;
        cout << "Roll number: " << s[i].roll_number << endl;
        cout << "Address" << s[i].address << endl;
    }

    return 0;
}