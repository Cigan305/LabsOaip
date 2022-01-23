#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int N = 0;
    int count = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> N;

    while (N < 0)
    {
        cout << "Введите размерность массива A(M): ";
        cin >> N;
    }
    
    int *arr = new int[N];

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < N; i++)
    {
        arr[i] = rand() % 10; 
        cout << arr[i] << " ";
    }

    cout << endl;

    bool flag = true;
    for(int i = 0; i < N; i++)
    {
        flag = true;
        for(int j = i + 1; j < N; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;


    delete [] arr;
    arr = NULL;

    return 0;
}