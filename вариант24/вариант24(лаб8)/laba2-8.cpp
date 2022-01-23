#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{    
    int N = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> N;
    
    int *arr = new int[N];

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < N; i++)
    {
        cout << "Введите arr["<<i<<"]: ";
        cin >> arr[i];
    }

    int index = -1;
    for (int i=N - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        int sum = 0;
 
        for (int i=index+1; i<N; i++)
        {
            sum = sum + arr[i];
        }    
        cout << "Сумма " << sum << endl;
    }
    else
    {
        cout << "В массиве нет отрицательных элементов" << endl;
    }

    delete [] arr;
    arr = NULL;
    
    return 0;
}