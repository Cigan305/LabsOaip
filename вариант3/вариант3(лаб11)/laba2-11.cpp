#include <iostream>
#include <cmath>

using namespace std;

int proiz(int mass[], int m);
int sum(int mass[], int m);
int nechet(int mass[], int m);

int main()
{
    const int m = 10;
    int mass[m] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "Сумма - " << sum(mass, m) << endl;
    cout << "Произведение - " << proiz(mass, m) << endl;
    cout << "Нечетные - " << nechet(mass, m) << endl;

    return 0;

}

int sum(int mass[], int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += mass[i];
    }

    return sum;
}

int proiz(int mass[], int m)
{
    int proiz = 1;
    for (int i = 0; i < m; i++)
    {
        proiz *= mass[i];
    }

    return proiz;
}


int nechet(int mass[], int m)
{
    int nechet = 0;
    for(int i = 0; i < m; i++) 
    {
        if(mass[i] % 2 == 0) {
            nechet++;
        }
    }
    return nechet;    
}
