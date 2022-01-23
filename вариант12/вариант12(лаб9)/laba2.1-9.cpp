#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    const int a = 10;
    const int b = 10;

    int arr[a][b] = {{ -16, -78, 0, -6, -29, -19, 0, -65, -88, -51},
    { -79, -22, 0, -25, -62, -69, 0, -59, -75, -89},
    { -87, -95, 0, -85, -49, -75, 0, -73, -59, -52},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { -99, -21, 0, 64, 22, -2, 0, -84, -1, -71},
    { -25, 47, 0, 43, 15, -44, 0, 61, 4, 74},
    { 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    { 98, 58, 0, -29, 95, 62, 0, 89, 36, -32}};

    bool flag = true;
    int indexValue;
    for(int i = 0; i < a; i++)
    {
        flag = true;
        for(int j = 0; j < b; j++)
        {
            if(arr[i][j] > 0)
            {
                flag = false;
                break;
            }
        }
        if(flag == false)
        {
            cout << i << endl;
            break;
        }
        
    }

    
    return 0;
}