#include<iostream>
#include<fstream>

using namespace std;

int main() {
    //creating a file
    fstream file;

    //opening file in out(write) mode

    file.open("createfile.txt", ios::out);

    if(!file)
    {
        cout << "file is not created";
    }

    cout << "file is created";

    file.close();

}