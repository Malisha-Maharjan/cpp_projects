#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    char data[100];

    //open a file in write mode.
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file";
    cout << "Enter your name: ";
    cin.getline(data, 100);

    //write inputted data into the file.
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    outfile << data << endl;

    cin.ignore();

    outfile.close();

    ifstream infile;
    infile.open("afile.dat");
    
    cout << "Reading from the file" << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();
    return 0;
}