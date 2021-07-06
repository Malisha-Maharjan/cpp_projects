#include <iostream>
 #include <math.h>

 using namespace std;

 int main()
 {
     int a, b, c;
     float s, area;

     cout << "Enter sides: ";
     cin >> a >> b >> c;

     s = (a + b + c) / 2.0;
     area = sqrt((s * (s - a) * (s - b)* (s - c)));

     cout << "Area:  " << area << endl;

     return 0; 
 }