      
#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    const int a = 18;
    const int b = 11;
    int arr[a][b];
    int k = 99;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = k;
            k--;
        }
    }

    cout << "Print massiv\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "Print new massiv\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j]++;
            cout << arr[i][j] << " | ";
        }
        cout << endl;
    }



    return 0;
}