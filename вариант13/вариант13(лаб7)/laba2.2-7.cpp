
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    const int a = 2;
    const int b = 3;
    double matrix[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << "Введите matrix["<<i<<"]["<<j<<"]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Print matrix:" << endl;
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}