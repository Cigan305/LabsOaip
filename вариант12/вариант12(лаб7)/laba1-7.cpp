#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    const int n = 5;
    const int m = 4;

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 20;
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    int d = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 7)
            {
                d++;
            }
        }
    }

    cout << d << endl;

}