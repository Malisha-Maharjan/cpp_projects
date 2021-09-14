#include <iostream>
#include <fstream>
#include <cstring>
const char* filename = "book";

using namespace std;

struct Book {
    char bookname[30];
    int book_ID;
    int number_of_books;
    char purchase_date[20];
};

void writeInfo() {
    ofstream out(filename, ios::binary|ios::app);
    Book b;
    cout << "Book Name: ";
    cin.getline(b.bookname, 30);

    cout << "Book Id: ";
    cin >> b.book_ID;;

    cout << "Number of books: ";
    cin >> b.number_of_books;
    cin.ignore();

    cout << "Purchase Date: ";
    cin.getline(b.purchase_date, 20);

    out.write(reinterpret_cast<char*>(&b), sizeof(b));
    out.close();
}

void retrieveInfo() {
    ifstream in(filename, ios::binary);
    Book data;
    int choice;
    cin >> choice; 
    while(in.read(reinterpret_cast<char*>(&data), sizeof(data))) {
        if (choice == data.book_ID) {
            cout << "Hi";
            cout << "Book Name: " << data.bookname << endl;
            cout << "Book Id: " << data.book_ID << endl;
            cout << "Number of Books: " << data.number_of_books << endl;
            cout << "Purchase Date: " << data.purchase_date << endl;
        }
    }
    in.close();
}

int main() {
    int choice;
    do {
        cout << "1. Store Info" << endl;
        cout << "2. Retrive DaTa" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                writeInfo();
                break;
            case 2:
                retrieveInfo();
                break;

            case 3:
                exit(1);
            
            default :
                cout << "error" << endl;
                break;
        }
    }while(1);
}