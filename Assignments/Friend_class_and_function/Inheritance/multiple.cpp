#include <iostream>

using namespace std;

class Genre
{
    protected:
        char g[50];
    
    public:
    Genre()
    {
        cout << "Genre: ";
        cin.getline(g, 50);
    }
    
    // void displayGenre()
    // {
    //     cout << "Genre: " << g << endl;
    // }

    ~Genre()
    {
        cout << "Genre: " << g << endl;
    }
};

class Writter
{
    protected:
        char name[30];

    public:
    Writter()
    {
        cout << "Name of the Writter: ";
        cin.getline(name,30);
    }

    // void displayWritter()
    // {
    //     cout << "Written by: " << name << endl;
    // }

    ~Writter()
    {
        cout << "Written by: " << name << endl;
    }
};

class Book: public Genre, public Writter
{
    protected:
        char book_name[50];

    public:
    Book()
    {
        cout << "Name of the Book: ";
        cin.getline(book_name, 50);
    }

    void displayBook()
    {
        cout << "Name of the book: " << book_name << endl;
    }

};

int main()
{
    Book book1;
    book1.displayBook();
    // book1.displayGenre();
    // book1.displayWritter();

}