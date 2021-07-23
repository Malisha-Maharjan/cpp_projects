//overloading template using normal function.
#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T find_max(T a, T b)
{
    if(a > b)
    {
        return a;
    }

    else return b;
}

char *find_max(char* a, char* b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }

    else return b;
}

int main()
{
    int i1 = 1, i2 = 5;
    cout << "Greater is: " << find_max(i1, i2) << endl;

    char str1[] = "apple", str2[] = "orange";
    cout << "Greater is: " << find_max(str1, str2) << endl;

    return 0;
}

//yesma chai str char type ko dekhna bitikai compiler le aba
//template wala function call garni ki normal wala function call
//garni vanera tha hunxa. ani aba teii euta function ko name bata
// ra tesko parameter ko type bata func overloading vayo.