#include<iostream>

using namespace std;
int main()
{
    int a = 0;
    double arr[100];
    double res;

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
        if(arr[i] > 0)
        {
            res = 0 - arr[i];
            cout << res << " ";
        }
    }

   

    return 0;
}