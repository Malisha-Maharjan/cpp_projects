#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char *filename = "client";

struct client {
    int client_ID;
    char account_ID[20];
    char name[50];
    char address[50];
    int age;
      
    client() {};

    client(int client_ID, const char* account_ID, const char* name, const char* address, float age) {
        this->client_ID = client_ID;
        strcpy(this->account_ID, account_ID);
        strcpy(this->name, name);
        strcpy(this->address, address);
        this->age = age;
    }
};

int main() {
    remove(filename);
    client c1(1, "0987", "Malisha", "Khusibu", 20);
    client c2(2, "033987", "Manika", "Khusibu", 40);
    ofstream out(filename, ios::binary|ios::app|ios::out);
    out.write(reinterpret_cast<char*>(&c1), sizeof(client));
    out.write(reinterpret_cast<char*>(&c2), sizeof(client));
    out.close();

    int client_ID = 2;
    ifstream in(filename, ios::binary);
    client c;
    while(in.read(reinterpret_cast<char*>(&c), sizeof(client))) {
        if (c.client_ID == client_ID) {
            cout << "ID: " << c.client_ID << endl;
            cout << "Account ID: " << c.account_ID << endl;
            cout << "Name: " << c.name << endl;
            cout << "Address: " << c.address << endl;
            cout << "Age: " << c.age << endl;
        }
    }
    in.close();

    ifstream file(filename, ios::ate|ios::binary);
    cout << "Total clients: " << file.tellg() / sizeof(client) << endl;   
    file.close();
}