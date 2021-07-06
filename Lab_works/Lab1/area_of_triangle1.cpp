#include <iostream>

 using namespace std;

 int main()
 {
     int height, base;
     float area;

     cout << "Height: ";
     cin >> height;

     cout << "Base: ";
     cin >> base;

     area = (1/2.0) * base * height ;
     cout << area << endl;

     return 0;
 }