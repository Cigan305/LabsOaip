#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> a;

    while (a < 0)
    {
        cout << "Введите размерность массива A(M): ";
        cin >> a;
    }
    
    int *arr = new int[a];

    if(arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++)
    {
        cout << "Введите arr["<<i<<"]: ";
        cin >> arr[i];
    }

    int n1;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] == 0)
        {
            n1 = i;
            break;
        }
    }

    int n2;
    for(int i = n1 + 1; i < a; i++)
    {
        if(arr[i] == 0)
        {
            n2 = i;
            break;
        }
    }

    int f = 1, res = 0;
    for(int i = n1 + 1; i < a; i++)
    {   
        if(i > n1 && i < n2)
        {
            f *= arr[i];
        }    
    }

    cout << "Произведение элементов между первым и вторым нулевыми элементами: " << f << endl;
    
    delete [] arr;
    arr = NULL;

    return 0;
}