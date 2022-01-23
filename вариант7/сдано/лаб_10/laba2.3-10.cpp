#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const int a = 12;
    const int b = 5;
    const int c = 3;

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

    cout << "***********************************" << endl;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c ; k++)
            {
                if(arr[i][j][k] == arr[i][j][k + 1])
                {
                    d += 1;
                    break;
                }
            }
        }
    }
   
    return 0;
}