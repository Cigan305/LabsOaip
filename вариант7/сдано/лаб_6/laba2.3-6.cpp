#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int count;
    double mas[100];
    cout << "Введите размерность массива: ";
    cin >> count;

     while(count < 0 || count > 100)
    {
        cout << "Введите размерность массива: ";
        cin >> count;   
    }

    for(int i = 0; i < count; i++)
    {
        cout << "massiv["<<i<<"];";
        cin >> mas[i];
    }
    for(int i = 0; i < count; i++)
    {
        if(i % 4 != 0)
        {
            cout << mas[i] << endl;
        }
    }
    return 0;
}       

