#include <iostream>

using namespace std;

class student
{
    public:
        char name[20];
        int roll;
        char address[20];
        double percentage;

    void getData()
    {
        cout << "Enter your details below" << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Roll No: ";
        cin >> roll;

        cout << "Address: ";
        cin >> address;

        cout << "Percentage: ";
        cin >> percentage;   
    }

    void displayData()
    {
        if (percentage > 40)
        {
            cout << "Congratulations!! Here are your details" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll no: " << roll << endl;
            cout << "Address: " << address << endl;
            cout << "Percentage: " << percentage <<endl;
        }

        else
        {
            cout << "Sorry!! You've failed." << endl;
        }
    }
};

int main()
{
    student s1;
    s1.getData();
    s1.displayData();
    return 0;
}