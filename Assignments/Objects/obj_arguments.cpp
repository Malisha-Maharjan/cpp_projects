#include <iostream>

using namespace std;

class Student
{
    public:
        double marks;
    
    //constructor to initialize marks
    Student(double m)
    {
        marks = m;
    }
};

//function that takes objects as arguments.

void calculateAverage(Student s1, Student s2)
{
    double average = s1.marks + s2.marks;

    cout << "Average marks: " << average << endl;
}

int main()
{
    Student s1(334), s2(444);

    //To pass object as an arguments

    calculateAverage(s1, s2);

    return 0;
}