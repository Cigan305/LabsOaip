#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    const int a = 21;
    const int b = 8;
    int matrix[a][b];
    int k = -49;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] = k;
            k += 7;
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
            matrix[i][j] += 3;
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    return 0;
}

    


 






