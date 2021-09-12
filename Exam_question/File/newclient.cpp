#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char *filename = "data";

struct client{
    int client_ID;
    char account_ID[20];
    char name[50];
    char address[50];
    float age;
    
    client() {};

    client(int client_ID, const char* account_ID, const char* name, const char* address, float age) {
        this->client_ID = client_ID;
        strcpy(this->account_ID, account_ID);
        strcpy(this->name, name);
        strcpy(this->address, address);
        this->age = age;
    }
};

void store(client *c) {
    ofstream out(filename, ios::binary|ios::app|ios::out);
    out.write(reinterpret_cast<char*>(c), sizeof(client));
    out.close();   
}

client retrieve(int client_ID) {
    client c;
    ifstream in(filename, ios::binary);
    while(in.read(reinterpret_cast<char*>(&c), sizeof(client))) {
        if (c.client_ID == client_ID) {
            in.close();
            return c;
        }
    }
    in.close();
    throw "Client not found.";
}

int main() {
    remove(filename);

    client c1(1, "0987", "Malisha", "Khusibu", 20);
    client c2(2, "033987", "Manika", "Khusibu", 40);
    store(&c1);
    store(&c2);

    try {
        client c = retrieve(2);
        cout << "ID: " << c.client_ID << endl;
        cout << "Account ID: " << c.account_ID << endl;
        cout << "Name: " << c.name << endl;
        cout << "Address: " << c.address << endl;
        cout << "Age: " << c.age << endl;
    }
    catch(const char *error) {
        cout << "Error:" << error << endl;
    }

    ifstream in(filename, ios::ate|ios::binary);
    int file_size = in.tellg();

    cout << "Total clients: " << file_size / sizeof(client) << endl;
}