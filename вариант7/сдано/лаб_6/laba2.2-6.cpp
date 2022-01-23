#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a;
    int mas[100];
    cout << "Введите размерность массива: ";
    cin >> a;
    
    while(a < 0 || a > 100)
    {
        cout << "Введите размерность массива: ";
        cin >> a;   
    }

    for(int i = 0; i < a; i++)
    {
        cout << "Введите значение элемента  mas["<<i<<"];";
        cin >> mas[i];
    }
    
    for(int i = 0; i < a; i++)
    {
        cout << mas[i] << " ";
    }
    
    cout << endl;

    for(int i = 0; i < a; i++)
    {
        if(mas[i] != 0)
        {
            cout << mas[i] << endl;
        }
    }
    return 0;
}       

