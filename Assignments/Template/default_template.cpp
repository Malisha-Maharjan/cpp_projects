#include<iostream>

using namespace std;
  
template<class T = int, class U > class A
{
public:
    T x;
    U y;
};
  
int main()
{
    A<char,char> a;
    A<int, int> c;
    cout << sizeof(a) << endl;
    cout << sizeof(c) << endl;
    return 0;
}