//Static data members are stored separately but not as the part of the object but as of the class in general.
//Static data members are declared inside the class but defined outside the class.
//It is the shared memory for all the object.
//Unlike the normal variables, static data member doesnot create the copies of it for storing the values
//data of the diferent objects.
//Instead of creating new stack of memory for new objects static variables rewrite in same memory location.

#include <iostream>

using namespace std;

class First
{
    int a;
    static int b; //declaration of the static variable.

    public:
        First(int x, int y)
        {
            a = x;
            b = y;
        }

        void show()
        {
            cout << "a: " << a << "b: " << b << endl;
        }

        static void display()
        {
            cout << "b: " << b << endl;
        }

};

int First::b;  //defination, defining the static variable.

int main()
{
    First obj1(10,20);
    obj1.show(); //here, output is:: a: 10; b:20
    First obj2(30,40);
    obj2.show(); //here, output is:: a:30; b: 40
    obj1.show(); // here, output is:: a:10 b:40. 
                 // yeta b = 20 wala value print vayena kina ki hamle tyo obj1 create garepaxi feri obj2 
                 // create garera static variable b ko value 40 pathako xa so, tyo agi ko value ma 
                 // rewrite garera obj2 ko value basxa. Hamle obj anusar static variable access garna sakidaina.
    
    return 0;
}