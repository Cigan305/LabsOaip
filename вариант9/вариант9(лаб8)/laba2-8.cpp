#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    int a;

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
        cout << "Введите arr["<<i<<"]: ";
        cin >> arr[i];
    }

    int n1, index;
    for(int i = a - 1; i >= 0; i--)
    {
        if(arr[i] == 0)
        {
            n1 = 0;
            index = i;
        }
    }

    int sum = 0;
    for(int i = 0; i < a; i++)
    {
        if(i > index)
        {
            sum += arr[i];
        }    
    }

    cout << "Сумма элементов после нуля: " << sum << endl;

    delete [] arr;
    return 0;
}