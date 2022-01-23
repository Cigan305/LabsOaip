#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    const int n = 100;
    char a[n];
    cout << "Введите текст не больше 100 символов: ";
    gets_s(a);
    cout << "Вы ввели: " << a << endl;
    int sz = strlen(a);
    int k = 0, space;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == ' ')
        {
            k++;
        }
    }
    cout << "Количество символов в строке без пробелов: " << sz - k << endl;

    return 0;
}


