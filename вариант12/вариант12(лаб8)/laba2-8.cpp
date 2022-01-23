#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{    
    srand(time(NULL));
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
        arr[i] = -10 + rand() % (10 - (-10) + 1);
        cout << arr[i] << "  ";
    }

    cout << endl;

    int n1;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] > 0)
        {
            n1 = i;
            break;
        }
    }

    int sum = 0;
    for(int i = n1 + 1; i < N; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    delete [] arr;
    arr = NULL;
    
    return 0;
}