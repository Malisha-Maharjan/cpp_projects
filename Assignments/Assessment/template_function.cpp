#include<iostream>

using namespace std;

template<class T, class T2>
T sum(T *data, T2 n) {
    T sum = 0;
    for(int i = 0; i < n; i++) {
        sum += data[i];
    }

    return sum;
}

template<class T>
T average(T *data, int n) {
    return sum(data, n) / n; 
}

int main() {

    int data[] = {1, 2,3};
    float data2[] = {1.5, 1.5, 1.5}; 

    cout << "sum: " << sum(data, 3) << endl;
    cout << "sum: " << sum(data2, 3) <<endl;
    cout << "Average: " << average(data, 3) << endl;

    return 0;
}