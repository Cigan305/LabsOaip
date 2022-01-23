#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{    
    const int N = 10;
    double arr[N] = {3.24, -0.16, 2.28, 0.16, 3.22, 7.14, 2.88, -3.20, 0.99, -4.15};

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    double sum = 0;
    for(int i = 0; i < N; i++)
    {
        if(i % 2 != 0)
        {
            sum += arr[i];
        }
    }
    cout << "Сумма элементов с нечётными номераами: " << sum << endl;
    
    int n1;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] < 0)
        {
            n1 = i;
            break;
        }
    }

    int n2;
    for(int i = n1 + 1; i < N; i++)
    {
        if(arr[i] < 0)
        {
            n2 = i;
            break;
        }
    }

    double sum2 = 0;
    for(int i = n1 + 1; i < N; i++)
    {
        if(i > n1 && i < n2)
        {
            sum2 += arr[i];
        }
    }

    cout << "Сумму элементов массива: " << sum2 << endl;

    for(int i = 0; i < N; i++)
    {
        if(fabs(arr[i]) < 1)
        {
            arr[i] = 0;
            cout << arr[i] << "  ";
        }
        else if(fabs(arr[i]) > 1)
        {
            cout << arr[i] << "  ";
        }
    }


    return 0;
}