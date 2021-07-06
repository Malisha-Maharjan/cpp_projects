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
     student s;

     cout << "Enter the detail of a student." << endl; 

     cout << "Name: ";
     cin >> s.name;

     cout << "Roll number: ";
     cin >> s.roll_number;

     cout << "Address: ";
     cin >> s.address;

     cout << "The detail of a student." << endl; 
     cout << "Name: " << s.name << endl;
     cout << "Roll number: " << s.roll_number << endl;
     cout << "Address: " << s.address << endl;
     return 0;
 } 