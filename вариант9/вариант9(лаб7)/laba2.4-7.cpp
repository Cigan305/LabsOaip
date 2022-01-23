      
#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    const int a = 16;
    const int b = 8;
    int arr[a][b];
    int k = -200;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "\t | \t";
        }
        cout << endl;
    }

    return 0;
}