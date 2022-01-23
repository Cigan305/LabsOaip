#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int N = 1210;
    int mas[N];
    for(int i = 0; i < N; i++)
    {
        mas[i] = rand() % 10 + 10;
    }
    for(int i = 0; i < N; i++)
    {
        cout << mas[i] << " ";
    }

    cout << endl;

    for(int i = 765; i <= 949; i++ )
    {
        cout << mas[i] << " ";
    }

    cout << endl;

    for(int i = 999; i <= 1099; i++ )
    {
        cout << mas[i] << " ";
    }

    return 0;
}
