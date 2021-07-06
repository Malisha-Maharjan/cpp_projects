#include <iostream>

using namespace std;

class simple_interest
{
    public:
        void getInterest(double principle, double time, double rate = 15) //rate ko value user le input garena vani default mai 15 rakheko.
        {
            double result;
            result = (principle * time * rate) / 100;
            cout << "The interest is " << result << endl;
        }
};

int main()
{
    simple_interest s;
    double p, t, r;
    char ans[10];

    cout << "Principle: ";
    cin >> p;

    cout << "Time: ";
    cin >> t;

    cout << "Do you know the rate of interest? (y/n)  ";
    cin >> ans;

    if (strcmp(ans,"y") == 0)
    {
        cout << "Rate: ";
        cin >> r;
        s.getInterest(p, t, r);
    }

    else
    {
        s.getInterest(p, t);
    }
    return 0;
}