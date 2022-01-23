#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = 0;
    cout << "Введите размерность массива A(M): ";
    cin >> a;

    while (a < 0)
    {
        cout << "Введите размерность массива A(M): ";
        cin >> a;
    }
    
    int *masA = new int[a];

    if(masA == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    int sum = 0;
    double res;
    cout << "A(M): ";
    for(int i = 0; i < a; i++)
    {
        masA[i] = rand() % 21;
        cout << masA[i] << " ";
        sum += masA[i];
    }

    cout << endl;

    res = sum/a;
    cout << "Среднее арифметическое masA: " << res << endl;
    
    cout << endl;

    int b = 0;
    cout << "Введите размерность массива B(M): ";
    cin >> b;

    while (b < 0)
    {
        cout << "Введите размерность массива B(M): ";
        cin >> b;
    }
    
    int *masB = new int[b];

    if(masB == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }


    int sum2 = 0;
    double res2;
    cout << "masB: ";
    for(int i = 0; i < b; i++)
    {
        masB[i] = rand() % 21;
        cout << masB[i] << " ";
        sum2 += masB[i];
    } 

    cout << endl;

    res2 = sum2/b;
    cout << "Среднее арифметическое masB: " << res2 << endl;
    
    delete [] masA;
    masA = NULL;
    
    delete [] masB;
    masB = NULL;
    return 0;
}