#include<iostream>

using namespace std;

class complex
{
    private:
        int real, imaginary;
    
    public:
    void getData()
    {
        cout << "Enter complex number::" << endl;
        cout << "Real: ";
        cin >> real;

        cout << "Imaginary: ";
        cin >> imaginary;
    }

    complex operator +(complex other)
    {
        complex temp;
        
        temp.real = real + other.real;
        temp.imaginary = imaginary + other.imaginary;

        return temp;
    }

    void display()
    {
        cout << "Result: " << real << " + j" << imaginary << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = c1 + c2;

    c3.display();

    return 0;
}