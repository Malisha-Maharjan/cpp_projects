#include <iostream>
#include <string>
#include <map>

using namespace std;

class Staff
{
    private:
    string code;
    string name;

    public:
    string get_code() { return code; }
    
    virtual void display() {
        cout << "Name: " << name << endl; 
    }

    friend istream& operator >>(istream& is, Staff& s);
};

istream& operator >>(istream& is, Staff& s)
{
    cout << "Code: ";
    getline(is, s.code);

    cout << "Name: ";
    getline(is, s.name);

    return is;
}


class Teacher: public Staff
{
    private:
    string subject;
    string publication;

    public:

    virtual void display() {
        Staff::display();
        
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl; 
    }

    friend istream& operator >>(istream& is, Teacher& t);
};

istream& operator >>(istream& is, Teacher& t)
{
    is >> (Staff&)t;

    cout << "Subject: ";
    getline(is, t.subject);

    cout << "Publication: ";
    getline(is, t.publication);

    return is;
}


class Typist: public Staff
{
    private:
    int speed;

    public:

    virtual void display()
    {
        Staff::display();
        cout << "Speed: " << speed <<  endl;
    }

    friend istream& operator >>(istream& is, Typist& t);
};

istream& operator >>(istream& is, Typist& t)
{
    is >> (Staff&)t;

    cout << "Speed: ";
    is >> t.speed;
    is.ignore();

    return is;
}


class Officer: public Staff
{
    private:
    string grade;

    public:

    virtual void display() {
        Staff::display();
        cout << "Grade: " << grade <<endl;
    }

    friend istream& operator >>(istream& is, Officer& o);
};

istream& operator >>(istream& is, Officer& o)
{
    is >> (Staff&)o;

    cout << "Grade: ";
    getline(is, o.grade);

    return is;
}

class Regular: public Typist
{

};

class Casual: public Typist
{
    private:
    double daily;
    double wages;

    public:

    virtual void display() {
        Typist::display();
        cout << "Daily: " << daily << endl;
        cout << "Wages: " << wages << endl;
    }

    friend istream& operator >>(istream& is, Casual& c);
};

istream& operator >>(istream& is, Casual& c)
{
    is >> (Typist&)c;

    cout << "Daily: ";
    is >> c.daily;
    is.ignore();

    cout << "Wages: ";
    is >> c.wages;
    is.ignore();

    return is;
}

int main()
{
    map<string, Staff*> db;
    int choice;

    do {
        cout << "1. Insert teacher" << endl;
        cout << "2. Insert regular typist" << endl;
        cout << "3. Insert casual typist" << endl;
        cout << "4. Insert officer" << endl;
        cout << "5. Print staff data" << endl;
        cout << "6. Exit" << endl << endl;

        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1: {
                Teacher* teacher = new Teacher();
                cin >> *teacher;
                db.insert(make_pair(teacher->get_code(), teacher));
                break;
            }

            case 2: {
                Regular* regular = new Regular();
                cin >> *regular;
                db.insert(make_pair(regular->get_code(), regular));
                break;
            }
            
            case 3: {
                Casual* casual = new Casual();
                cin >> *casual;
                db.insert(make_pair(casual->get_code(), casual));
                break;
            }
            
            case 4: {
                Officer* officer = new Officer();
                cin >> *officer;
                db.insert(make_pair(officer->get_code(), officer));
                break;
            }

            case 5: {
                string code;
                cout << "Code: ";
                cin >> code;
            
                (*db[code]).display();
                break;
            }

            case 6:
                break;
            
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        cout << endl << endl;
    } while(choice != 6);

    return 0;
}