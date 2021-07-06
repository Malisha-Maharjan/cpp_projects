#include <iostream>

using namespace std;

class HelloWorld
{
    public:
        HelloWorld() //constructor: it is called when object is made.
        {
            cout << "constructor is called" << endl;
        }

        ~HelloWorld() //destructor: it is called at the end of the program.
        {
            cout << "Destructor is called" << endl;
        }

        void display()
        {
            cout << "Hello WOrld!" << endl;
        }        
};

int main()
{
    HelloWorld obj;
    obj.display();

    return 0;
}