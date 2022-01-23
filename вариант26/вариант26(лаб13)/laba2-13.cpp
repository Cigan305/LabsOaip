#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
   
    const int n = 100;
    char a[n];
    char b;
    cout << "Введите текст не больше 100 символов: ";
    gets_s(a);
    cout << "До какого символа выводить? ";
    b = cin.get();
    cout << "Вы ввели: " << a << endl;
    int index;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            index = i;
        }
    }
    for (size_t i = 0; i < index; i++)
    {
        cout << a[i];
    }

    return 0;
}