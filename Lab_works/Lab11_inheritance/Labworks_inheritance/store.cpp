#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person
{
    private:
    string code;
    string name;

    public:

    virtual void get_data()
    {
        cout << "Code: ";
        getline(cin, code);

        cout << "Name: ";
        getline(cin, name);
    }

    string get_code()
    {
        return code;
    }
    
    virtual void display()
    {
        cout << "Name: " << name << endl;
    }
    virtual void update_experience(){};
    virtual void update_pay(){};
};

class Account: public virtual Person
{
    private:
    double pay;

    public:

    virtual void get_data()
    {
        Person::get_data();
        cout << "Pay: ";
        cin >> pay;
    }

    virtual void display()
    {
        Person::display();
        cout << "Pay: " << pay << endl;
    }

    virtual void update_pay()
    {
        cout << "Pay: ";
        cin >> this->pay;
    }
};

class Admin: public virtual Person
{
    private:
    double experience;

    public:

    virtual void get_data()
    {
        //Person::get_data();
        cout << "Experience(in years): ";
        cin >> experience;
    }

    virtual void display()
    {
        //Person::display();
        cout << "Experience(in years): " << experience << endl;
    }
    virtual void update_experience()
    {
        cout << "Experience: ";
        cin >> this->experience;
    }
};

class Master: public virtual Account, public virtual Admin
{
    public:

    void get_data()
    {
        Account::get_data();
        Admin::get_data();
    }

    void display()
    {
        Account::display();
        Admin::display();
    }
};

int main()
{   
    //syntax of map: map<key_type, value_type> mapname;

    map<string, Person*> record; //map is the container that stores the group of data.
                                //to retrive data from map we need key.
    int choice;

    do {
        cout << endl;
        cout << "1. Insert new employee" << endl;
        cout << "2. Update old employee data" << endl;
        cout << "3. Display employee information" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1: {
                Master* master = new Master(); //object created.
                master->get_data();
                record.insert(make_pair(master->get_code(), master));//inserting the data into the map
                cout << endl;

                break;
            }

            case 2: {
                int select;
                string code;

                cout << "1. Update employee experience" << endl;
                cout << "2. Update employee pay." << endl;
                cin >> select;

                cout << "Please enter the code to employee to update data: ";
                cin >> code;

                //update the existing data.
                switch (select)
                {
                    case 1:
                    {
                        (*record[code]).update_experience();
                        break;
                    }
                    
                    case 2:
                    {
                        (*record[code]).update_pay();
                        break;
                    }
                }
                break;
            }

            case 3: {
                string code;

                cout << endl;
                cout << "Code: ";
                getline(cin,code);

                (*record[code]).display(); //here record[code] is the address thats why * is used.
                break;
            }

            case 4: {
                return 0;
            }

        } 
    }while(choice != 4);

    return 0;
}