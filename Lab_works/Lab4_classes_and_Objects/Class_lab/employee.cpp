#include <iostream>

using namespace std;

class employee
{
    public:
        int member_ID;
        char name[20];
        int salary;

        void input() //getting input from the user
        {
            cout << "Name: ";
            cin >> name;

            cout << "Member ID: ";
            cin >> member_ID;

            cout << "Salary: ";
            cin >> salary;
        }

        void display() //displaying the data
        {
            cout << member_ID << "\t\t" << name << "\t" << salary << "\t" << endl;
        }

};

int main()
{
    int total;
    cout << "Numbers of employee: ";
    cin >> total;  

    employee employe[total]; //creating array of objects.

    for (int i = 0; i < total; i++)
    {
        employe[i].input();
    }

    cout << "Member ID\t" << "Name\t" << "Salary\t" << endl;

    for (int i = 0; i < total; i++)
    {
        employe[i].display();
    }
    return 0;
}