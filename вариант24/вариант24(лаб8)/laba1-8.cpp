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
    
    int *masA = new int[a];

    if(masA == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < a; i++)
    {
        masA[i] = -10 + rand() % 21;
    }

    int d = 0;
    for(int i = 0; i < a; i++)
    {
        if(masA[i] < 0)
        {
            d += 1;
        }   
    }
    cout << "Количество отрицательных элементов массива A(N) = " <<  d << endl;

    int b = 0;
    cout << "Введите размерность массива B(M): ";
    cin >> b;

    int *masB = new int[b];
    if(masB == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }

    for(int i = 0; i < b; i++)
    {
        masB[i] = -10 + rand() % 21;
    } 

    int e = 0;
    for(int i = 0; i < b; i++)
    {
        if(masB[i] < 0)
        {
            e += 1;
        }   
    }
    cout << "Количество отрицательных элементов массива B(M) = " <<  e << endl;
    
    if(d < e)
    {
        cout << "masA: ";
        for(int i = 0; i < a; i++)
        {
            cout << masA[i] << "    ";
        }

        cout << endl;

        cout << "masB: ";
        for(int i = 0; i < a; i++)
        {
            cout << masB[i] << "    ";
        }
    }
    else if(e < d)
    {
        cout << "masB: ";
        for(int i = 0; i < a; i++)
        {
            cout << masB[i] << "    ";
        }
        
        cout << endl;

        cout << "masA: ";
        for(int i = 0; i < a; i++)
        {
            cout << masA[i] << "    ";
        }
    }
    else
    {
        cout << "Количество отрицательных чисел обоих массивов одинаково!!!!!" << endl;
    }

    delete [] masA;
    masA = NULL;
    
    delete [] masB;
    masB = NULL;
    return 0;
}