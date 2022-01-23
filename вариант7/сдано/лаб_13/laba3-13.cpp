#include <iostream>

using namespace std;

int main()
{

    int ch, ch_b=0, ch_c=0;

    cout <<"Введите количество символов " <<endl;
    cin >> ch;
    cout <<"Введите текст " <<endl;
    char* s = new char[ch];
    for (int i = 0; i < ch; i++)
    {
        cin >> s[i];
        if (s[i]>=48 && s[i]<=57)
        {
            ch_c++;
        }

        else if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= -32 && s[i] <= -1) || s[i]==-72|| s[i] == -88 || s[i] >= 65 && s[i] <= 90 || s[i] >= -64 && s[i] <= -33)
        {
            ch_b++;
        }
    }

    cout <<"\nКоличество букв. " << ch_b <<" Количество цифр " << ch_c << endl;

    return 0;
}