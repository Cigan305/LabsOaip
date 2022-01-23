      
#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    srand(time(NULL));
    const int a = 35    ;
    const int b = 10;
    int arr[a][b];

    cout << "Show massiv:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = -50 + rand() % (-10-(-50)+1) ;
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    cout << "Show reverse massiv:\n";
    for(int i = a - 1; i >= 0; i--)
    {
        for(int j = b - 1; j >= 0; j--)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }


    return 0;
}