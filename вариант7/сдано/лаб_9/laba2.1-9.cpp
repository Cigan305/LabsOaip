#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    const int rows =10;
    const int cols = 10;
    int arr[rows][cols] = 
        {{ 16, 78, 0, 30, -29, 19, -52, -54, -88, 51},
        { -79, -22, 32, 49, -62, -69, -2, 99, -75, 89},
        { -87, 95, -22, -28, -49, -75, 76, 73, -59, -52},
        { 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
        { -99, -21, -95, 0, 22, -2, 69, -67, -1, -71},
        { -25, 47, 72, 57, 15, -44, 44, -87, 4, 74},
        { 88, -61, 0, -6, -83, 97, 0, 85, 15, 8},
        { -54, 99, 73, -85, -67, -87, 85, -93, -70, 10},
        { 98, 58, -10, 0, 95, 62, 77, -70, 36, -32},
        { 78, 60, -79, -18, 30, -13, -34, 10, 1, -38}};

    bool flag = true;
    int d = 1;
    for(int i = 0; i < rows; i++)
    {
        flag = true;
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout << d << ") Индекс где строка и столбец совпадают: " << i << endl;
            d++;
        }
    }
    
    return 0;
}