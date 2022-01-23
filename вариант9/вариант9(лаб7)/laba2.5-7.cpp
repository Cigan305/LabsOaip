      
#include <iostream>
#include<time.h>

using namespace std;
int main() 
{       
    srand(time(NULL));
    const int a = 4;
    const int b = 2;
    double arr[a][b] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }

    cout << "New vision of array:\n";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i == 3 || j == 3)
            {
                cout << arr[i][j] << "    ";
            }    
        }
    }

    cout << endl;

    return 0;
}