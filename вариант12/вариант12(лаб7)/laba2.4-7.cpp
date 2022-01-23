#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    const int a = 18;
    const int b = 7;
    int matrix[a][b];
    int k = 1;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] = k;
            k++;
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
            matrix[i][j] = pow(matrix[i][j], 3);
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    return 0;
}

    


 






