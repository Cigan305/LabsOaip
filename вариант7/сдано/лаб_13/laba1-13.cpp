#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char* s0 = new char[100];

    char* s1 = new char[50];

    cout <<"\nВведите текст:\n";
    cin.getline(s0, 100);

    cout <<s0 <<endl;

    cout <<"\nВведите искомую подстроку (слова:)\n";
    cin.getline(s1, 50);

    cout <<s1 <<endl;

    if (strstr(s0, s1) != NULL)
    {
        cout <<"Есть подстрока " << s1 << " в строке: " <<s0 <<endl;
    }
    
    else
    {
        cout <<"Подстроки " <<s1 <<" нет в строке: " <<s0 <<endl;
    }   

    return 0;
}