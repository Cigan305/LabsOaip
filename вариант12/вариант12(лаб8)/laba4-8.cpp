#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{    
    const int N = 10;
    double arr[N] = {-3.24, -0.16, 2.28, 0.16, 3.22, 7.14, 2.88, -3.20, 0.99, -4.15}; 

    for(int i = 0; i < N; i++)
    {
       cout << arr[i] << "  ";
    }

    cout << endl;

    double max = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(fabs(arr[i]) > fabs(max))
        {
            max = arr[i];
        }
    }
    cout << "Мминимальный по модулю элемент массива: " << max << endl;

    int n1 = 0;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] > 0)
        {
            n1 = i;
            break;
        }
    }

    double sum = 0;
    for(int i = n1 + 1; i < N; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;

    int min1 = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(fabs(arr[i]) >= -3 && fabs(arr[i]) <= 3)
        {
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < N; i++)
    {
        if(!(fabs(arr[i]) >= -3 && fabs(arr[i]) <= 3))

            cout << arr[i] << " ";
    }




    return 0;
}