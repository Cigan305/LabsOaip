#include<iostream>

using namespace std;
int main()
{
    int a = 0;
    double arr[100];

    cout << "Введите размерность массива: ";
    cin >> a;

    while (a < 0 || a > 100)
    {
        cout << "Введите размерность массива: ";
        cin >> a;
    }

    for(int  i = 0; i < a; i++)
    {
        cout << " Введите massive["<<i<<"]: ";
        cin >> arr[i];
    }

    for(int  i = 0; i < a; i++)
    {
        if(i % 2 == 0 || i % 3 == 0)
        {
            cout << arr[i] << endl;
        } 
    }


    return 0;
}