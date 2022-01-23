#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std; 
int main()
{
    srand(time(NULL));
    int a, t;

    cout << "Введите размерность массива: ";
    cin >> a;

    while (a < 0)
    {
        cout << "Введите размерность массива: ";
        cin >> a;
    }

    int *arr = new int[a];

    if(arr == NULL)
    {
        cout << "Нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "  ";
    }

    cout << endl;


    t = arr[0];

    for(int i = 1; i < a; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[a - 1] = t;

    for(int i = 0; i < a; i++)
    {
        cout << arr[i] <<  "  ";
    }

    delete [] arr;
    arr = NULL;
    return 0;
}