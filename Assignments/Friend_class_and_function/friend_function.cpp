#include <iostream>

using namespace std;

class Sample
{
    friend float mean(Sample s);
    private:
        float num1, num2;
    
    public:

    void getData()
    {
        float a, b;

        cout << "Enter any two numbers: ";
        cin >> a;
        cin >> b;

        num1 = a;
        num2 = b;
    }

};

float mean(Sample s)
{
    float sum;
    sum = (s.num1 + s.num2) / 2;

    return sum;
}

int main()
{
    Sample s;
    s.getData();

    cout << "Mean: " << mean(s) << endl;

    return 0;
}