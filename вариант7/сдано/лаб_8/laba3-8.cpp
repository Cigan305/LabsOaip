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
    
    int *arr = new int[n];
    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    cout << "Print array:\n";
    for(int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 21 + (- 10);
        cout << *(arr + i) << "\t";
    }

    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    cout << endl;
    cout << "min = " << min << endl;

    cout << "Print new array:\n";
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) > 0)
        {
            *(arr + i) = min;
        }
        cout << *(arr + i) << "    ";
    }

    delete [] arr;
    arr = NULL;
    return 0;
}