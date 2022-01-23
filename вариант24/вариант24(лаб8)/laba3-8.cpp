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

    int curCount = 1;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            curCount++;
        }
    }

    cout << curCount << endl;
    

    delete [] arr;
    arr = NULL;
    
    return 0;
}