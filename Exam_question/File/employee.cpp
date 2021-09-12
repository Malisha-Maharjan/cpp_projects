#include <iostream>
#include <fstream>

const char *filename = "employee";
const int SIZE = 2;

using namespace std;

struct employee {
    char name [50];
    double salary;
    char address[50];
};

int main() {
    remove(filename);
    employee e;

    ofstream out(filename, ios::binary);
    for (int i = 0; i < SIZE; i++) {
        cout << "Name: ";
        cin.getline(e.name, 50);

        cout << "Salary: ";
        cin >> e.salary;
        cin.ignore();

        cout << "Address: ";
        cin.getline(e.address, 50);

        out.write(reinterpret_cast<char*>(&e), sizeof(employee));
    }
    out.close();

    ifstream in(filename, ios::binary);

    employee e1;
    while(in.read(reinterpret_cast<char*>(&e1), sizeof(employee))) {
        cout << "Name: " << e1.name << endl;
        cout << "Salary: " << e1.salary << endl;
        cout << "Address: " << e1.address << endl;
    }
    in.close();
}