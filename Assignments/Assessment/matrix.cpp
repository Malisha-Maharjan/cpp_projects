#include<iostream>

using namespace std;
const int ROW = 3;
const int COLUMN = 3;
const int SIZE = 3;

class Matrix {
    int arr[ROW][COLUMN], result[ROW][COLUMN];

    public:
    void getData() {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cout << "Enter arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }

    Matrix operator * (Matrix other) {
        Matrix multiply;
       
        for (int i = 0; i < SIZE; i++)
        {
            for(int j = 0; j < SIZE; j++)
            {
                int sum  = 0;
                //result[i][j] = 0;
                for (int k = 0; k < SIZE; k++)
                {
                    sum += arr[i][k] * other.arr[k][j];
                }
                multiply.result[i][j] = sum;

            }
        }

        return multiply;
    }
        
    void displayProduct() {
        for(int i = 0; i < SIZE; i++)
        {
            for(int j = 0; j < SIZE; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    
};

int main() {
    Matrix a, b, product;

    cout << "Enter First Matrix:" << endl;
    a.getData();

    cout << "Enter Second Matrix: " << endl;
    b.getData();
    product = a * b;
    product.displayProduct();
    return 0;
}