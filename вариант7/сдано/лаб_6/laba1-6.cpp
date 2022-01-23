#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    const int N = 15;
    int d = 0;
    double mas[N];
    for(int i = 0; i < N; i++)
    {
        cout << "Введите mas["<<i<<"]: ";
        cin >> mas[i];
    }
    for(int i = 0; i < N; i++)
    {
        if(mas[i] > mas[0])
        {
            d += 1;
        }
    }
    cout << d << endl;
    return 0;
}