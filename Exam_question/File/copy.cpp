#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main() {
    char c;
    ifstream toRead;
    ofstream toWrite;
    char sourcefile[50], destinationfile[50];

    cout << "Enter the source file: ";
    cin.getline(sourcefile, 50);

    toRead.open(sourcefile);

    if(!toRead) {
        cout << "Error to open source file." << endl;
        exit(1);
    }

    // cout << "Enter the destination file: ";
    // cin.getline(destinationfile, 50);
    // exit(1);


    toWrite.open("destination.dat", ios::out);

    if(!toWrite) {
        cout << "Error to open destination file";
    }

    while(!toRead.eof()) {
        toRead.get(c);
        c = toupper(c);

        toWrite << c;
    }

    toRead.close();
    toWrite.close();

    return 0;
}