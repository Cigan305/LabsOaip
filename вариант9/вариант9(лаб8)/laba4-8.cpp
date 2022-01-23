#include<iostream>
#include<time.h>
#include<cmath>

using namespace std;
int main() 
{
    const int a = 10;
    double arr[a] = {-3.24, 0, 2.28, -0.16, 0, -7.14, 2.88, -3.20, 0.99, 0};

    double max = 0;
    for(int i = 0; i < a; i++)
    {
        if(fabs(arr[i]) > max)
        {
            max = fabs(arr[i]);
        }
    }

    cout << "Максимальное по модулю число: " << max;

    cout << endl;

    int n1;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] > 0)
        {
            n1 = i;
            break;
        }
    }

    int n2;
    for(int i = n1 + 1; i < a; i++)
    {
        if(arr[i] > 0)
        {
            n2 = i;
            break;
        }
    }

    double sum = 0; 
    for(int i = 0; i < a; i++)
    {
        if(i > n1 && i < n2)
        {
            sum += arr[i];
        }
    }
    cout << "Сумма элементов между положительными числами: " << sum << endl;

    for(int i = 0; i < a; i++)
    {
        if(arr[i] != 0)
        {
            cout << arr[i] << "  ";
        }
    }

    for(int i = 0; i < a; i++)
    {
        if(arr[i] == 0)
        {
            cout << arr[i] << "  ";
        }
    }

    cout << endl;


    return 0;
}