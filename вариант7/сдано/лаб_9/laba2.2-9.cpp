#include<iostream>
#include<time.h>
#include<cmath>

using namespace std;
int main()
{
    const int rows = 10;
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

    bool flag = false;

    for(int i = 0; i < rows; i++ )
    {
        flag = false;
        for(int j = 0; j < cols; j++ )
        {
            if(arr[i][j] < 0)
            {
                flag = true;
                break;
            }    
        }   
    }    

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;
        for(int j = 0; j < rows; j++) 
        {
            
            if(flag == true)
            {
                sum += arr[i][j];  
            }        
        }
        cout << sum << endl;
    }

    return 0;
}