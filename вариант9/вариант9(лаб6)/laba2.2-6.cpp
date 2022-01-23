#include<iostream>

using namespace std;
int main()
{
    int a = 0;
    int arr[100];

    cout << "Введите размерность массива: ";
    cin >> a;

    while (a < 0 || a > 100)
    {
        cout << "Введите размерность массива: ";
        cin >> a;
    }

    for(int  i = 0; i < a; i++)
    {
        cout << " Введите arr["<<i<<"]: ";
        cin >> arr[i];
    }

    for(int  i = 0; i < a; i++)
    {
        if(arr[i] == 0)
        {
            cout << arr[i] << " ";
        } 
    }

    for(int  i = 0; i < a; i++)
    {
        if(arr[i] < 0)
        {
            cout << arr[i] << " ";
        } 
    }

    return 0;
}