#include <iostream>
using namespace std;

const int SIZE = 4;

class Stack {
    int s[SIZE];
    int count, num;

    public:
    Stack() {
        count = 0;
    }
    class Pop{};
    class Push{};
    void pushNumber() {
        if (count > SIZE - 1) {
            throw Push();
        }
        else {
            cout << "Number" << count + 1 << ": ";
            cin >> num;
            s[count] = num;
            count += 1;
        }
    }

    void popNumber(int index) {
        if (index > SIZE - 1) {
            throw Pop();
        }
        else {
            
            cout << "stack[" << index  << "] = " << s[index] << endl;
        }
    }
};

int main() {
    Stack s;
    
    bool overload = false;
    do {
        try {
            s.pushNumber();
            
        }
        catch(Stack::Push)
        {
            cout << "Stack is full" << endl;
            overload = true;
        }
    } while (overload == false);

    overload = false;
    int position;
    do {
        cout << "The position of number you want to print" << endl;
        cin >> position;
        try {
            s.popNumber(position);
        }
        catch(Stack::Pop)
        {
            cout << "Index Out Of the stack" << endl;
            overload = true;
        }
    } while (overload == false);

    return 0;
}