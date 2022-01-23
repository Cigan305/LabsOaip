#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    const int n = 5;
    const int m = 4;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 20;
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    
    for(int i = 0; i < n - 1; i++)
    {
        int max = 0;
        for(int j = 0; j < m; j++)
        {
           if(arr[j][i] > max)
           {
               max = arr[j][i];
           }
        }

        cout << max << "  ";
    }

    cout << endl;

}