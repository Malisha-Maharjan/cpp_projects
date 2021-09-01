#include<iostream>

using namespace std;

class Time {
    float hour, minute, second;

    public:
    void geData() {
        cout << "Enter hour: ";
        cin >> hour;

        cout << "Enter minute: ";
        cin >> minute;

        cout << "Enter second: ";
        cin >> second;
    }

    void displayData() {
        cout << "Total: " << hour << "hrs " << minute << "min " << second << "sec" << endl; 
    }

    Time sum(Time t1, Time t2) {
        Time result;
        result.hour = t1.hour + t2.hour;
        result.minute = t1.minute + t2.minute;
        result.second = t1.second + t2.second;

        return result;
    } 

};

int main() {
    Time t1, t2, result;

    t1.geData();
    t2.geData();

    result = result.sum(t1, t2);
    result.displayData();

    return 0;
}