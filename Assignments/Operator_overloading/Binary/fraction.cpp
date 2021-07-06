#include<iostream>

using namespace std;

class fraction
{
    private:
    int numerator, denominator;

    public:
    fraction()
    {
        int numerator = 0,
            denominator = 0;
    }

    fraction(int numerator, int denominator) //left side wala ko.
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    fraction operator +(fraction other)
    {
        fraction temp;

        temp.denominator = denominator * other.denominator;
        temp.numerator = numerator * other.denominator + other.numerator * denominator;

        return temp;
    }


    fraction operator -(fraction other) //yo other vaneko chai right side wala object wala pathako.
    {
        fraction temp;

        temp.denominator = denominator * other.denominator; 
        temp.numerator = numerator * other.denominator - other.numerator * denominator;
        //yeta yo white wala chai left side wala object ko ho ani arko chai right side wala.

        return temp;
    }

    fraction operator ++()
    {
        *this = *this + fraction(1, 1);
        
        return *this;
    }

    fraction operator ++(int)
    {
        fraction temp = *this;

        *this = *this + fraction(1, 1);
        
        return temp;
    }

    friend ostream& operator <<(ostream& os, const fraction& f);
};

ostream& operator <<(ostream& os, const fraction& f)
{
    os << f.numerator << '/' << f.denominator;
    return os;
}

int main()
{
    fraction b1 = fraction(1, 5);
    fraction b2 = fraction(1, 3);

    fraction b3 = b1 + b2; 
    fraction b4 = b2 - b1;
    
    cout << b3 << endl;
    cout << b4 << endl;

    fraction b5 = b4++;
    cout << b4 << endl;
    cout << b5 << endl;

    return 0;
}