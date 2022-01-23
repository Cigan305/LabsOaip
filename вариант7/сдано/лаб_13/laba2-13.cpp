#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int ch;
    char* p;

    cout <<"Введите количество символов " <<endl;
    cin >> ch;

    cout <<"Введите текст " <<endl;

    char* s = new char[ch];

    for (int i = 0; i < ch; i++)
    {
        cin >> s[i];
        cout <<s[i];
    }

    char d[1];

    cout <<"\nВведите символ отвечающий за разделение" <<endl;
    cin >> d[0];

    p = strtok(s, d);
    
    while (p != NULL)
    {
        cout << p <<endl;
        p = strtok(NULL, d);
    }

return 0;
}