#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int n = 4;
    const int m = 4;
    int matrix[n][m];

    cout << "Print array:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 11;
            cout << matrix[i][j] << "   |   ";
        }
        cout << endl;
    }

    int multiply = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            multiply *= matrix[0][j];
        }
        break;
    }

    cout << "Произведение: " << multiply << endl;

   
    return 0;
}

    


 






