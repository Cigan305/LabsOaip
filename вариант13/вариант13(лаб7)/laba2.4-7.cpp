#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    const int a = 16;
    const int b = 9;
    int matrix[a][b];
    int k = -100;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] = k;
            k += 3;
        }
    }

    cout << "Print massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    cout << "Print new massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] *= 2;
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    return 0;
}

    


 






