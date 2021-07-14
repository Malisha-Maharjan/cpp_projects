#include <iostream>
#include <string>
#include <map>

using namespace std;

class Student
{
    protected: 
    string name;
    string roll_no;

    public:
    friend istream& operator >>(istream& is, Student& s);
    
    virtual void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Roll no: " << this->roll_no << endl << endl;
    }
};

istream& operator >>(istream& is, Student& s)
{
    cout << "Name: ";
    getline(is, s.name);

    cout << "Roll no: ";
    getline(is, s.roll_no);

    return is;
}

class Test: public Student 
{   
    protected:
    double math;
    double english;

    public:
    friend istream& operator >>(istream& is, Test& t);

    virtual void display()
    {
        Student::display();

        cout << "Marks obtained:" << endl;
        cout << "Maths: " << this->math << endl;
        cout << "English: " << this->english << endl;
    }
};

istream& operator >>(istream& is, Test& t)
{
    is >> (Student&)t;

    cout << "Enter the marks obtained:" << endl;

    cout << "Math: ";
    is >> t.math;

    cout << "English: ";
    is >> t.english;
    is.ignore();
    
    return is;
}

class Sport
{
    private:
    char score;
    
    public:
    friend istream& operator >>(istream& is, Sport& s);

    virtual void display()
    {
        cout << "Score in sport: " << this->score << endl;
    }
};


istream& operator >>(istream& is, Sport& s)
{   
    cout << "Score obtained: ";
    is >> s.score;

    return is;
}

class Result: public Test, public Sport
{
    private:
    double total;

    public:

    friend istream& operator >>(istream& is, Result& r);

    void display()
    {
        Test::display();
        Sport::display();

        cout << "Total Marks obtained: " << this->math + this->english << endl;
    }

};

istream& operator >>(istream& is, Result& r)
{
    is >> (Test&)r;
    is >> (Sport&)r;

    return is;
}

int main()
{
    Result result;
    cin >> result;
    cout << endl;
    result.display();

    return 0;
}