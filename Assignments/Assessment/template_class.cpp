#include <iostream>

using namespace std;
const int SIZE = 3;

template <class T>

class Array {
    T arr[SIZE];
    public:

    void getData() {
        for(int i = 0; i < SIZE; i++) {
            cout << "arr[" << i << "]: ";
            cin >> arr[i];
        }
    }
    void sumAndAvg() {
        T sum = 0;
        for(int i = 0; i < SIZE; i++) {
            sum += arr[i];
        }
        cout << "The sum of array is " << sum << endl;
        cout << "The average is " << sum / 2 << endl;

    }
};

int main() {
    Array<int>arr;
    arr.getData();

    arr.sumAndAvg();

}