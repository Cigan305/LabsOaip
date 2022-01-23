#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    const int a = 10;
    const int b = 10;

    int arr[a][b] = {{ 16, 78, 0, 6, -29, 19, -52, 65, 65, 51},
                    { -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
                    { -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
                    { 30, 49, 49, -48, 0, 57, -6, -85, 0, -18},
                    { -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
                    { -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
                    { 88, -61, 0, -64, -83, -83, -83, 90, 15, 8},
                    { -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
                    { 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
                    { 78, 60, -79, -18, 30, -13, -34, -92, 1, -38}};

    
    int maxCount = 1, maxIndex = 0;
    for(int i = 0; i < a; i++)
    {
        int curCount = 1;
        for(int j = 0; j < b; j++)
        {
            if(arr[i][j] == arr[i][j + 1])
            {
                curCount++;
            }
        }
        if(curCount > maxCount)
        {
            maxCount = curCount;  
            maxIndex = i;
        }         
    }

    cout << maxIndex << endl;
    
    return 0;
}