#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    const int a = 10;
    double arr[a] = {3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, -3.20, 0.99, -4.15};

    double sum = 0;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] < 0)
        {
            sum += arr[i];
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;

    cout << endl;

    double max = arr[0], min = arr[0], indexMax, indexMin;
    for(int i = 0; i < a; i++)
    {  
        if(arr[i] > max)
        {
            max = arr[i];
            indexMax = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            indexMin = i;
        }
    }
    cout << "Максимальное число: " << max << endl;
    cout << "Минимальное число: " << min << endl;

    double f = 1.0;
    for(int i = 0; i < a; i++)
    {  
        if(i > indexMin && i < indexMax)
        {
            f *= arr[i];
        }
    }
    cout << "Произведение элементов между max и min: " << f << endl;

    cout << endl;

    for(int i = 0; i < a; i++)
    {  
        for(int j = a - 1; j >= 0; j--)
        {
            if(arr[j] > arr[j - 1])
            {
                double b = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = b;
            }
        }
    }

    for(int i = 0; i < a; i++)
    {  
        cout << arr[i] << "  ";
    }

    cout << endl;

    
    
    return 0;
}