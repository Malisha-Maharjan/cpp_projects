//The protected member of the class is accessible by the child class.
//It is similar to the private.
#include <iostream>

using namespace std;

class Parent
{
    protected:
    int id_protected;
};

class Child: public Parent
{
    public:
    void setId(int id)
    {
        id_protected = id;
    }

    void displayId()
    {
        cout << "Id protected is:" << id_protected << endl;
    }
};

int main()
{
    Child obj1;
    obj1.setId(22);
    obj1.displayId();
    return 0;
}