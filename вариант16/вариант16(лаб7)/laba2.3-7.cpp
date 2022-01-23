#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 26;
    const int b = 12;
    int matrix[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
           matrix[i][j] = -9 + rand() % (-3 + (-9) + 1);
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

    

}

    


 






