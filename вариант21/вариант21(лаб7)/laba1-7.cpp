#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    srand(time(NULL));
    const int a = 6;
    const int b = 6;
    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    for(int i = 0; i < a; i++)
    {
        int sum = 0;
        for(int j = 0; j < b; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }





return 0;
}