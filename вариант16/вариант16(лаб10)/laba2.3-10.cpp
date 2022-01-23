#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 15;
    const int b = 2;
    const int c = 2;

    char arr[a][b][c];

    int d = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c ; k++)
            {
                arr[i][j][k] = rand() % 26 + 65 ;
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c ; k++)
            {
                if(arr[i][j][k] == 'V')
                {
                    d += 1;
                }
            }
        }
    }
    cout << "Количество букв 'V': " << d << endl;
   
    return 0;
}