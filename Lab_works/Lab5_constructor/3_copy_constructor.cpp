// The copy constructor in C++ is used to copy data of one object to another.

#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;
    double height;

   public:

    // parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;//len ko value length ma khanako
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj) {
        // initialize private variables
        length = obj.length;//object ko through bata ava class ko data access garxa
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // print area of wall1
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;

    // copy contents of wall1 to another object wall2
    Wall wall2 = wall1;//wall1 as object pass hunxa mathi-- 10.5 ra 8.6 wall2 ma copy hunxa

    // print area of wall2
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}