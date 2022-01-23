#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 28;
    const int b = 9;
    int matrix[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
           matrix[i][j] = 100 + rand() % (199 - 100 + 1);
        }
    }

    cout << "Show massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << "   ;   ";
        }
        cout << endl;
    }

    cout << "Show reverse massiv:\n";
    for(int i = a - 1; i >= 0; i--)
    {
        for(int j = b - 1; j >= 0; j--)
        {
            cout << matrix[i][j] << "   ;   ";
        }
        cout << endl;
    }

    return 0;

}

    


 






