#include <iostream>
#include <math.h>

using namespace std;

class Number {
    private:
        double num;
    
    public:
        class Negative{}; //empty class
        void readnum() {
                cout << "Enter Number: ";
                cin >> num;
            }

        double squareRoot()
        {
            if (num < 0) {
                //exception wala case
                throw Negative(); //Negative() empty class ko object
            }
            else {
                return (sqrt(num));
            }
        }
};

int main() {
    Number num1;
    double result;

    num1.readnum();

    try {
        cout << "Trying to find square root.." << endl;
        result = num1.squareRoot(); //yeta yo function call gareda function bata throw wala aayo vani chai siddai tala catch ma janxa.

        cout << "Square root: " << result << endl;
        cout << "Success...exception is not raised" << endl;
    }

    catch(Number::Negative) {
        cout << "Square root of negative number is not possible" << endl;
    }

    return 0;
}