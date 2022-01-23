#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 25;
    const int b = 11;
    int matrix[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
           matrix[i][j] = rand() % 9 + 11;
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
    for(int i = 24; i >= 0; i--)
    {
        for(int j = 10; j >= 0; j--)
        {
            cout << matrix[i][j] << "   ;   ";
        }
        cout << endl;
    }

    

}

    


 






