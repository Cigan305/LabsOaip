#include<iostream>

using namespace std;

int main()
{
    int a;
    double res;
    int mas[100];

     while(a < 0 || a > 100)
    {
        cout << "Введите размерность массива: ";
        cin >> a;   
    }
    
    cout << "Введите размерность массива: ";
    cin >> a;

    for(int i = 0; i < a; i++)
    {
        cout << "Введите vector["<<i<<"]: ";
        cin >> mas[i];
    }
    
    for(int i = 0; i < a; i++)
    {
        if(mas[i] % 7 == 0)
        {
            res = mas[i] / 11000;
            cout << res << endl;
        }
    }
    return 0;
}