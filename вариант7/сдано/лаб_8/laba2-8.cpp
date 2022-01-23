#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    
    int *arr =  new int[n];
    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {   
        arr[i] = rand() % 20;
    }

    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }

    cout << "Print array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }   

    cout << endl;

    cout << "Минимальное значение: " << min << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        if(*(arr + i) == min)
        {
            continue;
        }
    }

    cout << endl;

    delete [] arr;
    arr = NULL;
    return 0;
}