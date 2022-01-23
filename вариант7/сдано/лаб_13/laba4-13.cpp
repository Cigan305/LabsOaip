#include <iostream>
using namespace std;

int main()
{
    
    int ch;

    cout <<"Введите количество символов " <<endl;
    cin >> ch;

    cout <<"Введите текст " <<endl;

    char* s = new char[ch];

    cout <<endl;

    for (int i = 0; i < ch; i++)
    {
        cin >> s[i];
        if (ch % 5 == 0 && (s[i] == 123 || s[i] == 125 || s[i] == 91|| s[i] == 93|| s[i] == 41|| s[i] == 40))
        {
            cout <<s[i];
        }
    } 
    return 0;   
}


