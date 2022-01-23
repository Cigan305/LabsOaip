#include<iostream>
using namespace std;

int main()
{
    const int a = 10;
    int arr[a] = {33, 0, 28, -16, -32, 74, 0, -30, 99, 0};
    int max = arr[0], multiply = 1;
    
    cout << "Print array:\n";
    for(int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    for(int i = 0; i < a; i++)
    {
        if(arr[i] > max)
        {
            max = i;
        }
    }
     cout << "Номер максимального элемента: " << max << endl;

    for(int i = 2; i < 6; i++)
    {
        multiply *= arr[i];
    }
     cout << "Произведение элементов массива, расположенных между первым и вторым нулевыми элементами: " << multiply << endl;

    for(int i = 0; i < a; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < a; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}