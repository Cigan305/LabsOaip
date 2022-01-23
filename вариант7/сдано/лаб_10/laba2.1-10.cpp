#include<iostream>
#include<limits.h>

using namespace std;
int main()
{

    const int a = 100;
    int d = 0;
    int arr[a] = { 16, 78, 99, 26, -29, 19, -52, 65, -88, 51,
    -79, -22, 32, -25, -62, -69, -42, -59, -75, 89,
    -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
    30, 49, -28, -48, 0, 57, 46, -85, 0, -18,
    -97, -21, -95, 64, 22, -12, 69, -84, -11, -71,
    -25, 47, 72, 43, 15, -44, 44, 61, 54, 74,
    88, -61, 0, -64, -83, 97, 0, 90, 15, 28,
    -54, 19, 73, 35, -67, -87, 85, -99, -70, -10,
    98, 58, 10, -29, 95, 62, 77, 89, 36, -32,
    78, 60, -79, -18, 30, -13, -34, -92, 61, -38 };
    
    int min = INT_MIN, minIndex = 0;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] > min && arr[i] < 0)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    cout << "Максимально отрицательное = " << min << endl;
    cout << "Индекс = " << minIndex << endl;

    int max = arr[0], maxIndex = 0;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] < max && arr[i] > 0)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Минимально положительное = " << max << endl;
    cout << "Индекс = " << maxIndex << endl;
    
    for(int i = 0; i < a; i++)
    {
        if(i < maxIndex && i > minIndex)
        {
            d += 1;
        }
    }
    cout << "Количество элементов = " << d << endl;

    return 0;
}