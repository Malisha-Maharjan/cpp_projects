#include <iostream>
#include <cmath>

using namespace std;

class Number{
    float num;

    public: 
    class error{};
    float getData()
    {
        cout << "Number: ";
        cin >> num;

        if (num <= 0) {
            throw error();
        }
        else {
            return num;
        }
    }

    float squareRoot()
    {
        try {
            return sqrt(getData());
        }
        catch(error) {
            cout << "INVALID INPUT" << endl; //yesma aba catch garda hamlai input invalid xa vanera thavayo ni
            //yo case ma hamro program ko partial exception lai matrai handle garyo ni.
            //invalid valid xa ki nai wala matrai heryo ni ta arko herena. kina ki yo thau bata hamle getData lai access
            //garna khojeko ni so tyo part ko exception matrai handled vayo ni tesaile feri throw gareko.
            throw;
        }
    }
};

int main() {
    Number number;
    try {
        float answer = number.squareRoot();
        cout << answer << endl;
    }
    catch(Number::error) {
        cout << "SQUARE ROOT OF INVALID INPUT IS NOT POSSIBLE" << endl; //yesma chai square root pani aaudaina vanera thavayo
    }

    return 0;
}